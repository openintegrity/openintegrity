<?php
/**
 * @file
 * openintegrity.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function openintegrity_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-recent_activity-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent_activity-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 3,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
