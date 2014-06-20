<?php
/**
 * @file
 * interface_files.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function interface_files_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function interface_files_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function interface_files_node_info() {
  $items = array(
    'interface_files' => array(
      'name' => t('Interface files'),
      'base' => 'node_content',
      'description' => t('Files for the interface team'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
