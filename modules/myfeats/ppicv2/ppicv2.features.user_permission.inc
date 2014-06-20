<?php
/**
 * @file
 * ppicv2.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ppicv2_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ppic_program content.
  $permissions['create ppic_program content'] = array(
    'name' => 'create ppic_program content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'PPIC Worker' => 'PPIC Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ppic_program content.
  $permissions['delete any ppic_program content'] = array(
    'name' => 'delete any ppic_program content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'PPIC Worker' => 'PPIC Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ppic_program content.
  $permissions['delete own ppic_program content'] = array(
    'name' => 'delete own ppic_program content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'PPIC Worker' => 'PPIC Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ppic_program content.
  $permissions['edit any ppic_program content'] = array(
    'name' => 'edit any ppic_program content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'PPIC Worker' => 'PPIC Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ppic_program content.
  $permissions['edit own ppic_program content'] = array(
    'name' => 'edit own ppic_program content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'PPIC Worker' => 'PPIC Worker',
    ),
    'module' => 'node',
  );

  return $permissions;
}
