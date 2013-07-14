<?php
/**
 * @file
 * openintegrity.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openintegrity_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'browse';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_node_index';
  $view->human_name = 'Browse';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Browse';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'index-browse';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Indexed Node: Logo » The image file. */
  $handler->display->display_options['relationships']['field_logo_file']['id'] = 'field_logo_file';
  $handler->display->display_options['relationships']['field_logo_file']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['relationships']['field_logo_file']['field'] = 'field_logo_file';
  /* Field: Indexed Node: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_logo']['element_class'] = 'logo';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'static_badge';
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'entry' => 'entry',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Browse tools';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'title' => 'title',
    'body:value' => 'body:value',
    'field_entry_type:name' => 'field_entry_type:name',
  );
  /* Filter criterion: Indexed Node: Entry Type */
  $handler->display->display_options['filters']['field_entry_type']['id'] = 'field_entry_type';
  $handler->display->display_options['filters']['field_entry_type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['field_entry_type']['field'] = 'field_entry_type';
  $handler->display->display_options['filters']['field_entry_type']['value'] = array();
  $handler->display->display_options['filters']['field_entry_type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_entry_type']['expose']['operator_id'] = 'field_entry_type_op';
  $handler->display->display_options['filters']['field_entry_type']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_entry_type']['expose']['operator'] = 'field_entry_type_op';
  $handler->display->display_options['filters']['field_entry_type']['expose']['identifier'] = 'field_entry_type';
  $handler->display->display_options['filters']['field_entry_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_entry_type']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'browse';
  $export['browse'] = $view;

  $view = new view();
  $view->name = 'claim_comments';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'comment';
  $view->human_name = 'Claim Comments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Field: Comment: Title */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  $handler->display->display_options['fields']['subject']['label'] = '';
  $handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Comment: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'comment';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid_1']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['validate_options']['types'] = array(
    'claim' => 'claim',
  );
  /* Filter criterion: Comment: Approved */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'comment';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_node']['id'] = 'status_node';
  $handler->display->display_options['filters']['status_node']['table'] = 'node';
  $handler->display->display_options['filters']['status_node']['field'] = 'status';
  $handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status_node']['value'] = 1;
  $handler->display->display_options['filters']['status_node']['group'] = 1;
  $handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;
  $export['claim_comments'] = $view;

  $view = new view();
  $view->name = 'create_entry_index_subindex_claim';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Create Entry Index SubIndex Claim';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent_1']['id'] = 'parent_1';
  $handler->display->display_options['relationships']['parent_1']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent_1']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent_1']['relationship'] = 'parent';
  $handler->display->display_options['relationships']['parent_1']['label'] = 'Grand Parent';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent_1';
  $handler->display->display_options['fields']['name']['label'] = 'Grand Parent';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = 'Parent';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['link_to_taxonomy'] = TRUE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'if ($row->name_1 =="") { return "Index"; } else if ($row->name == "") { return "SubIndex"; } else {return "Claim";}
 ';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php echo $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'parent_1';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['relationship'] = 'parent';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight_2']['id'] = 'weight_2';
  $handler->display->display_options['sorts']['weight_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_2']['field'] = 'weight';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'criteria' => 'criteria',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['group'] = 1;
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'return ($row->php !="Claim");';

  /* Display: Master */
  $handler = $view->new_display('views_rules', 'Master', 'views_rules_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent_1';
  $handler->display->display_options['fields']['name']['label'] = 'Grand Parent';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = 'Parent';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['link_to_taxonomy'] = TRUE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'if ($row->name_1 =="") { return "Index"; } else if ($row->name == "") { return "SubIndex"; } else {return "Claim";}
 ';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php echo $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['rules_variables'] = array(
    'name' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'taxonomy_term',
      'label' => 'Taxonomy term: Name',
      'name' => 'name',
    ),
    'name_1' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => 'Name',
      'name' => 'name_1',
    ),
    'name_2' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'taxonomy_term',
      'label' => 'Term',
      'name' => 'term',
    ),
    'php' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'text',
      'label' => 'Type',
      'name' => 'type',
    ),
  );

  /* Display: Index */
  $handler = $view->new_display('views_rules', 'Index', 'views_rules_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent_1';
  $handler->display->display_options['fields']['name']['label'] = 'Grand Parent';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = 'Parent';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['link_to_taxonomy'] = TRUE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'if ($row->name_1 =="") { return "Index"; } else if ($row->name == "") { return "SubIndex"; } else {return "Claim";}
 ';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php echo $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'criteria' => 'criteria',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['group'] = 1;
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'return ($row->php !="Index");';
  $handler->display->display_options['rules_variables'] = array(
    'name' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'taxonomy_term',
      'label' => 'Taxonomy term: Name',
      'name' => 'name',
    ),
    'name_1' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => 'Name',
      'name' => 'name_1',
    ),
    'name_2' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'taxonomy_term',
      'label' => 'Term',
      'name' => 'term',
    ),
    'php' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'text',
      'label' => 'Type',
      'name' => 'type',
    ),
    'tid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'taxonomy_term',
      'label' => 'Index',
      'name' => 'index',
    ),
  );

  /* Display: SubIndex */
  $handler = $view->new_display('views_rules', 'SubIndex', 'views_rules_3');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent_1';
  $handler->display->display_options['fields']['name']['label'] = 'Grand Parent';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = 'Parent';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['link_to_taxonomy'] = TRUE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'if ($row->name_1 =="") { return "Index"; } else if ($row->name == "") { return "SubIndex"; } else {return "Claim";}
 ';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php echo $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'default';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['parent']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['parent']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['parent']['validate_options']['vocabularies'] = array(
    'criteria' => 'criteria',
  );
  $handler->display->display_options['arguments']['parent']['validate_options']['type'] = 'convert';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'criteria' => 'criteria',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['group'] = 1;
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'return ($row->php !="SubIndex");';
  $handler->display->display_options['rules_parameter'] = array(
    'parent' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Taxonomy term: Parent term',
      'name' => 'parent',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'name' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'taxonomy_term',
      'label' => 'Taxonomy term: Name',
      'name' => 'name',
    ),
    'name_1' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => 'Name',
      'name' => 'name_1',
    ),
    'name_2' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'taxonomy_term',
      'label' => 'Term',
      'name' => 'term',
    ),
    'php' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'text',
      'label' => 'Type',
      'name' => 'type',
    ),
    'tid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'taxonomy_term',
      'label' => 'SubIndex',
      'name' => 'subindex',
    ),
  );

  /* Display: Claim */
  $handler = $view->new_display('views_rules', 'Claim', 'views_rules_4');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['relationship'] = 'parent';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'default';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['parent']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['parent']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['parent']['validate_options']['vocabularies'] = array(
    'criteria' => 'criteria',
  );
  $handler->display->display_options['arguments']['parent']['validate_options']['type'] = 'convert';
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent_1']['id'] = 'parent_1';
  $handler->display->display_options['arguments']['parent_1']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent_1']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['parent_1']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['parent_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['parent_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['parent_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['parent_1']['validate_options']['vocabularies'] = array(
    'criteria' => 'criteria',
  );
  $handler->display->display_options['arguments']['parent_1']['validate_options']['type'] = 'convert';
  $handler->display->display_options['rules_parameter'] = array(
    'parent' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Index',
      'name' => 'index',
    ),
    'parent_1' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'SubIndex',
      'name' => 'subindex',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'name' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'taxonomy_term',
      'label' => 'Taxonomy term: Name',
      'name' => 'name',
    ),
    'name_1' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => 'Name',
      'name' => 'name_1',
    ),
    'name_2' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'taxonomy_term',
      'label' => 'Term',
      'name' => 'term',
    ),
    'php' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'text',
      'label' => 'Type',
      'name' => 'type',
    ),
    'tid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'taxonomy_term',
      'label' => 'Claim',
      'name' => 'claim',
    ),
  );
  $export['create_entry_index_subindex_claim'] = $view;

  $view = new view();
  $view->name = 'entry';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Entry';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    2 => array(
      'field' => 'title_3',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_index_entry_node']['id'] = 'reverse_field_index_entry_node';
  $handler->display->display_options['relationships']['reverse_field_index_entry_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_index_entry_node']['field'] = 'reverse_field_index_entry_node';
  $handler->display->display_options['relationships']['reverse_field_index_entry_node']['label'] = 'Index';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_subindex_index_node']['id'] = 'reverse_field_subindex_index_node';
  $handler->display->display_options['relationships']['reverse_field_subindex_index_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_subindex_index_node']['field'] = 'reverse_field_subindex_index_node';
  $handler->display->display_options['relationships']['reverse_field_subindex_index_node']['relationship'] = 'reverse_field_index_entry_node';
  $handler->display->display_options['relationships']['reverse_field_subindex_index_node']['label'] = 'SubIndex';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_claim_subindex_node']['id'] = 'reverse_field_claim_subindex_node';
  $handler->display->display_options['relationships']['reverse_field_claim_subindex_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_claim_subindex_node']['field'] = 'reverse_field_claim_subindex_node';
  $handler->display->display_options['relationships']['reverse_field_claim_subindex_node']['relationship'] = 'reverse_field_subindex_index_node';
  $handler->display->display_options['relationships']['reverse_field_claim_subindex_node']['label'] = 'Claim';
  /* Field: Field: Index Score */
  $handler->display->display_options['fields']['field_index_score']['id'] = 'field_index_score';
  $handler->display->display_options['fields']['field_index_score']['table'] = 'field_data_field_index_score';
  $handler->display->display_options['fields']['field_index_score']['field'] = 'field_index_score';
  $handler->display->display_options['fields']['field_index_score']['relationship'] = 'reverse_field_index_entry_node';
  $handler->display->display_options['fields']['field_index_score']['label'] = '';
  $handler->display->display_options['fields']['field_index_score']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_index_score']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_index_entry_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[title_1] [field_index_score]';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'h1';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  /* Field: Content: SubIndex Developer Score */
  $handler->display->display_options['fields']['field_subindex_developer_score']['id'] = 'field_subindex_developer_score';
  $handler->display->display_options['fields']['field_subindex_developer_score']['table'] = 'field_data_field_subindex_developer_score';
  $handler->display->display_options['fields']['field_subindex_developer_score']['field'] = 'field_subindex_developer_score';
  $handler->display->display_options['fields']['field_subindex_developer_score']['relationship'] = 'reverse_field_subindex_index_node';
  $handler->display->display_options['fields']['field_subindex_developer_score']['label'] = '';
  $handler->display->display_options['fields']['field_subindex_developer_score']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subindex_developer_score']['element_label_colon'] = FALSE;
  /* Field: Content: SubIndex Community Score */
  $handler->display->display_options['fields']['field_subindex_community_score']['id'] = 'field_subindex_community_score';
  $handler->display->display_options['fields']['field_subindex_community_score']['table'] = 'field_data_field_subindex_community_score';
  $handler->display->display_options['fields']['field_subindex_community_score']['field'] = 'field_subindex_community_score';
  $handler->display->display_options['fields']['field_subindex_community_score']['relationship'] = 'reverse_field_subindex_index_node';
  $handler->display->display_options['fields']['field_subindex_community_score']['label'] = '';
  $handler->display->display_options['fields']['field_subindex_community_score']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subindex_community_score']['element_label_colon'] = FALSE;
  /* Field: Content: SubIndex Peer Review Score */
  $handler->display->display_options['fields']['field_subindex_peer_review_score']['id'] = 'field_subindex_peer_review_score';
  $handler->display->display_options['fields']['field_subindex_peer_review_score']['table'] = 'field_data_field_subindex_peer_review_score';
  $handler->display->display_options['fields']['field_subindex_peer_review_score']['field'] = 'field_subindex_peer_review_score';
  $handler->display->display_options['fields']['field_subindex_peer_review_score']['relationship'] = 'reverse_field_subindex_index_node';
  $handler->display->display_options['fields']['field_subindex_peer_review_score']['label'] = '';
  $handler->display->display_options['fields']['field_subindex_peer_review_score']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subindex_peer_review_score']['element_label_colon'] = FALSE;
  /* Field: Content: SubIndex Summary Score */
  $handler->display->display_options['fields']['field_subindex_summary_score']['id'] = 'field_subindex_summary_score';
  $handler->display->display_options['fields']['field_subindex_summary_score']['table'] = 'field_data_field_subindex_summary_score';
  $handler->display->display_options['fields']['field_subindex_summary_score']['field'] = 'field_subindex_summary_score';
  $handler->display->display_options['fields']['field_subindex_summary_score']['relationship'] = 'reverse_field_subindex_index_node';
  $handler->display->display_options['fields']['field_subindex_summary_score']['label'] = '';
  $handler->display->display_options['fields']['field_subindex_summary_score']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subindex_summary_score']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_subindex_index_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] [field_subindex_developer_score] [field_subindex_community_score] [field_subindex_peer_review_score] [field_subindex_summary_score]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_claim_subindex_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'reverse_field_claim_subindex_node';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_3']['link_to_node'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view']['view'] = 'entry_evidence';
  $handler->display->display_options['fields']['view']['arguments'] = '[nid]';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entry Full Report */
  $handler = $view->new_display('entity_view', 'Entry Full Report', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'entry',
  );
  $handler->display->display_options['show_title'] = 1;
  $export['entry'] = $view;

  $view = new view();
  $view->name = 'entry_evidence';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Claim Evidences';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'sort' => array(
      'bef_format' => 'bef_links',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 1,
        'combine_rewrite' => 'date Asc|Oldest first
date Desc|Newest first',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h4>Evidences</h4>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['php_output'] = '<?php
module_load_include(\'inc\', \'node\', \'node.pages\');

$form = node_add(\'evidence\');
//echo dprint_r($form[\'field_evidence_claim\'],true);
//echo dprint_r($view->args[0],true);
$form[\'field_evidence_claim\'][\'und\'][0][\'target_id\'][\'#value\']=$view->args[0];
$form[\'field_evidence_claim\'][\'und\'][0][\'target_id\'][\'#access\'] = 0;
$output = drupal_render($form);
echo $output;
?>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h5';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'date';
  /* Contextual filter: Content: Evidence Claim (field_evidence_claim) */
  $handler->display->display_options['arguments']['field_evidence_claim_target_id']['id'] = 'field_evidence_claim_target_id';
  $handler->display->display_options['arguments']['field_evidence_claim_target_id']['table'] = 'field_data_field_evidence_claim';
  $handler->display->display_options['arguments']['field_evidence_claim_target_id']['field'] = 'field_evidence_claim_target_id';
  $handler->display->display_options['arguments']['field_evidence_claim_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_evidence_claim_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_evidence_claim_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_evidence_claim_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_evidence_claim_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_evidence_claim_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_evidence_claim_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_evidence_claim_target_id']['validate_options']['types'] = array(
    'claim' => 'claim',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'evidence' => 'evidence',
  );
  $export['entry_evidence'] = $view;

  $view = new view();
  $view->name = 'iterate_criteria';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Iterate Criteria';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent_1']['id'] = 'parent_1';
  $handler->display->display_options['relationships']['parent_1']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent_1']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent_1']['relationship'] = 'parent';
  $handler->display->display_options['relationships']['parent_1']['label'] = 'Grand Parent';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent_1';
  $handler->display->display_options['fields']['name']['label'] = 'Grand Parent';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = 'Parent';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['link_to_taxonomy'] = TRUE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'if ($row->name_1 =="") { return "Index"; } else if ($row->name == "") { return "SubIndex"; } else {return "Claim";}
 ';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php echo $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'parent_1';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['relationship'] = 'parent';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight_2']['id'] = 'weight_2';
  $handler->display->display_options['sorts']['weight_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_2']['field'] = 'weight';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'criteria' => 'criteria',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['group'] = 1;
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'return ($row->php !="Claim");';

  /* Display: Criteria */
  $handler = $view->new_display('views_rules', 'Criteria', 'views_rules_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent_1';
  $handler->display->display_options['fields']['name']['label'] = 'Grand Parent';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = 'Parent';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['link_to_taxonomy'] = TRUE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'if ($row->name_1 =="") { return "Index"; } else if ($row->name == "") { return "SubIndex"; } else {return "Claim";}
 ';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php echo $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'criteria' => 'criteria',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['group'] = 1;
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'return ($row->php !="Index");';
  $handler->display->display_options['rules_variables'] = array(
    'name' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'taxonomy_term',
      'label' => 'Taxonomy term: Name',
      'name' => 'name',
    ),
    'name_1' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => 'Name',
      'name' => 'name_1',
    ),
    'name_2' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'taxonomy_term',
      'label' => 'Term',
      'name' => 'term',
    ),
    'php' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'text',
      'label' => 'Type',
      'name' => 'type',
    ),
    'tid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'taxonomy_term',
      'label' => 'Criteria',
      'name' => 'criteria',
    ),
  );

  /* Display: SubCriteria */
  $handler = $view->new_display('views_rules', 'SubCriteria', 'views_rules_3');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent_1';
  $handler->display->display_options['fields']['name']['label'] = 'Grand Parent';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = 'Parent';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['link_to_taxonomy'] = TRUE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'if ($row->name_1 =="") { return "Index"; } else if ($row->name == "") { return "SubIndex"; } else {return "Claim";}
 ';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php echo $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'default';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['parent']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['parent']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['parent']['validate_options']['vocabularies'] = array(
    'criteria' => 'criteria',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'criteria' => 'criteria',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['group'] = 1;
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'return ($row->php !="SubIndex");';
  $handler->display->display_options['rules_parameter'] = array(
    'parent' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Taxonomy term: Parent term',
      'name' => 'parent',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'name' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'taxonomy_term',
      'label' => 'Taxonomy term: Name',
      'name' => 'name',
    ),
    'name_1' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => 'Name',
      'name' => 'name_1',
    ),
    'name_2' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'taxonomy_term',
      'label' => 'Term',
      'name' => 'term',
    ),
    'php' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'text',
      'label' => 'Type',
      'name' => 'type',
    ),
    'tid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'taxonomy_term',
      'label' => 'SubCriteria',
      'name' => 'subcriteria',
    ),
  );

  /* Display: Claim */
  $handler = $view->new_display('views_rules', 'Claim', 'views_rules_4');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent_1']['id'] = 'parent_1';
  $handler->display->display_options['arguments']['parent_1']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent_1']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['parent_1']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['parent_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['parent_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['parent_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['parent_1']['validate_options']['vocabularies'] = array(
    'criteria' => 'criteria',
  );
  $handler->display->display_options['rules_parameter'] = array(
    'parent' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'Index',
      'name' => 'index',
    ),
    'parent_1' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => 'SubIndex',
      'name' => 'subindex',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'name' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'taxonomy_term',
      'label' => 'Taxonomy term: Name',
      'name' => 'name',
    ),
    'name_1' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => 'Name',
      'name' => 'name_1',
    ),
    'name_2' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'taxonomy_term',
      'label' => 'Term',
      'name' => 'term',
    ),
    'php' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'text',
      'label' => 'Type',
      'name' => 'type',
    ),
    'tid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'taxonomy_term',
      'label' => 'Claim',
      'name' => 'claim',
    ),
  );
  $export['iterate_criteria'] = $view;

  $view = new view();
  $view->name = 'iterate_entries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Iterate Entries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_index_entry_node']['id'] = 'reverse_field_index_entry_node';
  $handler->display->display_options['relationships']['reverse_field_index_entry_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_index_entry_node']['field'] = 'reverse_field_index_entry_node';
  $handler->display->display_options['relationships']['reverse_field_index_entry_node']['label'] = 'Entry Index';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'entry' => 'entry',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'entry' => 'entry',
  );

  /* Display: All Entries */
  $handler = $view->new_display('views_rules', 'All Entries', 'views_rules_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['rules_variables'] = array(
    'title' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'text',
      'label' => 'Entry Title',
      'name' => 'entry_title',
    ),
    'nid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'node',
      'label' => 'Entry',
      'name' => 'entry',
    ),
  );

  /* Display: Entry Index */
  $handler = $view->new_display('views_rules', 'Entry Index', 'views_rules_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_index_entry_node';
  $handler->display->display_options['rules_parameter'] = array(
    'nid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Content: Nid',
      'name' => 'nid',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'title' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => 'Content: Title',
      'name' => 'title',
    ),
    'nid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'node',
      'label' => 'Index',
      'name' => 'index',
    ),
  );

  /* Display: Index SubIndex */
  $handler = $view->new_display('views_rules', 'Index SubIndex', 'views_rules_3');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_subindex_index_node']['id'] = 'reverse_field_subindex_index_node';
  $handler->display->display_options['relationships']['reverse_field_subindex_index_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_subindex_index_node']['field'] = 'reverse_field_subindex_index_node';
  $handler->display->display_options['relationships']['reverse_field_subindex_index_node']['label'] = 'Index Subindex';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_subindex_index_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_subindex_index_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'index' => 'index',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'index' => 'index',
  );
  $handler->display->display_options['rules_parameter'] = array(
    'nid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Content: Nid',
      'name' => 'nid',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'title' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => 'Content: Title',
      'name' => 'title',
    ),
    'nid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'node',
      'label' => 'SubIndex',
      'name' => 'subindex',
    ),
  );

  /* Display: SubIndex Claim Instances */
  $handler = $view->new_display('views_rules', 'SubIndex Claim Instances', 'views_rules_4');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_claim_subindex_node']['id'] = 'reverse_field_claim_subindex_node';
  $handler->display->display_options['relationships']['reverse_field_claim_subindex_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_claim_subindex_node']['field'] = 'reverse_field_claim_subindex_node';
  $handler->display->display_options['relationships']['reverse_field_claim_subindex_node']['label'] = 'SubIndex Claim';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_claim_subindex_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_claim_subindex_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'subindex' => 'subindex',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'subindex' => 'subindex',
  );
  $handler->display->display_options['rules_parameter'] = array(
    'nid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Content: Nid',
      'name' => 'nid',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'title' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => 'Content: Title',
      'name' => 'title',
    ),
    'nid' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'node',
      'label' => 'Claim Instance',
      'name' => 'claim_instance',
    ),
  );
  $export['iterate_entries'] = $view;

  $view = new view();
  $view->name = 'recent_activity';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Recent Activity';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Activity';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'index-activity';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_evidence_claim_target_id']['id'] = 'field_evidence_claim_target_id';
  $handler->display->display_options['relationships']['field_evidence_claim_target_id']['table'] = 'field_data_field_evidence_claim';
  $handler->display->display_options['relationships']['field_evidence_claim_target_id']['field'] = 'field_evidence_claim_target_id';
  $handler->display->display_options['relationships']['field_evidence_claim_target_id']['label'] = 'Evidence Claim';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_claim_subindex_target_id']['id'] = 'field_claim_subindex_target_id';
  $handler->display->display_options['relationships']['field_claim_subindex_target_id']['table'] = 'field_data_field_claim_subindex';
  $handler->display->display_options['relationships']['field_claim_subindex_target_id']['field'] = 'field_claim_subindex_target_id';
  $handler->display->display_options['relationships']['field_claim_subindex_target_id']['relationship'] = 'field_evidence_claim_target_id';
  $handler->display->display_options['relationships']['field_claim_subindex_target_id']['label'] = 'Claim SubIndex';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_subindex_index_target_id']['id'] = 'field_subindex_index_target_id';
  $handler->display->display_options['relationships']['field_subindex_index_target_id']['table'] = 'field_data_field_subindex_index';
  $handler->display->display_options['relationships']['field_subindex_index_target_id']['field'] = 'field_subindex_index_target_id';
  $handler->display->display_options['relationships']['field_subindex_index_target_id']['relationship'] = 'field_claim_subindex_target_id';
  $handler->display->display_options['relationships']['field_subindex_index_target_id']['label'] = 'SubIndex Index';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_index_entry_target_id']['id'] = 'field_index_entry_target_id';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['table'] = 'field_data_field_index_entry';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['field'] = 'field_index_entry_target_id';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['relationship'] = 'field_subindex_index_target_id';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['label'] = 'Index Entry';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_index_entry_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  /* Field: Content: Entry Score */
  $handler->display->display_options['fields']['field_entry_score']['id'] = 'field_entry_score';
  $handler->display->display_options['fields']['field_entry_score']['table'] = 'field_data_field_entry_score';
  $handler->display->display_options['fields']['field_entry_score']['field'] = 'field_entry_score';
  $handler->display->display_options['fields']['field_entry_score']['relationship'] = 'field_index_entry_target_id';
  $handler->display->display_options['fields']['field_entry_score']['label'] = '';
  $handler->display->display_options['fields']['field_entry_score']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entry_score']['type'] = 'custom_formatters_static_badge';
  $handler->display->display_options['fields']['field_entry_score']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_entry_score']['group_column'] = 'tid';
  $handler->display->display_options['fields']['field_entry_score']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_entry_score']['multi_type'] = 'ul';
  /* Field: Content: Evidence Claim */
  $handler->display->display_options['fields']['field_evidence_claim']['id'] = 'field_evidence_claim';
  $handler->display->display_options['fields']['field_evidence_claim']['table'] = 'field_data_field_evidence_claim';
  $handler->display->display_options['fields']['field_evidence_claim']['field'] = 'field_evidence_claim';
  $handler->display->display_options['fields']['field_evidence_claim']['label'] = '';
  $handler->display->display_options['fields']['field_evidence_claim']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_evidence_claim']['element_class'] = 'claim';
  $handler->display->display_options['fields']['field_evidence_claim']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_evidence_claim']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_evidence_claim']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Evidence Status */
  $handler->display->display_options['fields']['field_evidence_status']['id'] = 'field_evidence_status';
  $handler->display->display_options['fields']['field_evidence_status']['table'] = 'field_data_field_evidence_status';
  $handler->display->display_options['fields']['field_evidence_status']['field'] = 'field_evidence_status';
  $handler->display->display_options['fields']['field_evidence_status']['label'] = '';
  $handler->display->display_options['fields']['field_evidence_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_evidence_status']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Evidence submitted [created] by [name]';
  $handler->display->display_options['fields']['name']['element_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_class'] = 'evidence';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'evidence' => 'evidence',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['recent_activity'] = $view;

  $view = new view();
  $view->name = 'select_claim';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Select Claim';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_claim_subindex_target_id']['id'] = 'field_claim_subindex_target_id';
  $handler->display->display_options['relationships']['field_claim_subindex_target_id']['table'] = 'field_data_field_claim_subindex';
  $handler->display->display_options['relationships']['field_claim_subindex_target_id']['field'] = 'field_claim_subindex_target_id';
  $handler->display->display_options['relationships']['field_claim_subindex_target_id']['label'] = 'Claim Subindex';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_subindex_index_target_id']['id'] = 'field_subindex_index_target_id';
  $handler->display->display_options['relationships']['field_subindex_index_target_id']['table'] = 'field_data_field_subindex_index';
  $handler->display->display_options['relationships']['field_subindex_index_target_id']['field'] = 'field_subindex_index_target_id';
  $handler->display->display_options['relationships']['field_subindex_index_target_id']['relationship'] = 'field_claim_subindex_target_id';
  $handler->display->display_options['relationships']['field_subindex_index_target_id']['label'] = 'Subindex Index';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_index_entry_target_id']['id'] = 'field_index_entry_target_id';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['table'] = 'field_data_field_index_entry';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['field'] = 'field_index_entry_target_id';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['relationship'] = 'field_subindex_index_target_id';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['label'] = 'Index Entry';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_index_entry_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'claim' => 'claim',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title_1' => 'title_1',
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['select_claim'] = $view;

  return $export;
}
