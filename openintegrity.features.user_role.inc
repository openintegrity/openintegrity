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

  // Exported role: developer.
  $roles['developer'] = array(
    'name' => 'developer',
    'weight' => 5,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 4,
  );

  // Exported role: moderator.
  $roles['moderator'] = array(
    'name' => 'moderator',
    'weight' => 3,
  );

  // Exported role: partner.
  $roles['partner'] = array(
    'name' => 'partner',
    'weight' => 8,
  );

  // Exported role: peer-reviewer.
  $roles['peer-reviewer'] = array(
    'name' => 'peer-reviewer',
    'weight' => 7,
  );

  // Exported role: unverified.
  $roles['unverified'] = array(
    'name' => 'unverified',
    'weight' => 9,
  );

  return $roles;
}
