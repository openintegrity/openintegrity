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
    'claim_variables' => array(
      'name' => 'Claim Variables',
      'machine_name' => 'claim_variables',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'criteria' => array(
      'name' => 'Criteria',
      'machine_name' => 'criteria',
      'description' => 'Criteria',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'entry_category' => array(
      'name' => 'Entry Category',
      'machine_name' => 'entry_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'entry_type' => array(
      'name' => 'Entry Type',
      'machine_name' => 'entry_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'evidence_status' => array(
      'name' => 'Evidence Status',
      'machine_name' => 'evidence_status',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'evidence_type' => array(
      'name' => 'Evidence Type',
      'machine_name' => 'evidence_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'score' => array(
      'name' => 'Score',
      'machine_name' => 'score',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
