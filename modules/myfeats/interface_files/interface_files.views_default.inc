<?php
/**
 * @file
 * interface_files.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function interface_files_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'interface_files';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Interface Files';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Interface Files';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    52 => '52',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_interface_file']['id'] = 'field_interface_file';
  $handler->display->display_options['fields']['field_interface_file']['table'] = 'field_data_field_interface_file';
  $handler->display->display_options['fields']['field_interface_file']['field'] = 'field_interface_file';
  $handler->display->display_options['fields']['field_interface_file']['click_sort_column'] = 'fid';
  /* Field: Content: Domain */
  $handler->display->display_options['fields']['field_int_level1']['id'] = 'field_int_level1';
  $handler->display->display_options['fields']['field_int_level1']['table'] = 'field_data_field_int_level1';
  $handler->display->display_options['fields']['field_int_level1']['field'] = 'field_int_level1';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_int_level2']['id'] = 'field_int_level2';
  $handler->display->display_options['fields']['field_int_level2']['table'] = 'field_data_field_int_level2';
  $handler->display->display_options['fields']['field_int_level2']['field'] = 'field_int_level2';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_int_level3']['id'] = 'field_int_level3';
  $handler->display->display_options['fields']['field_int_level3']['table'] = 'field_data_field_int_level3';
  $handler->display->display_options['fields']['field_int_level3']['field'] = 'field_int_level3';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_doc_description']['id'] = 'field_doc_description';
  $handler->display->display_options['fields']['field_doc_description']['table'] = 'field_data_field_doc_description';
  $handler->display->display_options['fields']['field_doc_description']['field'] = 'field_doc_description';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search Title or Description';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
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
    55 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_doc_description' => 'field_doc_description',
  );
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
    'interface_files' => 'interface_files',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Domain (field_int_level1) */
  $handler->display->display_options['filters']['field_int_level1_tid']['id'] = 'field_int_level1_tid';
  $handler->display->display_options['filters']['field_int_level1_tid']['table'] = 'field_data_field_int_level1';
  $handler->display->display_options['filters']['field_int_level1_tid']['field'] = 'field_int_level1_tid';
  $handler->display->display_options['filters']['field_int_level1_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_int_level1_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_int_level1_tid']['expose']['operator_id'] = 'field_int_level1_tid_op';
  $handler->display->display_options['filters']['field_int_level1_tid']['expose']['label'] = 'Domain';
  $handler->display->display_options['filters']['field_int_level1_tid']['expose']['operator'] = 'field_int_level1_tid_op';
  $handler->display->display_options['filters']['field_int_level1_tid']['expose']['identifier'] = 'field_int_level1_tid';
  $handler->display->display_options['filters']['field_int_level1_tid']['expose']['remember_roles'] = array(
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
    55 => 0,
  );
  $handler->display->display_options['filters']['field_int_level1_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_int_level1_tid']['vocabulary'] = 'interfaces_doc_level_1';
  /* Filter criterion: Content: Type (field_int_level2) */
  $handler->display->display_options['filters']['field_int_level2_tid']['id'] = 'field_int_level2_tid';
  $handler->display->display_options['filters']['field_int_level2_tid']['table'] = 'field_data_field_int_level2';
  $handler->display->display_options['filters']['field_int_level2_tid']['field'] = 'field_int_level2_tid';
  $handler->display->display_options['filters']['field_int_level2_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_int_level2_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_int_level2_tid']['expose']['operator_id'] = 'field_int_level2_tid_op';
  $handler->display->display_options['filters']['field_int_level2_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_int_level2_tid']['expose']['operator'] = 'field_int_level2_tid_op';
  $handler->display->display_options['filters']['field_int_level2_tid']['expose']['identifier'] = 'field_int_level2_tid';
  $handler->display->display_options['filters']['field_int_level2_tid']['expose']['remember_roles'] = array(
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
    55 => 0,
  );
  $handler->display->display_options['filters']['field_int_level2_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_int_level2_tid']['vocabulary'] = 'interface_doc_level_2';
  /* Filter criterion: Content: Category (field_int_level3) */
  $handler->display->display_options['filters']['field_int_level3_tid']['id'] = 'field_int_level3_tid';
  $handler->display->display_options['filters']['field_int_level3_tid']['table'] = 'field_data_field_int_level3';
  $handler->display->display_options['filters']['field_int_level3_tid']['field'] = 'field_int_level3_tid';
  $handler->display->display_options['filters']['field_int_level3_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_int_level3_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_int_level3_tid']['expose']['operator_id'] = 'field_int_level3_tid_op';
  $handler->display->display_options['filters']['field_int_level3_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_int_level3_tid']['expose']['operator'] = 'field_int_level3_tid_op';
  $handler->display->display_options['filters']['field_int_level3_tid']['expose']['identifier'] = 'field_int_level3_tid';
  $handler->display->display_options['filters']['field_int_level3_tid']['expose']['remember_roles'] = array(
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
    55 => 0,
  );
  $handler->display->display_options['filters']['field_int_level3_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_int_level3_tid']['vocabulary'] = 'interfaces_doc_level_3';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'interface/files';

  /* Display: Admin */
  $handler = $view->new_display('page', 'Admin', 'page_1');
  $handler->display->display_options['display_description'] = 'Admin view, might include more fields than the standard view';
  $handler->display->display_options['path'] = 'interface/files/admin';
  $export['interface_files'] = $view;

  return $export;
}
