<?php
/**
 * @file
 * video2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function video2_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function video2_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Video new'),
      'base' => 'node_content',
      'description' => t('Video 2.0 content type.  Will support Vimeo videos.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
