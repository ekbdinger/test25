<?php
/**
 * @file
 * ppicv2.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ppicv2_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-ppic-navigation:http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/2013-04-11%2015.06%20Private%20Payer%20Incentives%20Overview.wmv
  $menu_links['menu-ppic-navigation:http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/2013-04-11%2015.06%20Private%20Payer%20Incentives%20Overview.wmv'] = array(
    'menu_name' => 'menu-ppic-navigation',
    'link_path' => 'http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/2013-04-11%2015.06%20Private%20Payer%20Incentives%20Overview.wmv',
    'router_path' => '',
    'link_title' => 'PPIC Webinar',
    'options' => array(
      'attributes' => array(
        'title' => 'Webinar recording from April 11, 2013',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
  );
  // Exported menu link: menu-ppic-navigation:http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/Enterprise%20Presentation.pdf
  $menu_links['menu-ppic-navigation:http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/Enterprise%20Presentation.pdf'] = array(
    'menu_name' => 'menu-ppic-navigation',
    'link_path' => 'http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/Enterprise%20Presentation.pdf',
    'router_path' => '',
    'link_title' => 'Enterprise Summit Presentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
  );
  // Exported menu link: menu-ppic-navigation:http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/Incentive%20Consulting%20Flyer.pdf
  $menu_links['menu-ppic-navigation:http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/Incentive%20Consulting%20Flyer.pdf'] = array(
    'menu_name' => 'menu-ppic-navigation',
    'link_path' => 'http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/Incentive%20Consulting%20Flyer.pdf',
    'router_path' => '',
    'link_title' => 'Marketing Flyer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
  );
  // Exported menu link: menu-ppic-navigation:http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/PPIC%20Internal%20Presentation.pdf
  $menu_links['menu-ppic-navigation:http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/PPIC%20Internal%20Presentation.pdf'] = array(
    'menu_name' => 'menu-ppic-navigation',
    'link_path' => 'http://int.ecwknowledgebase.com/sites/default/files/departments/ppic/PPIC%20Internal%20Presentation.pdf',
    'router_path' => '',
    'link_title' => 'PPIC Internal Presentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
  );
  // Exported menu link: menu-ppic-navigation:node/9911
  $menu_links['menu-ppic-navigation:node/9911'] = array(
    'menu_name' => 'menu-ppic-navigation',
    'link_path' => 'node/9911',
    'router_path' => 'node/%',
    'link_title' => 'Team Member Info',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
  );
  // Exported menu link: menu-ppic-navigation:node/9912
  $menu_links['menu-ppic-navigation:node/9912'] = array(
    'menu_name' => 'menu-ppic-navigation',
    'link_path' => 'node/9912',
    'router_path' => 'node/%',
    'link_title' => 'Videos and Presentations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
  );
  // Exported menu link: menu-ppic-navigation:node/9913
  $menu_links['menu-ppic-navigation:node/9913'] = array(
    'menu_name' => 'menu-ppic-navigation',
    'link_path' => 'node/9913',
    'router_path' => 'node/%',
    'link_title' => 'Marketing Pieces',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: menu-ppic-worker:node/add/ppic-program
  $menu_links['menu-ppic-worker:node/add/ppic-program'] = array(
    'menu_name' => 'menu-ppic-worker',
    'link_path' => 'node/add/ppic-program',
    'router_path' => 'node/add/ppic-program',
    'link_title' => 'New PPIC Program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Enterprise Summit Presentation');
  t('Marketing Flyer');
  t('Marketing Pieces');
  t('New PPIC Program');
  t('PPIC Internal Presentation');
  t('PPIC Webinar');
  t('Team Member Info');
  t('Videos and Presentations');


  return $menu_links;
}
