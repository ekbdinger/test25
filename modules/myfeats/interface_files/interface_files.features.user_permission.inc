<?php
/**
 * @file
 * interface_files.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function interface_files_user_default_permissions() {
  $permissions = array();

  // Exported permission: create interface_files content.
  $permissions['create interface_files content'] = array(
    'name' => 'create interface_files content',
    'roles' => array(
      'Inter Install Doc Worker' => 'Inter Install Doc Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any interface_files content.
  $permissions['delete any interface_files content'] = array(
    'name' => 'delete any interface_files content',
    'roles' => array(
      'Inter Install Doc Worker' => 'Inter Install Doc Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own interface_files content.
  $permissions['delete own interface_files content'] = array(
    'name' => 'delete own interface_files content',
    'roles' => array(
      'Inter Install Doc Worker' => 'Inter Install Doc Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any interface_files content.
  $permissions['edit any interface_files content'] = array(
    'name' => 'edit any interface_files content',
    'roles' => array(
      'Inter Install Doc Worker' => 'Inter Install Doc Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own interface_files content.
  $permissions['edit own interface_files content'] = array(
    'name' => 'edit own interface_files content',
    'roles' => array(
      'Inter Install Doc Worker' => 'Inter Install Doc Worker',
    ),
    'module' => 'node',
  );

  return $permissions;
}
