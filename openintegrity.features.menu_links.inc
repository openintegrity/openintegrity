<?php
/**
 * @file
 * openintegrity.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function openintegrity_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_submit-an-entry:node/add/entry
  $menu_links['main-menu_submit-an-entry:node/add/entry'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/entry',
    'router_path' => 'node/add/entry',
    'link_title' => 'Submit an Entry',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_submit-an-entry:node/add/entry',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: user-menu_log-out:user/logout
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Log out');
  t('Submit an Entry');
  t('User account');


  return $menu_links;
}
