<?php
/**
 * @file
 * openintegrity.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function openintegrity_taxonomy_default_vocabularies() {
  return array(
    'criteria' => array(
      'name' => 'Criteria',
      'machine_name' => 'criteria',
      'description' => 'Criteria',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
