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
    'claim_status' => array(
      'name' => 'Claim Status',
      'machine_name' => 'claim_status',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
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
