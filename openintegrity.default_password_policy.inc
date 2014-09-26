<?php
/**
 * @file
 * openintegrity.default_password_policy.inc
 */

/**
 * Implements hook_default_password_policy().
 */
function openintegrity_default_password_policy() {
  $export = array();

  $password_policy = new stdClass();
  $password_policy->disabled = FALSE; /* Edit this to true to make a default password_policy disabled initially */
  $password_policy->api_version = 1;
  $password_policy->name = 'Example policy';
  $password_policy->description = '';
  $password_policy->enabled = FALSE;
  $password_policy->policy = '';
  $password_policy->created = 0;
  $password_policy->expiration = 0;
  $password_policy->warning = '';
  $password_policy->weight = FALSE;
  $export['Example policy'] = $password_policy;

  return $export;
}
