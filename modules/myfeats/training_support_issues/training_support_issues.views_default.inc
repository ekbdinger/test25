<?php
/**
 * @file
 * training_support_issues.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function training_support_issues_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'training_support_issue';
  $view->description = 'Support Issues that trainers can fix';
  $view->tag = 'dev, paul, test';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 6;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Common Training Support Issues';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'nid' => 'nid',
    'title' => 'title',
    'field_supp_issue_value' => 'field_supp_issue_value',
    'field_supp_solution_value' => 'field_supp_solution_value',
    'name' => 'name',
    'last_updated' => 'last_updated',
    'tid' => 'tid',
    'timestamp' => 'timestamp',
  );
  $handler->display->display_options['style_options']['default'] = 'last_updated';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'separator' => '',
    ),
    'nid' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_supp_issue_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'field_supp_solution_value' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'last_updated' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'tid' => array(
      'separator' => '',
    ),
    'timestamp' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'text';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['content'] = '<p>The pages below are all common support issues submitted by onsite trainers.   These are cases that can be easily resolved by the onsite trainer.  Please use this as a reference before submitting a support case.  <strong>Last updated:  April 11, 2013</strong></p>  
<p>This content did not migrate over properly with the <a href="http://int.ecwknowledgebase.com/node/9641" target="_blank">site upgrade</a> over the weekend. &nbsp;However, I just fixed the problem and you should be able to view all the content now. &nbsp;If do you notice any other problems, please <a href="mailto:paul.thedinga@eclinicalworks.com">email me</a>.</p>
';
  $handler->display->display_options['header']['text']['format'] = '2';
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
  $handler->display->display_options['fields']['counter']['alter']['text'] = '<strong>[counter].</strong>';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Content: Updated/commented date */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['label'] = 'Last Update/Comment';
  /* Field: Content: Support Categories */
  $handler->display->display_options['fields']['taxonomy_vocabulary_32']['id'] = 'taxonomy_vocabulary_32';
  $handler->display->display_options['fields']['taxonomy_vocabulary_32']['table'] = 'field_data_taxonomy_vocabulary_32';
  $handler->display->display_options['fields']['taxonomy_vocabulary_32']['field'] = 'taxonomy_vocabulary_32';
  $handler->display->display_options['fields']['taxonomy_vocabulary_32']['label'] = 'Categories';
  $handler->display->display_options['fields']['taxonomy_vocabulary_32']['delta_offset'] = '0';
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Issues';
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
  $handler->display->display_options['filters']['type']['value'] = array(
    'train_supp_issue' => 'train_supp_issue',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Filter by Category';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'vocabulary_32';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'trainer/support/issues';
  $handler->display->display_options['menu']['name'] = 'primary-links';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'area';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['content'] = '<p>The pages below are all common support issues submitted by onsite trainers.   These are cases that can be easily resolved by the onsite trainer.  Please use this as a reference before submitting a support case.  <strong>Last updated:  January 10, 2013</strong></p>  ';
  $handler->display->display_options['header']['text']['format'] = '2';
  $handler->display->display_options['path'] = 'trainer/support/issues';
  $handler->display->display_options['menu']['name'] = 'primary-links';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '#';
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['text'] = '<strong>[counter].</strong>';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Content: Updated/commented date */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['label'] = 'Last Update/Comment';
  /* Field: Content: Support Categories */
  $handler->display->display_options['fields']['taxonomy_vocabulary_32']['id'] = 'taxonomy_vocabulary_32';
  $handler->display->display_options['fields']['taxonomy_vocabulary_32']['table'] = 'field_data_taxonomy_vocabulary_32';
  $handler->display->display_options['fields']['taxonomy_vocabulary_32']['field'] = 'taxonomy_vocabulary_32';
  $handler->display->display_options['fields']['taxonomy_vocabulary_32']['label'] = 'Categories';
  $handler->display->display_options['fields']['taxonomy_vocabulary_32']['delta_offset'] = '0';
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['path'] = 'trainer/support/issues/admin';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $export['training_support_issue'] = $view;

  return $export;
}
