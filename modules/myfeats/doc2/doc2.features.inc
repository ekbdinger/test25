<?php
/**
 * @file
 * doc2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function doc2_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function doc2_node_info() {
  $items = array(
    'priv_documentation' => array(
      'name' => t('Documentation'),
      'base' => 'node_content',
      'description' => t('Official documentation from the Documentation team from my.eclinicalworks.com and other sources. Created on 09/09/2013'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
