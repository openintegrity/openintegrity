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
  $view->name = 'alternatives';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Alternatives';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Alternatives';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'no alternatives';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Category (field_entry_category) */
  $handler->display->display_options['arguments']['field_entry_category_tid']['id'] = 'field_entry_category_tid';
  $handler->display->display_options['arguments']['field_entry_category_tid']['table'] = 'field_data_field_entry_category';
  $handler->display->display_options['arguments']['field_entry_category_tid']['field'] = 'field_entry_category_tid';
  $handler->display->display_options['arguments']['field_entry_category_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_entry_category_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_entry_category_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_entry_category_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_entry_category_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_entry_category_tid']['default_argument_options']['vocabularies'] = array(
    'entry_category' => 'entry_category',
  );
  $handler->display->display_options['arguments']['field_entry_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_entry_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_entry_category_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_entry_category_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_entry_category_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_entry_category_tid']['validate_options']['vocabularies'] = array(
    'entry_category' => 'entry_category',
  );
  $handler->display->display_options['arguments']['field_entry_category_tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['field_entry_category_tid']['break_phrase'] = TRUE;
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
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'alternatives';
  $translatables['alternatives'] = array(
    t('Master'),
    t('Alternatives'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('no alternatives'),
    t('All'),
    t('Page'),
  );
  $export['alternatives'] = $view;

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
  $handler->display->display_options['title'] = 'Home';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 0,
    ),
    'node' => array(
      'entry' => 'entry',
      'blog' => 0,
      'claim' => 0,
      'evidence' => 0,
      'index' => 0,
      'organisation' => 0,
      'page' => 0,
      'subindex' => 0,
    ),
    'node_only' => array(
      'node_changed' => 0,
    ),
  );
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'index-browse';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
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
    'image_style' => 'logo-list',
    'image_link' => 'content',
  );
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_entity'] = 1;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'static_badge';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Sort criterion: Indexed Node: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
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
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'title' => 'title',
  );
  /* Filter criterion: Indexed Node: Type */
  $handler->display->display_options['filters']['field_entry_type']['id'] = 'field_entry_type';
  $handler->display->display_options['filters']['field_entry_type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['field_entry_type']['field'] = 'field_entry_type';
  $handler->display->display_options['filters']['field_entry_type']['value'] = array();
  $handler->display->display_options['filters']['field_entry_type']['group'] = 1;
  $handler->display->display_options['filters']['field_entry_type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_entry_type']['expose']['operator_id'] = 'field_entry_type_op';
  $handler->display->display_options['filters']['field_entry_type']['expose']['operator'] = 'field_entry_type_op';
  $handler->display->display_options['filters']['field_entry_type']['expose']['identifier'] = 'field_entry_type';
  $handler->display->display_options['filters']['field_entry_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_entry_type']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'entry' => 'entry',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'browse';
  $translatables['browse'] = array(
    t('Master'),
    t('Home'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Browse tools'),
    t('Page'),
  );
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
  $translatables['claim_comments'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content'),
    t('All'),
  );
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
  $translatables['create_entry_index_subindex_claim'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Parent'),
    t('Grand Parent'),
    t('Name'),
    t('PHP'),
    t('Term ID'),
    t('.'),
    t(','),
    t('Index'),
    t('SubIndex'),
    t('All'),
    t('Claim'),
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
  $handler->display->display_options['cache']['type'] = 'views_content_cache';
  $handler->display->display_options['cache']['results_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_min_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_max_lifespan'] = '21600';
  $handler->display->display_options['cache']['keys'] = array(
    'comment' => array(
      'changed' => 0,
    ),
    'node' => array(
      'claim' => 'claim',
      'entry' => 'entry',
      'evidence' => 'evidence',
      'subindex' => 'subindex',
      'blog' => 0,
      'index' => 0,
      'organisation' => 0,
      'page' => 0,
    ),
    'node_only' => array(
      'node_changed' => 'node_changed',
    ),
  );
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
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'container';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php //echo dprint_r($view,true);?>';
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
  /* Relationship: Content: Claim Type (field_claim_type) */
  $handler->display->display_options['relationships']['field_claim_type_tid']['id'] = 'field_claim_type_tid';
  $handler->display->display_options['relationships']['field_claim_type_tid']['table'] = 'field_data_field_claim_type';
  $handler->display->display_options['relationships']['field_claim_type_tid']['field'] = 'field_claim_type_tid';
  $handler->display->display_options['relationships']['field_claim_type_tid']['relationship'] = 'reverse_field_claim_subindex_node';
  $handler->display->display_options['relationships']['field_claim_type_tid']['label'] = 'Claim Type Criteria';
  /* Field: Field: Index Score */
  $handler->display->display_options['fields']['field_index_score']['id'] = 'field_index_score';
  $handler->display->display_options['fields']['field_index_score']['table'] = 'field_data_field_index_score';
  $handler->display->display_options['fields']['field_index_score']['field'] = 'field_index_score';
  $handler->display->display_options['fields']['field_index_score']['relationship'] = 'reverse_field_index_entry_node';
  $handler->display->display_options['fields']['field_index_score']['label'] = '';
  $handler->display->display_options['fields']['field_index_score']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_index_score']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_index_score']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_index_entry_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<div class="container accordion-header-title"><div class="criteria-score"><img src="/sites/all/themes/bootstrap/img/[field_index_score].png"/></div><h2>[title_1]</h2></div>';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_wrapper_type'] = 'h1';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: SubIndex Score */
  $handler->display->display_options['fields']['field_subindex_score']['id'] = 'field_subindex_score';
  $handler->display->display_options['fields']['field_subindex_score']['table'] = 'field_data_field_subindex_score';
  $handler->display->display_options['fields']['field_subindex_score']['field'] = 'field_subindex_score';
  $handler->display->display_options['fields']['field_subindex_score']['relationship'] = 'reverse_field_subindex_index_node';
  $handler->display->display_options['fields']['field_subindex_score']['label'] = '';
  $handler->display->display_options['fields']['field_subindex_score']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subindex_score']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subindex_score']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: SubIndex Sum */
  $handler->display->display_options['fields']['field_subindex_sum']['id'] = 'field_subindex_sum';
  $handler->display->display_options['fields']['field_subindex_sum']['table'] = 'field_data_field_subindex_sum';
  $handler->display->display_options['fields']['field_subindex_sum']['field'] = 'field_subindex_sum';
  $handler->display->display_options['fields']['field_subindex_sum']['relationship'] = 'reverse_field_subindex_index_node';
  $handler->display->display_options['fields']['field_subindex_sum']['label'] = '';
  $handler->display->display_options['fields']['field_subindex_sum']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subindex_sum']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subindex_sum']['alter']['text'] = '[field_subindex_sum] supported claim(s)';
  $handler->display->display_options['fields']['field_subindex_sum']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subindex_sum']['empty'] = 'No supported claims';
  $handler->display->display_options['fields']['field_subindex_sum']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: SubIndex Status */
  $handler->display->display_options['fields']['field_subindex_status']['id'] = 'field_subindex_status';
  $handler->display->display_options['fields']['field_subindex_status']['table'] = 'field_data_field_subindex_status';
  $handler->display->display_options['fields']['field_subindex_status']['field'] = 'field_subindex_status';
  $handler->display->display_options['fields']['field_subindex_status']['relationship'] = 'reverse_field_subindex_index_node';
  $handler->display->display_options['fields']['field_subindex_status']['label'] = '';
  $handler->display->display_options['fields']['field_subindex_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subindex_status']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subindex_status']['alter']['text'] = ' | <span class="[field_subindex_status]-claim">[field_subindex_status] claims</span>';
  $handler->display->display_options['fields']['field_subindex_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subindex_status']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_subindex_status']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_subindex_index_node';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_subindex_index_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2 id="subindex-[nid_1]" class="container"><span class="container span-block"><span class="index-trigger">&#94;</span><span class="subcriteria-score"><img src="/sites/all/themes/bootstrap/img/[field_subindex_score]Small.png"/></span><span class="accordion-title">[title]</span><span class="subcriteria-info">[field_subindex_sum][field_subindex_status]</span></span></h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_claim_subindex_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Claim Status */
  $handler->display->display_options['fields']['field_claim_status']['id'] = 'field_claim_status';
  $handler->display->display_options['fields']['field_claim_status']['table'] = 'field_data_field_claim_status';
  $handler->display->display_options['fields']['field_claim_status']['field'] = 'field_claim_status';
  $handler->display->display_options['fields']['field_claim_status']['relationship'] = 'reverse_field_claim_subindex_node';
  $handler->display->display_options['fields']['field_claim_status']['label'] = '';
  $handler->display->display_options['fields']['field_claim_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_claim_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_claim_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_claim_status']['delta_offset'] = '0';
  /* Field: Content: Claim Score */
  $handler->display->display_options['fields']['field_claim_score']['id'] = 'field_claim_score';
  $handler->display->display_options['fields']['field_claim_score']['table'] = 'field_data_field_claim_score';
  $handler->display->display_options['fields']['field_claim_score']['field'] = 'field_claim_score';
  $handler->display->display_options['fields']['field_claim_score']['relationship'] = 'reverse_field_claim_subindex_node';
  $handler->display->display_options['fields']['field_claim_score']['label'] = '';
  $handler->display->display_options['fields']['field_claim_score']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_claim_score']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$ret ="";
