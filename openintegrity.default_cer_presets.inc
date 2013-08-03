<?php
/**
 * @file
 * openintegrity.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function openintegrity_default_cer() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*entry*field_entry_score*node*score*field_score_entry';
  $cnr_obj->enabled = 1;
  $export['node*entry*field_entry_score*node*score*field_score_entry'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*evidence*field_evidence_score*node*score*field_score_evidence';
  $cnr_obj->enabled = 0;
  $export['node*evidence*field_evidence_score*node*score*field_score_evidence'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*score*field_score_entry*node*entry*field_entry_score';
  $cnr_obj->enabled = 0;
  $export['node*score*field_score_entry*node*entry*field_entry_score'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*score*field_score_evidence*node*evidence*field_evidence_score';
  $cnr_obj->enabled = 1;
  $export['node*score*field_score_evidence*node*evidence*field_evidence_score'] = $cnr_obj;

  return $export;
}
