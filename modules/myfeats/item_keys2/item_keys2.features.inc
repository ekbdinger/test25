<?php
/**
 * @file
 * item_keys2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function item_keys2_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function item_keys2_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function item_keys2_node_info() {
  $items = array(
    'item_key' => array(
      'name' => t('Item Key'),
      'base' => 'node_content',
      'description' => t('Trying to import item keys on April 27, 2013'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
