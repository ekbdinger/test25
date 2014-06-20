<?php
/**
 * @file
 * ppicv2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ppicv2_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ppicv2_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ppicv2_node_info() {
  $items = array(
    'ppic_program' => array(
      'name' => t('PPIC Program'),
      'base' => 'node_content',
      'description' => t('PPIC Programs'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
