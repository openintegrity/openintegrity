<?php
/**
 * @file
 * openintegrity.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openintegrity_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: access comments.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access devel information.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: access get form id contextual links.
  $permissions['access get form id contextual links'] = array(
    'name' => 'access get form id contextual links',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'get_form_id',
  );

  // Exported permission: access private fields.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: access rules debug.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer Compact Forms.
  $permissions['administer Compact Forms'] = array(
    'name' => 'administer Compact Forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'compact_forms',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer advanced form blocks.
  $permissions['administer advanced form blocks'] = array(
    'name' => 'administer advanced form blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'afb',
  );

  // Exported permission: administer block classes.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_class',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: administer comments.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer contexts.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(),
    'module' => 'context_ui',
  );

  // Exported permission: administer custom formatters.
  $permissions['administer custom formatters'] = array(
    'name' => 'administer custom formatters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'custom_formatters',
  );

  // Exported permission: administer dependencies.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: administer deployments.
  $permissions['administer deployments'] = array(
    'name' => 'administer deployments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'deploy',
  );

  // Exported permission: administer entity view modes.
  $permissions['administer entity view modes'] = array(
    'name' => 'administer entity view modes',
    'roles' => array(),
    'module' => 'entity_view_mode',
  );

  // Exported permission: administer exclude node title.
  $permissions['administer exclude node title'] = array(
    'name' => 'administer exclude node title',
    'roles' => array(),
    'module' => 'exclude_node_title',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer field collections.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(),
    'module' => 'field_collection',
  );

  // Exported permission: administer field permissions.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer less.
  $permissions['administer less'] = array(
    'name' => 'administer less',
    'roles' => array(),
    'module' => 'less',
  );

  // Exported permission: administer masquerade.
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(),
    'module' => 'masquerade',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer password policy.
  $permissions['administer password policy'] = array(
    'name' => 'administer password policy',
    'roles' => array(),
    'module' => 'password_policy',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer profile types.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: administer profile2_regpath.
  $permissions['administer profile2_regpath'] = array(
    'name' => 'administer profile2_regpath',
    'roles' => array(),
    'module' => 'profile2_regpath',
  );

  // Exported permission: administer profiles.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: administer rules.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: administer search_api.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer uuid.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass rules access.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: create blog content.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create claim content.
  $permissions['create claim content'] = array(
    'name' => 'create claim content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create entry content.
  $permissions['create entry content'] = array(
    'name' => 'create entry content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'node',
  );

  // Exported permission: create evidence content.
  $permissions['create evidence content'] = array(
    'name' => 'create evidence content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'unverified' => 'unverified',
    ),
    'module' => 'node',
  );

  // Exported permission: create field_entry_score.
  $permissions['create field_entry_score'] = array(
    'name' => 'create field_entry_score',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create index content.
  $permissions['create index content'] = array(
    'name' => 'create index content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create page content.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create subindex content.
  $permissions['create subindex content'] = array(
    'name' => 'create subindex content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: delete any blog content.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any claim content.
  $permissions['delete any claim content'] = array(
    'name' => 'delete any claim content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any entry content.
  $permissions['delete any entry content'] = array(
    'name' => 'delete any entry content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any evidence content.
  $permissions['delete any evidence content'] = array(
    'name' => 'delete any evidence content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any index content.
  $permissions['delete any index content'] = array(
    'name' => 'delete any index content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any page content.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any subindex content.
  $permissions['delete any subindex content'] = array(
    'name' => 'delete any subindex content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own blog content.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own claim content.
  $permissions['delete own claim content'] = array(
    'name' => 'delete own claim content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own entry content.
  $permissions['delete own entry content'] = array(
    'name' => 'delete own entry content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own evidence content.
  $permissions['delete own evidence content'] = array(
    'name' => 'delete own evidence content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own index content.
  $permissions['delete own index content'] = array(
    'name' => 'delete own index content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own page content.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own subindex content.
  $permissions['delete own subindex content'] = array(
    'name' => 'delete own subindex content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 4.
  $permissions['delete terms in 4'] = array(
    'name' => 'delete terms in 4',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 5.
  $permissions['delete terms in 5'] = array(
    'name' => 'delete terms in 5',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 7.
  $permissions['delete terms in 7'] = array(
    'name' => 'delete terms in 7',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: display drupal links.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: edit any blog content.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any claim content.
  $permissions['edit any claim content'] = array(
    'name' => 'edit any claim content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any community profile.
  $permissions['edit any community profile'] = array(
    'name' => 'edit any community profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: edit any developer profile.
  $permissions['edit any developer profile'] = array(
    'name' => 'edit any developer profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: edit any entry content.
  $permissions['edit any entry content'] = array(
    'name' => 'edit any entry content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any evidence content.
  $permissions['edit any evidence content'] = array(
    'name' => 'edit any evidence content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any index content.
  $permissions['edit any index content'] = array(
    'name' => 'edit any index content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any main profile.
  $permissions['edit any main profile'] = array(
    'name' => 'edit any main profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: edit any page content.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any peer_reviewer profile.
  $permissions['edit any peer_reviewer profile'] = array(
    'name' => 'edit any peer_reviewer profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: edit any subindex content.
  $permissions['edit any subindex content'] = array(
    'name' => 'edit any subindex content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit field_entry_score.
  $permissions['edit field_entry_score'] = array(
    'name' => 'edit field_entry_score',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own blog content.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own claim content.
  $permissions['edit own claim content'] = array(
    'name' => 'edit own claim content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own comments.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own community profile.
  $permissions['edit own community profile'] = array(
    'name' => 'edit own community profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: edit own developer profile.
  $permissions['edit own developer profile'] = array(
    'name' => 'edit own developer profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: edit own entry content.
  $permissions['edit own entry content'] = array(
    'name' => 'edit own entry content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own evidence content.
  $permissions['edit own evidence content'] = array(
    'name' => 'edit own evidence content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own field_entry_score.
  $permissions['edit own field_entry_score'] = array(
    'name' => 'edit own field_entry_score',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own index content.
  $permissions['edit own index content'] = array(
    'name' => 'edit own index content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own main profile.
  $permissions['edit own main profile'] = array(
    'name' => 'edit own main profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: edit own page content.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own peer_reviewer profile.
  $permissions['edit own peer_reviewer profile'] = array(
    'name' => 'edit own peer_reviewer profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: edit own subindex content.
  $permissions['edit own subindex content'] = array(
    'name' => 'edit own subindex content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 4.
  $permissions['edit terms in 4'] = array(
    'name' => 'edit terms in 4',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 5.
  $permissions['edit terms in 5'] = array(
    'name' => 'edit terms in 5',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 7.
  $permissions['edit terms in 7'] = array(
    'name' => 'edit terms in 7',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: exclude any node title.
  $permissions['exclude any node title'] = array(
    'name' => 'exclude any node title',
    'roles' => array(),
    'module' => 'exclude_node_title',
  );

  // Exported permission: exclude own node title.
  $permissions['exclude own node title'] = array(
    'name' => 'exclude own node title',
    'roles' => array(),
    'module' => 'exclude_node_title',
  );

  // Exported permission: execute php code.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: masquerade as admin.
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(),
    'module' => 'masquerade',
  );

  // Exported permission: masquerade as user.
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(),
    'module' => 'masquerade',
  );

  // Exported permission: post comments.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: show format selection for comment.
  $permissions['show format selection for comment'] = array(
    'name' => 'show format selection for comment',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for field_collection_item.
  $permissions['show format selection for field_collection_item'] = array(
    'name' => 'show format selection for field_collection_item',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for node.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for profile2.
  $permissions['show format selection for profile2'] = array(
    'name' => 'show format selection for profile2',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for rules_config.
  $permissions['show format selection for rules_config'] = array(
    'name' => 'show format selection for rules_config',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for taxonomy_term.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: show format selection for user.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: show format tips.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: show more format tips link.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(),
    'module' => 'better_formats',
  );

  // Exported permission: skip comment approval.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: switch users.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: use PHP for label patterns.
  $permissions['use PHP for label patterns'] = array(
    'name' => 'use PHP for label patterns',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'auto_entitylabel',
  );

  // Exported permission: use PHP for settings.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(),
    'module' => 'php',
  );

  // Exported permission: use exclude node title.
  $permissions['use exclude node title'] = array(
    'name' => 'use exclude node title',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'exclude_node_title',
  );

  // Exported permission: use search_api_autocomplete for search_api_views_browse.
  $permissions['use search_api_autocomplete for search_api_views_browse'] = array(
    'name' => 'use search_api_autocomplete for search_api_views_browse',
    'roles' => array(),
    'module' => 'search_api_autocomplete',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format php_code.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: view any community profile.
  $permissions['view any community profile'] = array(
    'name' => 'view any community profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: view any developer profile.
  $permissions['view any developer profile'] = array(
    'name' => 'view any developer profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any main profile.
  $permissions['view any main profile'] = array(
    'name' => 'view any main profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: view any peer_reviewer profile.
  $permissions['view any peer_reviewer profile'] = array(
    'name' => 'view any peer_reviewer profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view field_entry_score.
  $permissions['view field_entry_score'] = array(
    'name' => 'view field_entry_score',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own community profile.
  $permissions['view own community profile'] = array(
    'name' => 'view own community profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own developer profile.
  $permissions['view own developer profile'] = array(
    'name' => 'view own developer profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: view own field_entry_score.
  $permissions['view own field_entry_score'] = array(
    'name' => 'view own field_entry_score',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own main profile.
  $permissions['view own main profile'] = array(
    'name' => 'view own main profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view own peer_reviewer profile.
  $permissions['view own peer_reviewer profile'] = array(
    'name' => 'view own peer_reviewer profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
