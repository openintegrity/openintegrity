<?php
/**
 * @file
 * openintegrity.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function openintegrity_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: community.
  $roles['community'] = array(
    'name' => 'community',
    'weight' => 4,
  );

  // Exported role: developer.
  $roles['developer'] = array(
    'name' => 'developer',
    'weight' => 3,
  );

  // Exported role: peer-reviewer.
  $roles['peer-reviewer'] = array(
    'name' => 'peer-reviewer',
    'weight' => 5,
  );

  // Exported role: unverified.
  $roles['unverified'] = array(
    'name' => 'unverified',
    'weight' => 7,
  );

  return $roles;
}
