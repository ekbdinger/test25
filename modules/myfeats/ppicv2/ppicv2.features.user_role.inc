<?php
/**
 * @file
 * ppicv2.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ppicv2_user_default_roles() {
  $roles = array();

  // Exported role: PPIC Worker.
  $roles['PPIC Worker'] = array(
    'name' => 'PPIC Worker',
    'weight' => 1,
  );

  return $roles;
}