$claim = node_load($data->field_claim_subindex_node_nid);
$claim_statuses = $claim->field_claim_status[\'und\'];
foreach ($claim_statuses as $claim_status) {
  $term = taxonomy_term_load($claim_status[\'tid\']);
  switch($term->name) {
    case "Disputed":
      $ret .= " disputed";
      break;
    case "Unsubstantiated":
      $ret .= " unsubstantiated";
      break;
    case "Stale":
      $ret .= " stale";
      break;
  }
}
return $ret;';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php echo $value;?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'reverse_field_claim_subindex_node';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_3']['alter']['text'] = '<h3 id="claim-[nid]" class="nested-title[php]"><span class="container span-block"><span class="index-trigger">&#94;</span><span class="claim-score"><img src="/sites/all/themes/bootstrap/img/[field_claim_score]Small.png"/></span><span class="claim-status[php]">[field_claim_status]</span><span class="nested-title">[title_3]</span></span></h3>';
  $handler->display->display_options['fields']['title_3']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_3']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['title_3']['element_wrapper_class'] = 'container';
  $handler->display->display_options['fields']['title_3']['link_to_node'] = FALSE;
  /* Field: Field: Type */
  $handler->display->display_options['fields']['field_entry_type']['id'] = 'field_entry_type';
  $handler->display->display_options['fields']['field_entry_type']['table'] = 'field_data_field_entry_type';
  $handler->display->display_options['fields']['field_entry_type']['field'] = 'field_entry_type';
  $handler->display->display_options['fields']['field_entry_type']['relationship'] = 'field_claim_type_tid';
  $handler->display->display_options['fields']['field_entry_type']['label'] = '';
  $handler->display->display_options['fields']['field_entry_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_entry_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entry_type']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_claim_type_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['description']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['description']['element_type'] = 'em';
  $handler->display->display_options['fields']['description']['element_class'] = 'claim-description';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['hide_alter_empty'] = FALSE;
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
  /* Contextual filter: Field: Type (field_entry_type) */
  $handler->display->display_options['arguments']['field_entry_type_tid']['id'] = 'field_entry_type_tid';
  $handler->display->display_options['arguments']['field_entry_type_tid']['table'] = 'field_data_field_entry_type';
  $handler->display->display_options['arguments']['field_entry_type_tid']['field'] = 'field_entry_type_tid';
  $handler->display->display_options['arguments']['field_entry_type_tid']['relationship'] = 'field_claim_type_tid';
  $handler->display->display_options['arguments']['field_entry_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_entry_type_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_entry_type_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_entry_type_tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['field_entry_type_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_entry_type_tid']['default_argument_options']['vocabularies'] = array(
    'entry_type' => 'entry_type',
  );
  $handler->display->display_options['arguments']['field_entry_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_entry_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_entry_type_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entry Full Report */
  $handler = $view->new_display('entity_view', 'Entry Full Report', 'entity_view_1');
  $handler->display->display_options['field_language_add_to_query'] = 0;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'entry',
  );
  $handler->display->display_options['show_title'] = 1;
  $translatables['entry'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Index'),
    t('SubIndex'),
    t('Claim'),
    t('Claim Type Criteria'),
    t('<div class="container accordion-header-title"><div class="criteria-score"><img src="/sites/all/themes/bootstrap/img/[field_index_score].png"/></div><h2>[title_1]</h2></div>'),
    t('[field_subindex_sum] supported claim(s)'),
    t('No supported claims'),
    t(' | <span class="[field_subindex_status]-claim">[field_subindex_status] claims</span>'),
    t('<h2 id="subindex-[nid_1]" class="container"><span class="container span-block"><span class="index-trigger">&#94;</span><span class="subcriteria-score"><img src="/sites/all/themes/bootstrap/img/[field_subindex_score]Small.png"/></span><span class="accordion-title">[title]</span><span class="subcriteria-info">[field_subindex_sum][field_subindex_status]</span></span></h2>'),
    t('<h3 id="claim-[nid]" class="nested-title[php]"><span class="container span-block"><span class="index-trigger">&#94;</span><span class="claim-score"><img src="/sites/all/themes/bootstrap/img/[field_claim_score]Small.png"/></span><span class="claim-status[php]">[field_claim_status]</span><span class="nested-title">[title_3]</span></span></h3>'),
    t('All'),
    t('Entry Full Report'),
  );
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
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['row_options']['comments'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h4>Evidences</h4>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: PHP */
  $handler->display->display_options['empty']['php']['id'] = 'php';
  $handler->display->display_options['empty']['php']['table'] = 'views';
  $handler->display->display_options['empty']['php']['field'] = 'php';
  $handler->display->display_options['empty']['php']['empty'] = TRUE;
  $handler->display->display_options['empty']['php']['php_output'] = '<h4>No Evidence to support this Claim. Please submit evidence using the form below.</h4><br>';
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
  $translatables['entry_evidence'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<h4>Evidences</h4>'),
    t('date'),
    t('All'),
  );
  $export['entry_evidence'] = $view;

  $view = new view();
  $view->name = 'entry_utility';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Entry Utility';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Utility';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title_3',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'title_4' => 'title_4',
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'title_1' => 'title_1',
    'title_2' => 'title_2',
    'title_3' => 'title_3',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_index_entry_target_id']['id'] = 'field_index_entry_target_id';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['table'] = 'field_data_field_index_entry';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['field'] = 'field_index_entry_target_id';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['relationship'] = 'field_subindex_index_target_id';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['label'] = 'SubIndex Index Entry';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations_1']['id'] = 'views_bulk_operations_1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations_1']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations_1']['label'] = 'Delete Index';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
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

  /* Display: Evidence */
  $handler = $view->new_display('page', 'Evidence', 'page_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_evidence_claim_target_id']['id'] = 'field_evidence_claim_target_id';
  $handler->display->display_options['relationships']['field_evidence_claim_target_id']['table'] = 'field_data_field_evidence_claim';
  $handler->display->display_options['relationships']['field_evidence_claim_target_id']['field'] = 'field_evidence_claim_target_id';
  $handler->display->display_options['relationships']['field_evidence_claim_target_id']['label'] = 'Claim';
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
  $handler->display->display_options['relationships']['field_subindex_index_target_id']['label'] = 'Claim SubIndex Index';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_index_entry_target_id']['id'] = 'field_index_entry_target_id';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['table'] = 'field_data_field_index_entry';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['field'] = 'field_index_entry_target_id';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['relationship'] = 'field_subindex_index_target_id';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['label'] = 'Claim SubIndex Index Entry';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'evidence::field_evidence_claim' => 'evidence::field_evidence_claim',
        ),
      ),
    ),
    'action::node_export_json_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_evidence_claim_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Claim';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_claim_subindex_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'SubIndex';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_subindex_index_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'Index';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'field_index_entry_target_id';
  $handler->display->display_options['fields']['title_3']['label'] = 'Entry';
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
    'evidence' => 'evidence',
  );
  $handler->display->display_options['path'] = 'evidence_utility';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Evidence Utility';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Claim */
  $handler = $view->new_display('page', 'Claim', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title_2',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations_1' => 'views_bulk_operations_1',
    'type' => 'type',
    'title_4' => 'title_4',
    'title' => 'title',
    'title_1' => 'title_1',
    'title_2' => 'title_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_claim_subindex_target_id_1']['id'] = 'field_claim_subindex_target_id_1';
  $handler->display->display_options['relationships']['field_claim_subindex_target_id_1']['table'] = 'field_data_field_claim_subindex';
  $handler->display->display_options['relationships']['field_claim_subindex_target_id_1']['field'] = 'field_claim_subindex_target_id';
  $handler->display->display_options['relationships']['field_claim_subindex_target_id_1']['label'] = 'Claim SubIndex';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_subindex_index_target_id_1']['id'] = 'field_subindex_index_target_id_1';
  $handler->display->display_options['relationships']['field_subindex_index_target_id_1']['table'] = 'field_data_field_subindex_index';
  $handler->display->display_options['relationships']['field_subindex_index_target_id_1']['field'] = 'field_subindex_index_target_id';
  $handler->display->display_options['relationships']['field_subindex_index_target_id_1']['relationship'] = 'field_claim_subindex_target_id_1';
  $handler->display->display_options['relationships']['field_subindex_index_target_id_1']['label'] = 'Claim SubIndex Index';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_index_entry_target_id']['id'] = 'field_index_entry_target_id';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['table'] = 'field_data_field_index_entry';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['field'] = 'field_index_entry_target_id';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['relationship'] = 'field_subindex_index_target_id_1';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['label'] = 'Claim SubIndex Index Entry';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations_1']['id'] = 'views_bulk_operations_1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations_1']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations_1']['label'] = 'Delete Claim';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_claim_subindex_target_id_1';
  $handler->display->display_options['fields']['title']['label'] = 'SubIndex';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_subindex_index_target_id_1';
  $handler->display->display_options['fields']['title_1']['label'] = 'Index';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_index_entry_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'Entry';
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
    'claim' => 'claim',
  );
  $handler->display->display_options['path'] = 'claim_utility';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Claim Utility';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-open-integrity-admin';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: SubIndex */
  $handler = $view->new_display('page', 'SubIndex', 'page_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations_1' => 'views_bulk_operations_1',
    'type' => 'type',
    'title_4' => 'title_4',
    'title' => 'title',
    'title_1' => 'title_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_subindex_index_target_id']['id'] = 'field_subindex_index_target_id';
  $handler->display->display_options['relationships']['field_subindex_index_target_id']['table'] = 'field_data_field_subindex_index';
  $handler->display->display_options['relationships']['field_subindex_index_target_id']['field'] = 'field_subindex_index_target_id';
  $handler->display->display_options['relationships']['field_subindex_index_target_id']['label'] = 'SubIndex Index';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_index_entry_target_id']['id'] = 'field_index_entry_target_id';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['table'] = 'field_data_field_index_entry';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['field'] = 'field_index_entry_target_id';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['relationship'] = 'field_subindex_index_target_id';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['label'] = 'SubIndex Index Entry';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations_1']['id'] = 'views_bulk_operations_1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations_1']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations_1']['label'] = 'Delete SubIndex';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_subindex_index_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Index';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_index_entry_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Entry';
  $handler->display->display_options['path'] = 'subindex_utility';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'SubIndex Utility';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-open-integrity-admin';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Index */
  $handler = $view->new_display('page', 'Index', 'page_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations_1' => 'views_bulk_operations_1',
    'type' => 'type',
    'title_4' => 'title_4',
    'title_1' => 'title_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_index_entry_target_id']['id'] = 'field_index_entry_target_id';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['table'] = 'field_data_field_index_entry';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['field'] = 'field_index_entry_target_id';
  $handler->display->display_options['relationships']['field_index_entry_target_id']['label'] = 'Index Entry';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations_1']['id'] = 'views_bulk_operations_1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations_1']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations_1']['label'] = 'Delete Index';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_index_entry_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Entry';
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
  $handler->display->display_options['path'] = 'index_utility';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Index Utility';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'menu-open-integrity-admin';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Entry */
  $handler = $view->new_display('page', 'Entry', 'page_5');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations_1']['id'] = 'views_bulk_operations_1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations_1']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations_1']['label'] = 'Delete Entry';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::auto_entitylabel_entity_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_4']['id'] = 'title_4';
  $handler->display->display_options['fields']['title_4']['table'] = 'node';
  $handler->display->display_options['fields']['title_4']['field'] = 'title';
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
    'entry' => 'entry',
  );
  $handler->display->display_options['path'] = 'entry_utility';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Entry Utility';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'menu-open-integrity-admin';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['entry_utility'] = array(
    t('Master'),
    t('Utility'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('SubIndex Index Entry'),
    t('Delete Index'),
    t('Type'),
    t('Title'),
    t('Evidence'),
    t('Claim'),
    t('Claim SubIndex'),
    t('Claim SubIndex Index'),
    t('Claim SubIndex Index Entry'),
    t('SubIndex'),
    t('Index'),
    t('Entry'),
    t('Delete Claim'),
    t('SubIndex Index'),
    t('Delete SubIndex'),
    t('Index Entry'),
    t('Delete Entry'),
  );
  $export['entry_utility'] = $view;

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
  $translatables['iterate_criteria'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Parent'),
    t('Grand Parent'),
    t('Name'),
    t('PHP'),
    t('Term ID'),
    t('.'),
    t(','),
    t('Criteria'),
    t('SubCriteria'),
    t('All'),
    t('Claim'),
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
    'field_entry_type_tid' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => '(SubCriteria) Field: Type (field_entry_type)',
      'name' => 'field_entry_type_tid',
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
    'field_entry_type' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => '(SubCriteria) Field: Type',
      'name' => 'field_entry_type',
    ),
  );
  $translatables['iterate_entries'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Entry Index'),
    t('Nid'),
    t('All'),
    t('All Entries'),
    t('Index SubIndex'),
    t('Index Subindex'),
    t('SubIndex Claim Instances'),
    t('SubIndex Claim'),
  );
  $export['iterate_entries'] = $view;

  $view = new view();
  $view->name = 'iterate_entries_for_scoring';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Iterate Entries for Scoring';
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
  /* Relationship: Content: SubCriteria (field_subcriteria) */
  $handler->display->display_options['relationships']['field_subcriteria_tid']['id'] = 'field_subcriteria_tid';
  $handler->display->display_options['relationships']['field_subcriteria_tid']['table'] = 'field_data_field_subcriteria';
  $handler->display->display_options['relationships']['field_subcriteria_tid']['field'] = 'field_subcriteria_tid';
  $handler->display->display_options['relationships']['field_subcriteria_tid']['relationship'] = 'reverse_field_subindex_index_node';
  $handler->display->display_options['relationships']['field_subcriteria_tid']['label'] = 'SubIndex SubCriteria';
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
  /* Contextual filter: Field: Type (field_entry_type) */
  $handler->display->display_options['arguments']['field_entry_type_tid']['id'] = 'field_entry_type_tid';
  $handler->display->display_options['arguments']['field_entry_type_tid']['table'] = 'field_data_field_entry_type';
  $handler->display->display_options['arguments']['field_entry_type_tid']['field'] = 'field_entry_type_tid';
  $handler->display->display_options['arguments']['field_entry_type_tid']['relationship'] = 'field_subcriteria_tid';
  $handler->display->display_options['arguments']['field_entry_type_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_entry_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_entry_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_entry_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_entry_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_entry_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_entry_type_tid']['validate_options']['vocabularies'] = array(
    'entry_type' => 'entry_type',
  );
  $handler->display->display_options['arguments']['field_entry_type_tid']['validate_options']['type'] = 'tids';
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
    'field_entry_type_tid' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => '(SubIndex SubCriteria) Field: Type (field_entry_type)',
      'name' => 'field_entry_type_tid',
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
  /* Relationship: Content: Claim Type (field_claim_type) */
  $handler->display->display_options['relationships']['field_claim_type_tid']['id'] = 'field_claim_type_tid';
  $handler->display->display_options['relationships']['field_claim_type_tid']['table'] = 'field_data_field_claim_type';
  $handler->display->display_options['relationships']['field_claim_type_tid']['field'] = 'field_claim_type_tid';
  $handler->display->display_options['relationships']['field_claim_type_tid']['relationship'] = 'reverse_field_claim_subindex_node';
  $handler->display->display_options['relationships']['field_claim_type_tid']['label'] = 'Claim Type Criteria';
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
  /* Field: Field: Type */
  $handler->display->display_options['fields']['field_entry_type']['id'] = 'field_entry_type';
  $handler->display->display_options['fields']['field_entry_type']['table'] = 'field_data_field_entry_type';
  $handler->display->display_options['fields']['field_entry_type']['field'] = 'field_entry_type';
  $handler->display->display_options['fields']['field_entry_type']['relationship'] = 'field_claim_type_tid';
  $handler->display->display_options['fields']['field_entry_type']['label'] = '';
  $handler->display->display_options['fields']['field_entry_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_entry_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entry_type']['delta_offset'] = '0';
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
  /* Contextual filter: Field: Type (field_entry_type) */
  $handler->display->display_options['arguments']['field_entry_type_tid']['id'] = 'field_entry_type_tid';
  $handler->display->display_options['arguments']['field_entry_type_tid']['table'] = 'field_data_field_entry_type';
  $handler->display->display_options['arguments']['field_entry_type_tid']['field'] = 'field_entry_type_tid';
  $handler->display->display_options['arguments']['field_entry_type_tid']['relationship'] = 'field_claim_type_tid';
  $handler->display->display_options['arguments']['field_entry_type_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_entry_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_entry_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_entry_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_entry_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_entry_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_entry_type_tid']['validate_options']['vocabularies'] = array(
    'entry_type' => 'entry_type',
  );
  $handler->display->display_options['arguments']['field_entry_type_tid']['validate_options']['type'] = 'tids';
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
    'field_entry_type_tid' => array(
      'enabled' => 1,
      'type' => 'text',
      'label' => '(SubCriteria) Field: Type (field_entry_type)',
      'name' => 'field_entry_type_tid',
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
    'field_entry_type' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => '(SubCriteria) Field: Type',
      'name' => 'field_entry_type',
    ),
  );
  $translatables['iterate_entries_for_scoring'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Entry Index'),
    t('Nid'),
    t('All'),
    t('All Entries'),
    t('Index SubIndex'),
    t('Index Subindex'),
    t('SubIndex SubCriteria'),
    t('SubIndex Claim Instances'),
    t('SubIndex Claim'),
    t('Claim Type Criteria'),
  );
  $export['iterate_entries_for_scoring'] = $view;

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
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
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
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'developer' => 'developer',
    'community' => 'community',
    'peer_reviewer' => 'peer_reviewer',
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['relationship'] = 'field_index_entry_target_id';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_logo']['element_wrapper_class'] = 'logo';
  $handler->display->display_options['fields']['field_logo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'logo-list',
    'image_link' => 'content',
  );
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
  $handler->display->display_options['fields']['field_entry_score']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_entry_score']['element_wrapper_class'] = 'oii-badge';
  $handler->display->display_options['fields']['field_entry_score']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_entry_score']['type'] = 'custom_formatters_static_badge';
  $handler->display->display_options['fields']['field_entry_score']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_entry_score']['group_column'] = 'tid';
  $handler->display->display_options['fields']['field_entry_score']['delta_offset'] = '0';
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
  $handler->display->display_options['fields']['field_evidence_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['rid']['label'] = '';
  $handler->display->display_options['fields']['rid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rid']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a href="[path]"><span class="[field_evidence_status]">[field_evidence_status] evidence</span></a> submitted [created] by [name] &#91;[rid]&#93;';
  $handler->display->display_options['fields']['name']['element_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_class'] = 'evidence [rid]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['relationship'] = 'field_index_entry_target_id';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_logo']['element_wrapper_class'] = 'logo';
  $handler->display->display_options['fields']['field_logo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'logo-list',
    'image_link' => 'content',
  );
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
  $handler->display->display_options['fields']['field_entry_score']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_entry_score']['element_wrapper_class'] = 'oii-badge';
  $handler->display->display_options['fields']['field_entry_score']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_entry_score']['type'] = 'custom_formatters_static_badge';
  $handler->display->display_options['fields']['field_entry_score']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_entry_score']['group_column'] = 'tid';
  $handler->display->display_options['fields']['field_entry_score']['delta_offset'] = '0';
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
  $handler->display->display_options['fields']['field_evidence_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['rid']['label'] = '';
  $handler->display->display_options['fields']['rid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rid']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a href="node/[nid]"><span class="[field_evidence_status]">[field_evidence_status] evidence</span></a> submitted [created] by [name] &#91;[rid]&#93;';
  $handler->display->display_options['fields']['name']['element_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_class'] = 'evidence [rid]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $translatables['recent_activity'] = array(
    t('Master'),
    t('Recent Activity'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Evidence Claim'),
    t('Claim SubIndex'),
    t('SubIndex Index'),
    t('Index Entry'),
    t('author'),
    t('Profile'),
    t('<a href="[path]"><span class="[field_evidence_status]">[field_evidence_status] evidence</span></a> submitted [created] by [name] &#91;[rid]&#93;'),
    t('Nid'),
    t('Block'),
    t('<a href="node/[nid]"><span class="[field_evidence_status]">[field_evidence_status] evidence</span></a> submitted [created] by [name] &#91;[rid]&#93;'),
  );
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
  $translatables['select_claim'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Claim Subindex'),
    t('Subindex Index'),
    t('Index Entry'),
    t('Entity Reference'),
  );
  $export['select_claim'] = $view;

  return $export;
}
