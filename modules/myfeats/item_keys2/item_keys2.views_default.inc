<?php
/**
 * @file
 * item_keys2.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function item_keys2_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'item_keys';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Item Keys';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Item Keys';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'guid' => 'guid',
    'field_ik_affected_areas' => 'field_ik_affected_areas',
    'field_ik_client_specific' => 'field_ik_client_specific',
    'field_ik_developer' => 'field_ik_developer',
    'field_ik_display_name' => 'field_ik_display_name',
    'field_ik_group_id' => 'field_ik_group_id',
    'field_ik_item_id' => 'field_ik_item_id',
    'field_ik_number' => 'field_ik_number',
    'field_ik_section' => 'field_ik_section',
    'field_ik_status' => 'field_ik_status',
    'field_ik_support_remarks' => 'field_ik_support_remarks',
    'title_1' => 'title_1',
    'field_ik_type' => 'field_ik_type',
    'field_ik_ui_controlled' => 'field_ik_ui_controlled',
    'field_ik_value' => 'field_ik_value',
    'field_ik_version_code' => 'field_ik_version_code',
    'field_ik_version_build' => 'field_ik_version_build',
  );
  $handler->display->display_options['style_options']['default'] = 'field_ik_number';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'guid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ik_affected_areas' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ik_client_specific' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ik_developer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ik_display_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ik_group_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ik_item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ik_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ik_section' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ik_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ik_support_remarks' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ik_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ik_ui_controlled' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ik_value' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ik_version_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ik_version_build' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Item Key Number */
  $handler->display->display_options['fields']['field_ik_number']['id'] = 'field_ik_number';
  $handler->display->display_options['fields']['field_ik_number']['table'] = 'field_data_field_ik_number';
  $handler->display->display_options['fields']['field_ik_number']['field'] = 'field_ik_number';
  $handler->display->display_options['fields']['field_ik_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Feeds item: Item GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['label'] = 'GUID';
  $handler->display->display_options['fields']['guid']['element_label_colon'] = FALSE;
  /* Field: Content: Affected Areas */
  $handler->display->display_options['fields']['field_ik_affected_areas']['id'] = 'field_ik_affected_areas';
  $handler->display->display_options['fields']['field_ik_affected_areas']['table'] = 'field_data_field_ik_affected_areas';
  $handler->display->display_options['fields']['field_ik_affected_areas']['field'] = 'field_ik_affected_areas';
  $handler->display->display_options['fields']['field_ik_affected_areas']['element_label_colon'] = FALSE;
  /* Field: Content: Client Specific */
  $handler->display->display_options['fields']['field_ik_client_specific']['id'] = 'field_ik_client_specific';
  $handler->display->display_options['fields']['field_ik_client_specific']['table'] = 'field_data_field_ik_client_specific';
  $handler->display->display_options['fields']['field_ik_client_specific']['field'] = 'field_ik_client_specific';
  $handler->display->display_options['fields']['field_ik_client_specific']['element_label_colon'] = FALSE;
  /* Field: Content: Developer */
  $handler->display->display_options['fields']['field_ik_developer']['id'] = 'field_ik_developer';
  $handler->display->display_options['fields']['field_ik_developer']['table'] = 'field_data_field_ik_developer';
  $handler->display->display_options['fields']['field_ik_developer']['field'] = 'field_ik_developer';
  /* Field: Content: Display Name */
  $handler->display->display_options['fields']['field_ik_display_name']['id'] = 'field_ik_display_name';
  $handler->display->display_options['fields']['field_ik_display_name']['table'] = 'field_data_field_ik_display_name';
  $handler->display->display_options['fields']['field_ik_display_name']['field'] = 'field_ik_display_name';
  /* Field: Content: Group ID */
  $handler->display->display_options['fields']['field_ik_group_id']['id'] = 'field_ik_group_id';
  $handler->display->display_options['fields']['field_ik_group_id']['table'] = 'field_data_field_ik_group_id';
  $handler->display->display_options['fields']['field_ik_group_id']['field'] = 'field_ik_group_id';
  /* Field: Content: Item ID */
  $handler->display->display_options['fields']['field_ik_item_id']['id'] = 'field_ik_item_id';
  $handler->display->display_options['fields']['field_ik_item_id']['table'] = 'field_data_field_ik_item_id';
  $handler->display->display_options['fields']['field_ik_item_id']['field'] = 'field_ik_item_id';
  $handler->display->display_options['fields']['field_ik_item_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Section */
  $handler->display->display_options['fields']['field_ik_section']['id'] = 'field_ik_section';
  $handler->display->display_options['fields']['field_ik_section']['table'] = 'field_data_field_ik_section';
  $handler->display->display_options['fields']['field_ik_section']['field'] = 'field_ik_section';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_ik_status']['id'] = 'field_ik_status';
  $handler->display->display_options['fields']['field_ik_status']['table'] = 'field_data_field_ik_status';
  $handler->display->display_options['fields']['field_ik_status']['field'] = 'field_ik_status';
  /* Field: Content: Support Remarks */
  $handler->display->display_options['fields']['field_ik_support_remarks']['id'] = 'field_ik_support_remarks';
  $handler->display->display_options['fields']['field_ik_support_remarks']['table'] = 'field_data_field_ik_support_remarks';
  $handler->display->display_options['fields']['field_ik_support_remarks']['field'] = 'field_ik_support_remarks';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_ik_type']['id'] = 'field_ik_type';
  $handler->display->display_options['fields']['field_ik_type']['table'] = 'field_data_field_ik_type';
  $handler->display->display_options['fields']['field_ik_type']['field'] = 'field_ik_type';
  /* Field: Content: UI Controlled */
  $handler->display->display_options['fields']['field_ik_ui_controlled']['id'] = 'field_ik_ui_controlled';
  $handler->display->display_options['fields']['field_ik_ui_controlled']['table'] = 'field_data_field_ik_ui_controlled';
  $handler->display->display_options['fields']['field_ik_ui_controlled']['field'] = 'field_ik_ui_controlled';
  /* Field: Content: Value */
  $handler->display->display_options['fields']['field_ik_value']['id'] = 'field_ik_value';
  $handler->display->display_options['fields']['field_ik_value']['table'] = 'field_data_field_ik_value';
  $handler->display->display_options['fields']['field_ik_value']['field'] = 'field_ik_value';
  /* Field: Content: Version Code */
  $handler->display->display_options['fields']['field_ik_version_code']['id'] = 'field_ik_version_code';
  $handler->display->display_options['fields']['field_ik_version_code']['table'] = 'field_data_field_ik_version_code';
  $handler->display->display_options['fields']['field_ik_version_code']['field'] = 'field_ik_version_code';
  /* Field: Content: Version/Build */
  $handler->display->display_options['fields']['field_ik_version_build']['id'] = 'field_ik_version_build';
  $handler->display->display_options['fields']['field_ik_version_build']['table'] = 'field_data_field_ik_version_build';
  $handler->display->display_options['fields']['field_ik_version_build']['field'] = 'field_ik_version_build';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'item_key' => 'item_key',
  );
  /* Filter criterion: Content: Item Key Number (field_ik_number) */
  $handler->display->display_options['filters']['field_ik_number_value']['id'] = 'field_ik_number_value';
  $handler->display->display_options['filters']['field_ik_number_value']['table'] = 'field_data_field_ik_number';
  $handler->display->display_options['filters']['field_ik_number_value']['field'] = 'field_ik_number_value';
  $handler->display->display_options['filters']['field_ik_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ik_number_value']['expose']['operator_id'] = 'field_ik_number_value_op';
  $handler->display->display_options['filters']['field_ik_number_value']['expose']['label'] = 'Item Key Number';
  $handler->display->display_options['filters']['field_ik_number_value']['expose']['operator'] = 'field_ik_number_value_op';
  $handler->display->display_options['filters']['field_ik_number_value']['expose']['identifier'] = 'field_ik_number_value';
  $handler->display->display_options['filters']['field_ik_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
  );
  /* Filter criterion: Content: Version/Build (field_ik_version_build) */
  $handler->display->display_options['filters']['field_ik_version_build_value']['id'] = 'field_ik_version_build_value';
  $handler->display->display_options['filters']['field_ik_version_build_value']['table'] = 'field_data_field_ik_version_build';
  $handler->display->display_options['filters']['field_ik_version_build_value']['field'] = 'field_ik_version_build_value';
  $handler->display->display_options['filters']['field_ik_version_build_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_ik_version_build_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ik_version_build_value']['expose']['operator_id'] = 'field_ik_version_build_value_op';
  $handler->display->display_options['filters']['field_ik_version_build_value']['expose']['label'] = 'Search Version';
  $handler->display->display_options['filters']['field_ik_version_build_value']['expose']['operator'] = 'field_ik_version_build_value_op';
  $handler->display->display_options['filters']['field_ik_version_build_value']['expose']['identifier'] = 'field_ik_version_build_value';
  $handler->display->display_options['filters']['field_ik_version_build_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
  );

  /* Display: All Item Keys */
  $handler = $view->new_display('page', 'All Item Keys', 'page');
  $handler->display->display_options['path'] = 'item-keys/admin';
  $handler->display->display_options['menu']['title'] = 'Item Keys';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Search Test */
  $handler = $view->new_display('page', 'Search Test', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'item_key' => 'item_key',
  );
  /* Filter criterion: Content: Item Key Number (field_ik_number) */
  $handler->display->display_options['filters']['field_ik_number_value']['id'] = 'field_ik_number_value';
  $handler->display->display_options['filters']['field_ik_number_value']['table'] = 'field_data_field_ik_number';
  $handler->display->display_options['filters']['field_ik_number_value']['field'] = 'field_ik_number_value';
  $handler->display->display_options['filters']['field_ik_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ik_number_value']['expose']['operator_id'] = 'field_ik_number_value_op';
  $handler->display->display_options['filters']['field_ik_number_value']['expose']['label'] = 'Item Key Number';
  $handler->display->display_options['filters']['field_ik_number_value']['expose']['operator'] = 'field_ik_number_value_op';
  $handler->display->display_options['filters']['field_ik_number_value']['expose']['identifier'] = 'field_ik_number_value';
  $handler->display->display_options['filters']['field_ik_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'item-keys/search-test';
  $handler->display->display_options['menu']['title'] = 'Item Keys';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Quick Search */
  $handler = $view->new_display('page', 'Quick Search', 'page_2');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>To find a particular Item Key, search by Item Key Number.  In documentation it will list the Item Key Code = (Item Key Number + Version Code). For example, the item key "ShowICDForRx" is 1589_DMI.  Just enter <strong>1589</strong> into the Item Key Number field and press the <strong>Search</strong> button and it will display only that item key.</p>
<p>You can also search by <strong>Title</strong> and <strong>Version</strong>.  If you want to find the V10 item keys, type "10" (without quotes) and press the <strong>Search</strong> button.
<p>To see all the details of a particular item key, click on the Title of particular item key.<p>
<p>&nbsp;</p>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Item Key Number */
  $handler->display->display_options['fields']['field_ik_number']['id'] = 'field_ik_number';
  $handler->display->display_options['fields']['field_ik_number']['table'] = 'field_data_field_ik_number';
  $handler->display->display_options['fields']['field_ik_number']['field'] = 'field_ik_number';
  $handler->display->display_options['fields']['field_ik_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Version Code */
  $handler->display->display_options['fields']['field_ik_version_code']['id'] = 'field_ik_version_code';
  $handler->display->display_options['fields']['field_ik_version_code']['table'] = 'field_data_field_ik_version_code';
  $handler->display->display_options['fields']['field_ik_version_code']['field'] = 'field_ik_version_code';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Item ID */
  $handler->display->display_options['fields']['field_ik_item_id']['id'] = 'field_ik_item_id';
  $handler->display->display_options['fields']['field_ik_item_id']['table'] = 'field_data_field_ik_item_id';
  $handler->display->display_options['fields']['field_ik_item_id']['field'] = 'field_ik_item_id';
  $handler->display->display_options['fields']['field_ik_item_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Value */
  $handler->display->display_options['fields']['field_ik_value']['id'] = 'field_ik_value';
  $handler->display->display_options['fields']['field_ik_value']['table'] = 'field_data_field_ik_value';
  $handler->display->display_options['fields']['field_ik_value']['field'] = 'field_ik_value';
  /* Field: Content: Support Remarks */
  $handler->display->display_options['fields']['field_ik_support_remarks']['id'] = 'field_ik_support_remarks';
  $handler->display->display_options['fields']['field_ik_support_remarks']['table'] = 'field_data_field_ik_support_remarks';
  $handler->display->display_options['fields']['field_ik_support_remarks']['field'] = 'field_ik_support_remarks';
  /* Field: Feeds item: Item GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['label'] = 'GUID';
  $handler->display->display_options['fields']['guid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['guid']['element_label_colon'] = FALSE;
  /* Field: Content: Affected Areas */
  $handler->display->display_options['fields']['field_ik_affected_areas']['id'] = 'field_ik_affected_areas';
  $handler->display->display_options['fields']['field_ik_affected_areas']['table'] = 'field_data_field_ik_affected_areas';
  $handler->display->display_options['fields']['field_ik_affected_areas']['field'] = 'field_ik_affected_areas';
  $handler->display->display_options['fields']['field_ik_affected_areas']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ik_affected_areas']['element_label_colon'] = FALSE;
  /* Field: Content: Client Specific */
  $handler->display->display_options['fields']['field_ik_client_specific']['id'] = 'field_ik_client_specific';
  $handler->display->display_options['fields']['field_ik_client_specific']['table'] = 'field_data_field_ik_client_specific';
  $handler->display->display_options['fields']['field_ik_client_specific']['field'] = 'field_ik_client_specific';
  $handler->display->display_options['fields']['field_ik_client_specific']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ik_client_specific']['element_label_colon'] = FALSE;
  /* Field: Content: Developer */
  $handler->display->display_options['fields']['field_ik_developer']['id'] = 'field_ik_developer';
  $handler->display->display_options['fields']['field_ik_developer']['table'] = 'field_data_field_ik_developer';
  $handler->display->display_options['fields']['field_ik_developer']['field'] = 'field_ik_developer';
  $handler->display->display_options['fields']['field_ik_developer']['exclude'] = TRUE;
  /* Field: Content: Display Name */
  $handler->display->display_options['fields']['field_ik_display_name']['id'] = 'field_ik_display_name';
  $handler->display->display_options['fields']['field_ik_display_name']['table'] = 'field_data_field_ik_display_name';
  $handler->display->display_options['fields']['field_ik_display_name']['field'] = 'field_ik_display_name';
  $handler->display->display_options['fields']['field_ik_display_name']['exclude'] = TRUE;
  /* Field: Content: Group ID */
  $handler->display->display_options['fields']['field_ik_group_id']['id'] = 'field_ik_group_id';
  $handler->display->display_options['fields']['field_ik_group_id']['table'] = 'field_data_field_ik_group_id';
  $handler->display->display_options['fields']['field_ik_group_id']['field'] = 'field_ik_group_id';
  $handler->display->display_options['fields']['field_ik_group_id']['exclude'] = TRUE;
  /* Field: Content: Section */
  $handler->display->display_options['fields']['field_ik_section']['id'] = 'field_ik_section';
  $handler->display->display_options['fields']['field_ik_section']['table'] = 'field_data_field_ik_section';
  $handler->display->display_options['fields']['field_ik_section']['field'] = 'field_ik_section';
  $handler->display->display_options['fields']['field_ik_section']['exclude'] = TRUE;
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_ik_status']['id'] = 'field_ik_status';
  $handler->display->display_options['fields']['field_ik_status']['table'] = 'field_data_field_ik_status';
  $handler->display->display_options['fields']['field_ik_status']['field'] = 'field_ik_status';
  $handler->display->display_options['fields']['field_ik_status']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_ik_type']['id'] = 'field_ik_type';
  $handler->display->display_options['fields']['field_ik_type']['table'] = 'field_data_field_ik_type';
  $handler->display->display_options['fields']['field_ik_type']['field'] = 'field_ik_type';
  $handler->display->display_options['fields']['field_ik_type']['exclude'] = TRUE;
  /* Field: Content: UI Controlled */
  $handler->display->display_options['fields']['field_ik_ui_controlled']['id'] = 'field_ik_ui_controlled';
  $handler->display->display_options['fields']['field_ik_ui_controlled']['table'] = 'field_data_field_ik_ui_controlled';
  $handler->display->display_options['fields']['field_ik_ui_controlled']['field'] = 'field_ik_ui_controlled';
  $handler->display->display_options['fields']['field_ik_ui_controlled']['exclude'] = TRUE;
  /* Field: Content: Version/Build */
  $handler->display->display_options['fields']['field_ik_version_build']['id'] = 'field_ik_version_build';
  $handler->display->display_options['fields']['field_ik_version_build']['table'] = 'field_data_field_ik_version_build';
  $handler->display->display_options['fields']['field_ik_version_build']['field'] = 'field_ik_version_build';
  $handler->display->display_options['path'] = 'item-keys/search';
  $export['item_keys'] = $view;

  return $export;
}
