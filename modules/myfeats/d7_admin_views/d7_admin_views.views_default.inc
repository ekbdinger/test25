<?php
/**
 * @file
 * d7_admin_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function d7_admin_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_all_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'admin_all_content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'admin_all_content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '250';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'term_node_tid' => 'term_node_tid',
    'uid' => 'uid',
    'edit_node' => 'edit_node',
    'timestamp' => 'timestamp',
    'nid' => 'nid',
    'status' => 'status',
    'changed' => 'changed',
    'totalcount' => 'totalcount',
    'field_video_date' => 'field_video_date',
    'taxonomy_vocabulary_17' => 'taxonomy_vocabulary_17',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'term_node_tid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'totalcount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_video_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_17' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '#';
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['text'] = '<strong>[counter])</strong>';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_node_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::502000' => array(
      'selected' => 1,
      'postpone_processing' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'priv_documentation::taxonomy_vocabulary_10' => 'priv_documentation::taxonomy_vocabulary_10',
          'priv_documentation::field_internal_only' => 'priv_documentation::field_internal_only',
          'file::taxonomy_vocabulary_10' => 'file::taxonomy_vocabulary_10',
          'story::taxonomy_vocabulary_10' => 'story::taxonomy_vocabulary_10',
          'page::taxonomy_vocabulary_5' => 'page::taxonomy_vocabulary_5',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::2' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = 'All terms';
  $handler->display->display_options['fields']['term_node_tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'vocabulary_12' => 0,
    'vocabulary_11' => 0,
    'vocabulary_14' => 0,
    'vocabulary_15' => 0,
    'vocabulary_30' => 0,
    'vocabulary_16' => 0,
    'vocabulary_25' => 0,
    'vocabulary_31' => 0,
    'vocabulary_19' => 0,
    'vocabulary_23' => 0,
    'vocabulary_5' => 0,
    'vocabulary_7' => 0,
    'vocabulary_18' => 0,
    'vocabulary_22' => 0,
    'vocabulary_9' => 0,
    'vocabulary_32' => 0,
    'vocabulary_24' => 0,
    'vocabulary_17' => 0,
    'vocabulary_33' => 0,
    'vocabulary_10' => 0,
    'vocabulary_27' => 0,
    'vocabulary_26' => 0,
    'vocabulary_29' => 0,
    'vocabulary_28' => 0,
  );
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'New content?';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = 'Views';
  $handler->display->display_options['fields']['totalcount']['element_label_colon'] = FALSE;
  /* Field: Content: Video Date */
  $handler->display->display_options['fields']['field_video_date']['id'] = 'field_video_date';
  $handler->display->display_options['fields']['field_video_date']['table'] = 'field_data_field_video_date';
  $handler->display->display_options['fields']['field_video_date']['field'] = 'field_video_date';
  $handler->display->display_options['fields']['field_video_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_17']['id'] = 'taxonomy_vocabulary_17';
  $handler->display->display_options['fields']['taxonomy_vocabulary_17']['table'] = 'field_data_taxonomy_vocabulary_17';
  $handler->display->display_options['fields']['taxonomy_vocabulary_17']['field'] = 'taxonomy_vocabulary_17';
  $handler->display->display_options['fields']['taxonomy_vocabulary_17']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
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
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
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
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = 'All';
  $handler->display->display_options['filters']['status_1']['group'] = 1;
  $handler->display->display_options['filters']['status_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status_1']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status_1']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status_1']['expose']['operator'] = 'status_1_op';
  $handler->display->display_options['filters']['status_1']['expose']['identifier'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['expose']['remember_roles'] = array(
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
  );
  /* Filter criterion: Content: Video Type (taxonomy_vocabulary_26) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['id'] = 'taxonomy_vocabulary_26_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['table'] = 'field_data_taxonomy_vocabulary_26';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['field'] = 'taxonomy_vocabulary_26_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_26_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['expose']['label'] = 'Video Type (taxonomy_vocabulary_26)';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['expose']['operator'] = 'taxonomy_vocabulary_26_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['expose']['identifier'] = 'taxonomy_vocabulary_26_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['expose']['remember_roles'] = array(
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
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_26_tid']['vocabulary'] = 'vocabulary_26';
  /* Filter criterion: Content: Departments (taxonomy_vocabulary_11) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_11_tid']['id'] = 'taxonomy_vocabulary_11_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_11_tid']['table'] = 'field_data_taxonomy_vocabulary_11';
  $handler->display->display_options['filters']['taxonomy_vocabulary_11_tid']['field'] = 'taxonomy_vocabulary_11_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_11_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_11_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_11_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_11_tid']['expose']['label'] = 'Departments (taxonomy_vocabulary_11)';
  $handler->display->display_options['filters']['taxonomy_vocabulary_11_tid']['expose']['operator'] = 'taxonomy_vocabulary_11_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_11_tid']['expose']['identifier'] = 'taxonomy_vocabulary_11_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_11_tid']['expose']['remember_roles'] = array(
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
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_11_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_11_tid']['vocabulary'] = 'vocabulary_11';
  /* Filter criterion: Content: Tags (taxonomy_vocabulary_17) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_17_tid']['id'] = 'taxonomy_vocabulary_17_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_17_tid']['table'] = 'field_data_taxonomy_vocabulary_17';
  $handler->display->display_options['filters']['taxonomy_vocabulary_17_tid']['field'] = 'taxonomy_vocabulary_17_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_17_tid']['value'] = '';
  $handler->display->display_options['filters']['taxonomy_vocabulary_17_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_17_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_17_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_17_tid']['expose']['label'] = 'Tags (taxonomy_vocabulary_17)';
  $handler->display->display_options['filters']['taxonomy_vocabulary_17_tid']['expose']['operator'] = 'taxonomy_vocabulary_17_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_17_tid']['expose']['identifier'] = 'taxonomy_vocabulary_17_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_17_tid']['expose']['remember_roles'] = array(
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
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_17_tid']['vocabulary'] = 'vocabulary_17';
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author uid';
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
    55 => 0,
  );
  /* Filter criterion: Content: Version (taxonomy_vocabulary_10) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['id'] = 'taxonomy_vocabulary_10_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['table'] = 'field_data_taxonomy_vocabulary_10';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['field'] = 'taxonomy_vocabulary_10_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_10_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['expose']['label'] = 'Version';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['expose']['operator'] = 'taxonomy_vocabulary_10_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['expose']['identifier'] = 'taxonomy_vocabulary_10_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_10_tid']['vocabulary'] = 'vocabulary_10';
  /* Filter criterion: Content: News Category (taxonomy_vocabulary_9) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_9_tid']['id'] = 'taxonomy_vocabulary_9_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9_tid']['table'] = 'field_data_taxonomy_vocabulary_9';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9_tid']['field'] = 'taxonomy_vocabulary_9_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_9_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_9_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9_tid']['expose']['label'] = 'News Category (taxonomy_vocabulary_9)';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9_tid']['expose']['operator'] = 'taxonomy_vocabulary_9_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9_tid']['expose']['identifier'] = 'taxonomy_vocabulary_9_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    25 => 0,
    46 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    38 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
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
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_9_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_9_tid']['vocabulary'] = 'vocabulary_9';
  /* Filter criterion: Content: Privacy (taxonomy_vocabulary_5) */
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['id'] = 'taxonomy_vocabulary_5_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['table'] = 'field_data_taxonomy_vocabulary_5';
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['field'] = 'taxonomy_vocabulary_5_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['expose']['operator_id'] = 'taxonomy_vocabulary_5_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['expose']['label'] = 'Privacy (taxonomy_vocabulary_5)';
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['expose']['operator'] = 'taxonomy_vocabulary_5_tid_op';
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['expose']['identifier'] = 'taxonomy_vocabulary_5_tid';
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    25 => 0,
    46 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    38 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
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
    51 => 0,
    52 => 0,
    53 => 0,
    54 => 0,
    55 => 0,
    56 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_vocabulary_5_tid']['vocabulary'] = 'vocabulary_5';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin-all-content';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin-all-content-vbo';
  $export['admin_all_content'] = $view;

  $view = new view();
  $view->name = 'admin_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'admin_users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Account Management (Paul)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'edit_node' => 'edit_node',
    'name' => 'name',
    'mail' => 'mail',
    'uid' => 'uid',
    'status' => 'status',
    'created' => 'created',
    'picture' => 'picture',
    'rid' => 'rid',
    'access' => 'access',
    'value' => 'value',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'picture' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'access' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::user_block_user_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::flag_user_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::user_stats_login_count_reset_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::user_stats_post_count_reset_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::2' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '#';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'long';
  /* Field: User Stats: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'user_stats_values';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'Posts';
  /* Field: User Stats: Statistic name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'user_stats_values';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
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
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
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
  );
  /* Filter criterion: User Stats: Statistic name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'user_stats_values';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['value'] = 'post_count';
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
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
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
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
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid']['expose']['operator_id'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['label'] = 'Roles';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = 'rid_op';
  $handler->display->display_options['filters']['rid']['expose']['identifier'] = 'rid';
  $handler->display->display_options['filters']['rid']['expose']['remember_roles'] = array(
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
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin-users';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin-users-test';
  $export['admin_users'] = $view;

  $view = new view();
  $view->name = 'all_forum_posts';
  $view->description = 'All Forum Posts';
  $view->tag = 'forum,';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'All Forum Posts (Beta) <br />';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    14 => '14',
    15 => '15',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 20;
  $handler->display->display_options['style_plugin'] = 'forum_topic_list';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'changed' => 'changed',
    'comment_count' => 'comment_count',
    'timestamp' => 'timestamp',
    'last_comment_timestamp' => 'last_comment_timestamp',
    'new_comments' => 'new_comments',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'comment_count' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'timestamp' => array(
      'separator' => '',
    ),
    'last_comment_timestamp' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'new_comments' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Forum Topic';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Post Date';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = 'Comments';
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'New content';
  /* Field: Content: Last comment time */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  /* Field: Content: New comments */
  $handler->display->display_options['fields']['new_comments']['id'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['table'] = 'node';
  $handler->display->display_options['fields']['new_comments']['field'] = 'new_comments';
  $handler->display->display_options['fields']['new_comments']['label'] = 'New';
  $handler->display->display_options['fields']['new_comments']['hide_empty'] = TRUE;
  /* Filter criterion: Content: Has new content */
  $handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['table'] = 'history';
  $handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['group'] = '0';
  $handler->display->display_options['filters']['timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['timestamp']['expose']['label'] = 'Has a New Comment or New Post';
  $handler->display->display_options['filters']['timestamp']['expose']['identifier'] = 'timestamp';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forum' => 'forum',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'forum/test/all';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'eKB Forum Topics';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => 3,
    14 => 14,
    15 => 15,
    5 => 5,
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 20;
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'eKB Forum Topics';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['item_length'] = 'full';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forum' => 'forum',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'forum/feed';
  $handler->display->display_options['sitename_title'] = 0;
  $export['all_forum_posts'] = $view;

  $view = new view();
  $view->name = 'comments_all';
  $view->description = 'All comments, not attched to a forum post';
  $view->tag = 'forum, test';
  $view->base_table = 'comment';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Comments (Non-forum)';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => 3,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'cid' => 'cid',
    'timestamp' => 'timestamp',
    'subject' => 'subject',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = 'cid';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'separator' => '',
    ),
    'cid' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'timestamp' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'subject' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'type' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Relationship: Comment: Content */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'comment';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['label'] = 'Node';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '#';
  /* Field: Comment: ID */
  $handler->display->display_options['fields']['cid']['id'] = 'cid';
  $handler->display->display_options['fields']['cid']['table'] = 'comment';
  $handler->display->display_options['fields']['cid']['field'] = 'cid';
  /* Field: Comment: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'comment';
  $handler->display->display_options['fields']['timestamp']['field'] = 'changed';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Post date';
  /* Field: Comment: Title */
  $handler->display->display_options['fields']['subject']['id'] = 'subject';
  $handler->display->display_options['fields']['subject']['table'] = 'comment';
  $handler->display->display_options['fields']['subject']['field'] = 'subject';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'nid';
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp_1']['id'] = 'timestamp_1';
  $handler->display->display_options['fields']['timestamp_1']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp_1']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp_1']['relationship'] = 'nid';
  $handler->display->display_options['fields']['timestamp_1']['label'] = 'New Comments';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forum' => 'forum',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has new content */
  $handler->display->display_options['filters']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['table'] = 'history';
  $handler->display->display_options['filters']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['filters']['timestamp']['relationship'] = 'nid';
  $handler->display->display_options['filters']['timestamp']['group'] = '0';
  $handler->display->display_options['filters']['timestamp']['exposed'] = TRUE;
  $handler->display->display_options['filters']['timestamp']['expose']['label'] = 'Node: Has new content';
  $handler->display->display_options['filters']['timestamp']['expose']['identifier'] = 'timestamp';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $export['comments_all'] = $view;

  $view = new view();
  $view->name = 'trainers_list';
  $view->description = 'List of Trainer';
  $view->tag = 'users, paul';
  $view->base_table = 'users';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'eKB Forum Participation';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => 3,
    17 => 17,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 50;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'name' => 'name',
    'mail' => 'mail',
    'picture' => 'picture',
    'rid' => 'rid',
    'uid' => 'uid',
    'name_1' => 'name_1',
    'value' => 'value',
  );
  $handler->display->display_options['style_options']['default'] = 'value';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'mail' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'picture' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'rid' => array(
      'separator' => '',
    ),
    'uid' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'name_1' => array(
      'separator' => '',
    ),
    'value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'area';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['content'] = '<h3><a href="http://ecwknowledgebase.com/user/directory">Clear Search data</a></h3>';
  $handler->display->display_options['header']['text']['format'] = '2';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '#';
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['text'] = '<strong>[counter].)</strong>';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['exclude'] = TRUE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User Stats: Statistic name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'user_stats_values';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = 'Statistic';
  /* Field: User Stats: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'user_stats_values';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['value']['alter']['path'] = 'user/[uid]/track';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  /* Sort criterion: User Stats: Value */
  $handler->display->display_options['sorts']['value']['id'] = 'value';
  $handler->display->display_options['sorts']['value']['table'] = 'user_stats_values';
  $handler->display->display_options['sorts']['value']['field'] = 'value';
  $handler->display->display_options['sorts']['value']['order'] = 'DESC';
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'word';
  $handler->display->display_options['filters']['mail']['group'] = '0';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'Search by E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['rid']['group'] = '0';
  $handler->display->display_options['filters']['rid']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'user/directory';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->display->display_options['path'] = 'trainers-forum';
  $export['trainers_list'] = $view;

  return $export;
}
