<?php
/**
 * @file
 * openintegrity.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function openintegrity_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_information|node|evidence|form';
  $field_group->group_name = 'group_additional_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'evidence';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_evidence_information';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '6',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Additional Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_additional_information|node|evidence|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_evidence_information|node|evidence|form';
  $field_group->group_name = 'group_evidence_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'evidence';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Evidence Information',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_evidence_status',
      2 => 'field_evidence_link',
      3 => 'field_evidence_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_evidence_information|node|evidence|form'] = $field_group;

  return $export;
}
