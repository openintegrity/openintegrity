<?php
/**
 * @file
 * openintegrity.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openintegrity_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "password_policy" && $api == "default_password_policy") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openintegrity_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openintegrity_node_info() {
  $items = array(
    'claim' => array(
      'name' => t('Claim'),
      'base' => 'node_content',
      'description' => t('Claim that a specific Entry has certain Criteria supported by or opposed by Evidence'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'entry' => array(
      'name' => t('Entry'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'evidence' => array(
      'name' => t('Evidence'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'index' => array(
      'name' => t('Index'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('A simple static page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'subindex' => array(
      'name' => t('SubIndex'),
      'base' => 'node_content',
      'description' => t('SubIndex scores attached to SubCriteria'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_profile2_type().
 */
function openintegrity_default_profile2_type() {
  $items = array();
  $items['community'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "community",
    "label" : "Community",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  $items['developer'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "developer",
    "label" : "Developer",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Main",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  $items['peer_reviewer'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "peer_reviewer",
    "label" : "Peer-reviewer",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function openintegrity_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_browse'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_browse",
    "name" : "Browse",
    "index_id" : "default_node_index",
    "type" : "search_api_views",
    "enabled" : "1",
    "options" : { "result count" : true, "fields" : [] }
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function openintegrity_default_search_api_index() {
  $items = array();
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "Default node index",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : "solr",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "data_alter_callbacks" : { "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] } },
      "processors" : {
        "search_api_case_ignore" : { "status" : 1, "weight" : "0", "settings" : { "strings" : 0 } },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\nh2 = 3\\nh3 = 2\\nstrong = 2\\nb = 2\\nem = 1.5\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : { "spaces" : "[^\\\\p{L}\\\\p{N}]", "ignorable" : "[-]" }
        }
      },
      "fields" : {
        "type" : { "type" : "string" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "promote" : { "type" : "boolean" },
        "sticky" : { "type" : "boolean" },
        "created" : { "type" : "date" },
        "changed" : { "type" : "date" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "comment_count" : { "type" : "integer" },
        "field_entry_score" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_entry_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "search_api_language" : { "type" : "string" },
        "body:value" : { "type" : "text" },
        "field_entry_score:item_id" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_entry_score:revision_id" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_entry_score:field_name" : { "type" : "list\\u003Cstring\\u003E" },
        "field_entry_score:archived" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_entry_score:uuid" : { "type" : "list\\u003Ctext\\u003E" },
        "field_entry_score:url" : { "type" : "list\\u003Curi\\u003E" },
        "field_entry_score:field_criteria" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_entry_score:field_index_score" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_entry_type:name" : { "type" : "text" }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function openintegrity_default_search_api_server() {
  $items = array();
  $items['database'] = entity_import('search_api_server', '{
    "name" : "Database",
    "machine_name" : "database",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "indexes" : { "default_node_index" : {
          "type" : {
            "table" : "search_api_db_default_node_index_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_default_node_index_title",
            "type" : "text",
            "boost" : "5.0"
          },
          "promote" : {
            "table" : "search_api_db_default_node_index_promote",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "sticky" : {
            "table" : "search_api_db_default_node_index_sticky",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_default_node_index_created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_default_node_index_changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_default_node_index_author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "comment_count" : {
            "table" : "search_api_db_default_node_index_comment_count",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_default_node_index_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_default_node_index_body_value",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_entry_type" : {
            "table" : "search_api_db_default_node_index_field_entry_type",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_entry_type:name" : {
            "table" : "search_api_db_default_node_index_field_entry_type_name",
            "type" : "text",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "0"
  }');
  $items['solr'] = entity_import('search_api_server', '{
    "name" : "Solr",
    "machine_name" : "solr",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8080",
      "path" : "\\/solr",
      "http_user" : "root",
      "http_pass" : "ABMs44#clerk",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "http_method" : "POST",
      "autocorrect_spell" : 1,
      "autocorrect_suggest_words" : 1
    },
    "enabled" : "1"
  }');
  return $items;
}
