<?php
/**
 * @file
 * trainer_profiles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function trainer_profiles_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'trainer_profile_list';
  $view->description = '';
  $view->tag = 'trainer profiles,';
  $view->base_table = 'users';
  $view->human_name = 'Trainer Profile_list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Trainer Profile_list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    49 => '49',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['text'] = '<strong>[counter])</strong>';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit Trainer Profile';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'user/[uid]/edit/trainer_profile';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
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
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Username';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'dan/user-list';
  $export['trainer_profile_list'] = $view;

  $view = new view();
  $view->name = 'trainer_profiles';
  $view->description = '';
  $view->tag = 'trainer profiles,';
  $view->base_table = 'profile';
  $view->human_name = 'Trainer Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Trainer Profiles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    55 => '55',
    5 => '5',
    49 => '49',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_tr_location',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  /* Field: Profile: Picture */
  $handler->display->display_options['fields']['field_trainer_picture']['id'] = 'field_trainer_picture';
  $handler->display->display_options['fields']['field_trainer_picture']['table'] = 'field_data_field_trainer_picture';
  $handler->display->display_options['fields']['field_trainer_picture']['field'] = 'field_trainer_picture';
  $handler->display->display_options['fields']['field_trainer_picture']['label'] = '';
  $handler->display->display_options['fields']['field_trainer_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trainer_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_trainer_picture']['settings'] = array(
    'image_style' => 'trainer_profile_pic',
    'image_link' => '',
  );
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_tr_first_name']['id'] = 'field_tr_first_name';
  $handler->display->display_options['fields']['field_tr_first_name']['table'] = 'field_data_field_tr_first_name';
  $handler->display->display_options['fields']['field_tr_first_name']['field'] = 'field_tr_first_name';
  $handler->display->display_options['fields']['field_tr_first_name']['exclude'] = TRUE;
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_tr_last_name']['id'] = 'field_tr_last_name';
  $handler->display->display_options['fields']['field_tr_last_name']['table'] = 'field_data_field_tr_last_name';
  $handler->display->display_options['fields']['field_tr_last_name']['field'] = 'field_tr_last_name';
  $handler->display->display_options['fields']['field_tr_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_tr_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tr_last_name']['alter']['text'] = '</p><strong>[field_tr_first_name]</strong>&nbsp;<strong>[field_tr_last_name]</strong></p>';
  $handler->display->display_options['fields']['field_tr_last_name']['element_label_colon'] = FALSE;
  /* Field: Profile: Group */
  $handler->display->display_options['fields']['field_tr_location']['id'] = 'field_tr_location';
  $handler->display->display_options['fields']['field_tr_location']['table'] = 'field_data_field_tr_location';
  $handler->display->display_options['fields']['field_tr_location']['field'] = 'field_tr_location';
  $handler->display->display_options['fields']['field_tr_location']['label'] = '';
  $handler->display->display_options['fields']['field_tr_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tr_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tr_location']['alter']['text'] = '<h2 class="title">[field_tr_location]</h1>';
  $handler->display->display_options['fields']['field_tr_location']['element_label_colon'] = FALSE;
  /* Field: Profile: Role */
  $handler->display->display_options['fields']['field_tr_role']['id'] = 'field_tr_role';
  $handler->display->display_options['fields']['field_tr_role']['table'] = 'field_data_field_tr_role';
  $handler->display->display_options['fields']['field_tr_role']['field'] = 'field_tr_role';
  $handler->display->display_options['fields']['field_tr_role']['label'] = '';
  $handler->display->display_options['fields']['field_tr_role']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tr_role']['alter']['text'] = '<strong>Role:  </strong>[field_tr_role]<br>';
  $handler->display->display_options['fields']['field_tr_role']['element_label_colon'] = FALSE;
  /* Field: Profile: Start Date */
  $handler->display->display_options['fields']['field_tr_start_date']['id'] = 'field_tr_start_date';
  $handler->display->display_options['fields']['field_tr_start_date']['table'] = 'field_data_field_tr_start_date';
  $handler->display->display_options['fields']['field_tr_start_date']['field'] = 'field_tr_start_date';
  $handler->display->display_options['fields']['field_tr_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_tr_start_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tr_start_date']['alter']['text'] = '<strong>Start Date: </strong>[field_tr_start_date]';
  $handler->display->display_options['fields']['field_tr_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tr_start_date']['empty'] = '<strong>[field_tr_start_date]</strong>';
  $handler->display->display_options['fields']['field_tr_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Profile: Location */
  $handler->display->display_options['fields']['field_tr_state']['id'] = 'field_tr_state';
  $handler->display->display_options['fields']['field_tr_state']['table'] = 'field_data_field_tr_state';
  $handler->display->display_options['fields']['field_tr_state']['field'] = 'field_tr_state';
  $handler->display->display_options['fields']['field_tr_state']['label'] = '';
  $handler->display->display_options['fields']['field_tr_state']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tr_state']['alter']['text'] = '<strong>Location:  </strong> [field_tr_state]';
  $handler->display->display_options['fields']['field_tr_state']['element_label_colon'] = FALSE;
  /* Sort criterion: Profile: Group (field_tr_location) */
  $handler->display->display_options['sorts']['field_tr_location_value']['id'] = 'field_tr_location_value';
  $handler->display->display_options['sorts']['field_tr_location_value']['table'] = 'field_data_field_tr_location';
  $handler->display->display_options['sorts']['field_tr_location_value']['field'] = 'field_tr_location_value';
  /* Sort criterion: Profile: Last Name (field_tr_last_name) */
  $handler->display->display_options['sorts']['field_tr_last_name_value']['id'] = 'field_tr_last_name_value';
  $handler->display->display_options['sorts']['field_tr_last_name_value']['table'] = 'field_data_field_tr_last_name';
  $handler->display->display_options['sorts']['field_tr_last_name_value']['field'] = 'field_tr_last_name_value';
  /* Filter criterion: Profile: Group (field_tr_location) */
  $handler->display->display_options['filters']['field_tr_location_value_1']['id'] = 'field_tr_location_value_1';
  $handler->display->display_options['filters']['field_tr_location_value_1']['table'] = 'field_data_field_tr_location';
  $handler->display->display_options['filters']['field_tr_location_value_1']['field'] = 'field_tr_location_value';
  $handler->display->display_options['filters']['field_tr_location_value_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_tr_location_value_1']['group'] = 1;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'trainer_profile' => 'trainer_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Profile: Group (field_tr_location) */
  $handler->display->display_options['filters']['field_tr_location_value']['id'] = 'field_tr_location_value';
  $handler->display->display_options['filters']['field_tr_location_value']['table'] = 'field_data_field_tr_location';
  $handler->display->display_options['filters']['field_tr_location_value']['field'] = 'field_tr_location_value';
  $handler->display->display_options['filters']['field_tr_location_value']['group'] = 1;
  $handler->display->display_options['filters']['field_tr_location_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tr_location_value']['expose']['operator_id'] = 'field_tr_location_value_op';
  $handler->display->display_options['filters']['field_tr_location_value']['expose']['label'] = 'Group';
  $handler->display->display_options['filters']['field_tr_location_value']['expose']['operator'] = 'field_tr_location_value_op';
  $handler->display->display_options['filters']['field_tr_location_value']['expose']['identifier'] = 'field_tr_location_value';
  $handler->display->display_options['filters']['field_tr_location_value']['expose']['remember_roles'] = array(
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
  );
  /* Filter criterion: Profile: Role (field_tr_role) */
  $handler->display->display_options['filters']['field_tr_role_value']['id'] = 'field_tr_role_value';
  $handler->display->display_options['filters']['field_tr_role_value']['table'] = 'field_data_field_tr_role';
  $handler->display->display_options['filters']['field_tr_role_value']['field'] = 'field_tr_role_value';
  $handler->display->display_options['filters']['field_tr_role_value']['group'] = 1;
  $handler->display->display_options['filters']['field_tr_role_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tr_role_value']['expose']['operator_id'] = 'field_tr_role_value_op';
  $handler->display->display_options['filters']['field_tr_role_value']['expose']['label'] = 'Role';
  $handler->display->display_options['filters']['field_tr_role_value']['expose']['operator'] = 'field_tr_role_value_op';
  $handler->display->display_options['filters']['field_tr_role_value']['expose']['identifier'] = 'field_tr_role_value';
  $handler->display->display_options['filters']['field_tr_role_value']['expose']['remember_roles'] = array(
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
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'trainer-profiles';
  $export['trainer_profiles'] = $view;

  $view = new view();
  $view->name = 'trainer_profiles_editor';
  $view->description = '';
  $view->tag = 'trainer profiles,';
  $view->base_table = 'profile';
  $view->human_name = 'Trainer Profiles Editor';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Trainer Profiles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    49 => '49',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_tr_location',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['exclude'] = TRUE;
  /* Field: Profile: Picture */
  $handler->display->display_options['fields']['field_trainer_picture']['id'] = 'field_trainer_picture';
  $handler->display->display_options['fields']['field_trainer_picture']['table'] = 'field_data_field_trainer_picture';
  $handler->display->display_options['fields']['field_trainer_picture']['field'] = 'field_trainer_picture';
  $handler->display->display_options['fields']['field_trainer_picture']['label'] = '';
  $handler->display->display_options['fields']['field_trainer_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_trainer_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_trainer_picture']['settings'] = array(
    'image_style' => 'trainer_profile_pic',
    'image_link' => '',
  );
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_tr_first_name']['id'] = 'field_tr_first_name';
  $handler->display->display_options['fields']['field_tr_first_name']['table'] = 'field_data_field_tr_first_name';
  $handler->display->display_options['fields']['field_tr_first_name']['field'] = 'field_tr_first_name';
  $handler->display->display_options['fields']['field_tr_first_name']['exclude'] = TRUE;
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_tr_last_name']['id'] = 'field_tr_last_name';
  $handler->display->display_options['fields']['field_tr_last_name']['table'] = 'field_data_field_tr_last_name';
  $handler->display->display_options['fields']['field_tr_last_name']['field'] = 'field_tr_last_name';
  $handler->display->display_options['fields']['field_tr_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_tr_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tr_last_name']['alter']['text'] = '<strong>[field_tr_first_name]</strong>&nbsp;<strong>[field_tr_last_name]</strong>';
  $handler->display->display_options['fields']['field_tr_last_name']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['field_tr_last_name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_tr_last_name']['element_label_colon'] = FALSE;
  /* Field: Profile: Group */
  $handler->display->display_options['fields']['field_tr_location']['id'] = 'field_tr_location';
  $handler->display->display_options['fields']['field_tr_location']['table'] = 'field_data_field_tr_location';
  $handler->display->display_options['fields']['field_tr_location']['field'] = 'field_tr_location';
  $handler->display->display_options['fields']['field_tr_location']['label'] = '';
  $handler->display->display_options['fields']['field_tr_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tr_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tr_location']['alter']['text'] = '<h2 class="title">[field_tr_location]</h2>';
  $handler->display->display_options['fields']['field_tr_location']['element_label_colon'] = FALSE;
  /* Field: Profile: Role */
  $handler->display->display_options['fields']['field_tr_role']['id'] = 'field_tr_role';
  $handler->display->display_options['fields']['field_tr_role']['table'] = 'field_data_field_tr_role';
  $handler->display->display_options['fields']['field_tr_role']['field'] = 'field_tr_role';
  $handler->display->display_options['fields']['field_tr_role']['label'] = '';
  $handler->display->display_options['fields']['field_tr_role']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tr_role']['alter']['text'] = '<strong>Role:  </strong>[field_tr_role]';
  $handler->display->display_options['fields']['field_tr_role']['element_label_colon'] = FALSE;
  /* Field: Profile: Start Date */
  $handler->display->display_options['fields']['field_tr_start_date']['id'] = 'field_tr_start_date';
  $handler->display->display_options['fields']['field_tr_start_date']['table'] = 'field_data_field_tr_start_date';
  $handler->display->display_options['fields']['field_tr_start_date']['field'] = 'field_tr_start_date';
  $handler->display->display_options['fields']['field_tr_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_tr_start_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tr_start_date']['alter']['text'] = '<strong>Start Date: </strong>[field_tr_start_date]';
  $handler->display->display_options['fields']['field_tr_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tr_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit Profile';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'user/[user]/edit/trainer_profile';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Profile: Group (field_tr_location) */
  $handler->display->display_options['sorts']['field_tr_location_value']['id'] = 'field_tr_location_value';
  $handler->display->display_options['sorts']['field_tr_location_value']['table'] = 'field_data_field_tr_location';
  $handler->display->display_options['sorts']['field_tr_location_value']['field'] = 'field_tr_location_value';
  /* Sort criterion: Profile: Last Name (field_tr_last_name) */
  $handler->display->display_options['sorts']['field_tr_last_name_value']['id'] = 'field_tr_last_name_value';
  $handler->display->display_options['sorts']['field_tr_last_name_value']['table'] = 'field_data_field_tr_last_name';
  $handler->display->display_options['sorts']['field_tr_last_name_value']['field'] = 'field_tr_last_name_value';
  /* Filter criterion: Profile: Group (field_tr_location) */
  $handler->display->display_options['filters']['field_tr_location_value_1']['id'] = 'field_tr_location_value_1';
  $handler->display->display_options['filters']['field_tr_location_value_1']['table'] = 'field_data_field_tr_location';
  $handler->display->display_options['filters']['field_tr_location_value_1']['field'] = 'field_tr_location_value';
  $handler->display->display_options['filters']['field_tr_location_value_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_tr_location_value_1']['group'] = 1;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'trainer_profile' => 'trainer_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Profile: Group (field_tr_location) */
  $handler->display->display_options['filters']['field_tr_location_value']['id'] = 'field_tr_location_value';
  $handler->display->display_options['filters']['field_tr_location_value']['table'] = 'field_data_field_tr_location';
  $handler->display->display_options['filters']['field_tr_location_value']['field'] = 'field_tr_location_value';
  $handler->display->display_options['filters']['field_tr_location_value']['group'] = 1;
  $handler->display->display_options['filters']['field_tr_location_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tr_location_value']['expose']['operator_id'] = 'field_tr_location_value_op';
  $handler->display->display_options['filters']['field_tr_location_value']['expose']['label'] = 'Group';
  $handler->display->display_options['filters']['field_tr_location_value']['expose']['operator'] = 'field_tr_location_value_op';
  $handler->display->display_options['filters']['field_tr_location_value']['expose']['identifier'] = 'field_tr_location_value';
  $handler->display->display_options['filters']['field_tr_location_value']['expose']['remember_roles'] = array(
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
  );
  /* Filter criterion: Profile: Role (field_tr_role) */
  $handler->display->display_options['filters']['field_tr_role_value']['id'] = 'field_tr_role_value';
  $handler->display->display_options['filters']['field_tr_role_value']['table'] = 'field_data_field_tr_role';
  $handler->display->display_options['filters']['field_tr_role_value']['field'] = 'field_tr_role_value';
  $handler->display->display_options['filters']['field_tr_role_value']['group'] = 1;
  $handler->display->display_options['filters']['field_tr_role_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tr_role_value']['expose']['operator_id'] = 'field_tr_role_value_op';
  $handler->display->display_options['filters']['field_tr_role_value']['expose']['label'] = 'Role';
  $handler->display->display_options['filters']['field_tr_role_value']['expose']['operator'] = 'field_tr_role_value_op';
  $handler->display->display_options['filters']['field_tr_role_value']['expose']['identifier'] = 'field_tr_role_value';
  $handler->display->display_options['filters']['field_tr_role_value']['expose']['remember_roles'] = array(
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
  );
  /* Filter criterion: Profile: Location (field_tr_state) */
  $handler->display->display_options['filters']['field_tr_state_value']['id'] = 'field_tr_state_value';
  $handler->display->display_options['filters']['field_tr_state_value']['table'] = 'field_data_field_tr_state';
  $handler->display->display_options['filters']['field_tr_state_value']['field'] = 'field_tr_state_value';
  $handler->display->display_options['filters']['field_tr_state_value']['group'] = 1;
  $handler->display->display_options['filters']['field_tr_state_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tr_state_value']['expose']['operator_id'] = 'field_tr_state_value_op';
  $handler->display->display_options['filters']['field_tr_state_value']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_tr_state_value']['expose']['operator'] = 'field_tr_state_value_op';
  $handler->display->display_options['filters']['field_tr_state_value']['expose']['identifier'] = 'field_tr_state_value';
  $handler->display->display_options['filters']['field_tr_state_value']['expose']['remember_roles'] = array(
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
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'trainer-profiles-edit';
  $export['trainer_profiles_editor'] = $view;

  return $export;
}
