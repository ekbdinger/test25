<?php
/**
 * @file
 * interface_files.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function interface_files_taxonomy_default_vocabularies() {
  return array(
    'interface_doc_level_2' => array(
      'name' => 'Interfaces Doc Level 2',
      'machine_name' => 'interface_doc_level_2',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'interfaces_doc_level_1' => array(
      'name' => 'Interfaces Doc Level 1',
      'machine_name' => 'interfaces_doc_level_1',
      'description' => 'Top level in the Interface Files tree',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'interfaces_doc_level_3' => array(
      'name' => 'Interfaces Doc Level 3',
      'machine_name' => 'interfaces_doc_level_3',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
