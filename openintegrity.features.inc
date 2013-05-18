<?php
/**
 * @file
 * openintegrity.features.inc
 */

/**
 * Implements hook_node_info().
 */
function openintegrity_node_info() {
  $items = array(
    'entry' => array(
      'name' => t('Entry'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'score' => array(
      'name' => t('Score'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
