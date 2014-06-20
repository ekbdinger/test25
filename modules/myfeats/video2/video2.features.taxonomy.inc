<?php
/**
 * @file
 * video2.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function video2_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_17' => array(
      'name' => 'Tags',
      'machine_name' => 'vocabulary_17',
      'description' => 'Free Tagging',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'vocabulary_26' => array(
      'name' => 'Video Type',
      'machine_name' => 'vocabulary_26',
      'description' => 'Webinar, Dev Video Archive (old), Dev Video 2011, General',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'webinar_category' => array(
      'name' => 'Webinar Category',
      'machine_name' => 'webinar_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
