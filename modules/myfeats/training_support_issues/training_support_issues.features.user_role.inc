<?php
/**
 * @file
 * training_support_issues.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function training_support_issues_user_default_roles() {
  $roles = array();

  // Exported role: Training Support Issues.
  $roles['Training Support Issues'] = array(
    'name' => 'Training Support Issues',
    'weight' => 0,
  );

  return $roles;
}
