<?php
/**
 * @file
 * trainer_profiles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function trainer_profiles_user_default_roles() {
  $roles = array();

  // Exported role: Trainer Profile Admin.
  $roles['Trainer Profile Admin'] = array(
    'name' => 'Trainer Profile Admin',
    'weight' => 3,
  );

  return $roles;
}
