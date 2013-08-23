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
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'claim_variables' => array(
      'name' => 'Claim Variables',
      'machine_name' => 'claim_variables',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'criteria' => array(
      'name' => 'Criteria',
      'machine_name' => 'criteria',
      'description' => 'Criteria',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'entry_category' => array(
      'name' => 'Entry Category',
      'machine_name' => 'entry_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'entry_type' => array(
      'name' => 'Entry Type',
      'machine_name' => 'entry_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'evidence_status' => array(
      'name' => 'Evidence Status',
      'machine_name' => 'evidence_status',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'score' => array(
      'name' => 'Score',
      'machine_name' => 'score',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'subindex_status' => array(
      'name' => 'SubIndex Status',
      'machine_name' => 'subindex_status',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
