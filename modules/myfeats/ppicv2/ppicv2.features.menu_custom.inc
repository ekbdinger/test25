<?php
/**
 * @file
 * ppicv2.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ppicv2_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-ppic-navigation.
  $menus['menu-ppic-navigation'] = array(
    'menu_name' => 'menu-ppic-navigation',
    'title' => 'PPIC Links',
    'description' => 'Navigation for all eCW employees on the PPIC pages',
  );
  // Exported menu: menu-ppic-worker.
  $menus['menu-ppic-worker'] = array(
    'menu_name' => 'menu-ppic-worker',
    'title' => 'PPIC Worker',
    'description' => 'A menu for anyone who has access to create and edit PPIC content',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A menu for anyone who has access to create and edit PPIC content');
  t('Navigation for all eCW employees on the PPIC pages');
  t('PPIC Links');
  t('PPIC Worker');


  return $menus;
}
