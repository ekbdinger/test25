<?php
/**
 * @file
 * training_support_issues.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function training_support_issues_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_32' => array(
      'name' => 'Support Categories',
      'machine_name' => 'vocabulary_32',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'features_train_supp_issues',
      'weight' => 0,
    ),
    'vocabulary_33' => array(
      'name' => 'TSI Tags',
      'machine_name' => 'vocabulary_33',
      'description' => 'Tags for the Training Support Issues content type/view:  http://www.ecwknowledgebase.com/trainer/support/issues',
      'hierarchy' => 0,
      'module' => 'features_tsi_tags',
      'weight' => 0,
    ),
  );
}
