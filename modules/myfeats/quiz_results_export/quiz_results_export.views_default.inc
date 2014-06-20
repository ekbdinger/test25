<?php
/**
 * @file
 * quiz_results_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function quiz_results_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'test_quiz_results';
  $view->description = 'See if I can display quiz results';
  $view->tag = 'quiz';
  $view->base_table = 'quiz_node_properties';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'HR Day 2013 Test Results';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    16 => '16',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'time_end' => 'time_end',
    'name' => 'name',
    'mail' => 'mail',
    'result_id' => 'result_id',
    'score' => 'score',
    'uid' => 'uid',
    'nid' => 'nid',
    'quiz_state' => 'quiz_state',
  );
  $handler->display->display_options['style_options']['default'] = 'time_end';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'separator' => '',
    ),
    'time_end' => array(
      'sortable' => 1,
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
    'result_id' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'score' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'uid' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'nid' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'quiz_state' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['order'] = 'desc';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'text';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['empty'] = TRUE;
  $handler->display->display_options['header']['text']['content'] = '<p>&nbsp;</p>
<h3><a href="/hr/hrday/quiz/results/export">Export the quiz results to excel</a></h3>
<p>&nbsp;</p>';
  $handler->display->display_options['header']['text']['format'] = '2';
  /* Relationship: Quiz Results: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'quiz_node_results';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Quiz: Quiz Node NID */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'quiz_node_properties';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['label'] = 'Quiz Node ID';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['text'] = '<strong>[counter])</strong>';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Quiz Results: Quiz End Time */
  $handler->display->display_options['fields']['time_end']['id'] = 'time_end';
  $handler->display->display_options['fields']['time_end']['table'] = 'quiz_node_results';
  $handler->display->display_options['fields']['time_end']['field'] = 'time_end';
  $handler->display->display_options['fields']['time_end']['label'] = 'Date Finished';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Username';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  /* Field: Quiz Results: Result ID */
  $handler->display->display_options['fields']['result_id']['id'] = 'result_id';
  $handler->display->display_options['fields']['result_id']['table'] = 'quiz_node_results';
  $handler->display->display_options['fields']['result_id']['field'] = 'result_id';
  $handler->display->display_options['fields']['result_id']['exclude'] = TRUE;
  /* Field: Quiz Results: Score */
  $handler->display->display_options['fields']['score']['id'] = 'score';
  $handler->display->display_options['fields']['score']['table'] = 'quiz_node_results';
  $handler->display->display_options['fields']['score']['field'] = 'score';
  /* Field: Quiz Results: User */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'quiz_node_results';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Quiz Results: Quiz State */
  $handler->display->display_options['fields']['quiz_state']['id'] = 'quiz_state';
  $handler->display->display_options['fields']['quiz_state']['table'] = 'quiz_node_results';
  $handler->display->display_options['fields']['quiz_state']['field'] = 'quiz_state';
  $handler->display->display_options['fields']['quiz_state']['exclude'] = TRUE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['filters']['nid_1']['table'] = 'node';
  $handler->display->display_options['filters']['nid_1']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['relationship'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['value']['value'] = '10328';
  $handler->display->display_options['filters']['nid_1']['group'] = '0';
  $handler->display->display_options['filters']['nid_1']['expose']['operator'] = FALSE;
  /* Filter criterion: Quiz Results: Quiz State */
  $handler->display->display_options['filters']['quiz_state']['id'] = 'quiz_state';
  $handler->display->display_options['filters']['quiz_state']['table'] = 'quiz_node_results';
  $handler->display->display_options['filters']['quiz_state']['field'] = 'quiz_state';
  $handler->display->display_options['filters']['quiz_state']['value'] = array(
    'quiz_state' => 'finished',
  );
  $handler->display->display_options['filters']['quiz_state']['group'] = '0';
  $handler->display->display_options['filters']['quiz_state']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = '0';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Search by Username';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember'] = TRUE;
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['relationship'] = 'uid';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = '0';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'Search by E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';

  /* Display: HIPAA Test */
  $handler = $view->new_display('page', 'HIPAA Test', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'HIPAA Test 2012';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => 3,
    16 => 16,
    7 => 7,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['filters']['nid_1']['table'] = 'node';
  $handler->display->display_options['filters']['nid_1']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['relationship'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['value']['value'] = '6917';
  $handler->display->display_options['filters']['nid_1']['group'] = '0';
  $handler->display->display_options['filters']['nid_1']['expose']['operator'] = FALSE;
  /* Filter criterion: Quiz Results: Quiz State */
  $handler->display->display_options['filters']['quiz_state']['id'] = 'quiz_state';
  $handler->display->display_options['filters']['quiz_state']['table'] = 'quiz_node_results';
  $handler->display->display_options['filters']['quiz_state']['field'] = 'quiz_state';
  $handler->display->display_options['filters']['quiz_state']['value'] = array(
    'quiz_state' => 'finished',
  );
  $handler->display->display_options['filters']['quiz_state']['group'] = '0';
  $handler->display->display_options['filters']['quiz_state']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = '0';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Search by Username';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember'] = TRUE;
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['relationship'] = 'uid';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = '0';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'Search by E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['path'] = 'test/results/hipaa';

  /* Display: SH 2012 */
  $handler = $view->new_display('page', 'SH 2012', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sexual Harassment Test Results';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => 3,
    16 => 16,
    7 => 7,
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'area';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['content'] = '<p>&nbsp;Here is a link to the Sexual Harassment Test <a target="_blank" href="http://ecwknowledgebase.com/sexualharassmenttest">Sexual Harassment Test.</a></p>
<p>&nbsp;</p>';
  $handler->display->display_options['header']['text']['format'] = '2';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['filters']['nid_1']['table'] = 'node';
  $handler->display->display_options['filters']['nid_1']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['relationship'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['value']['value'] = '7148';
  $handler->display->display_options['filters']['nid_1']['group'] = '0';
  $handler->display->display_options['filters']['nid_1']['expose']['operator'] = FALSE;
  /* Filter criterion: Quiz Results: Quiz State */
  $handler->display->display_options['filters']['quiz_state']['id'] = 'quiz_state';
  $handler->display->display_options['filters']['quiz_state']['table'] = 'quiz_node_results';
  $handler->display->display_options['filters']['quiz_state']['field'] = 'quiz_state';
  $handler->display->display_options['filters']['quiz_state']['value'] = array(
    'quiz_state' => 'finished',
  );
  $handler->display->display_options['filters']['quiz_state']['group'] = '0';
  $handler->display->display_options['filters']['quiz_state']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = '0';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Search by Username';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['relationship'] = 'uid';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = '0';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'Search by E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['path'] = 'test/results/sexualharassment';

  /* Display: HIPAA 2013 */
  $handler = $view->new_display('page', 'HIPAA 2013', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'HIPAA 2013 Test Results';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'text';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['content'] = '<h3>These are the Results for the <a href="http://int.ecwknowledgebase.com/node/10285" target="new">2013 HIPAA Quiz</a></h3>
<h3>Use <a href="http://int.ecwknowledgebase.com/test/results/hipaa2013/export">this link to export</a> the results of the quiz.</h3>
<br />';
  $handler->display->display_options['header']['text']['format'] = '2';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['filters']['nid_1']['table'] = 'node';
  $handler->display->display_options['filters']['nid_1']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['relationship'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['value']['value'] = '10285';
  $handler->display->display_options['filters']['nid_1']['group'] = '0';
  $handler->display->display_options['filters']['nid_1']['expose']['operator'] = FALSE;
  /* Filter criterion: Quiz Results: Quiz State */
  $handler->display->display_options['filters']['quiz_state']['id'] = 'quiz_state';
  $handler->display->display_options['filters']['quiz_state']['table'] = 'quiz_node_results';
  $handler->display->display_options['filters']['quiz_state']['field'] = 'quiz_state';
  $handler->display->display_options['filters']['quiz_state']['value'] = array(
    'quiz_state' => 'finished',
  );
  $handler->display->display_options['filters']['quiz_state']['group'] = '0';
  $handler->display->display_options['filters']['quiz_state']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = '0';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Search by Username';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember'] = TRUE;
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['relationship'] = 'uid';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = '0';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'Search by E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['path'] = 'test/results/hipaa2013';

  /* Display: SH 2013 */
  $handler = $view->new_display('page', 'SH 2013', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sexual Harassment 2013 Test Results';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'text';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['content'] = '<h3>These are the Results for the <a href="http://int.ecwknowledgebase.com/node/10282" target="new">2013 Sexual Harassment Quiz</a></h3>
<h3>Use <a href="http://int.ecwknowledgebase.com/test/results/sh2013/export">this link to export</a> the results of the quiz.</h3>
<br />


<br />';
  $handler->display->display_options['header']['text']['format'] = '2';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['filters']['nid_1']['table'] = 'node';
  $handler->display->display_options['filters']['nid_1']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['relationship'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['value']['value'] = '10282';
  $handler->display->display_options['filters']['nid_1']['group'] = '0';
  $handler->display->display_options['filters']['nid_1']['expose']['operator'] = FALSE;
  /* Filter criterion: Quiz Results: Quiz State */
  $handler->display->display_options['filters']['quiz_state']['id'] = 'quiz_state';
  $handler->display->display_options['filters']['quiz_state']['table'] = 'quiz_node_results';
  $handler->display->display_options['filters']['quiz_state']['field'] = 'quiz_state';
  $handler->display->display_options['filters']['quiz_state']['value'] = array(
    'quiz_state' => 'finished',
  );
  $handler->display->display_options['filters']['quiz_state']['group'] = '0';
  $handler->display->display_options['filters']['quiz_state']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = '0';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Search by Username';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember'] = TRUE;
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['relationship'] = 'uid';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = '0';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'Search by E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['path'] = 'test/results/sh2013';

  /* Display: HIPAA 2013 Export */
  $handler = $view->new_display('views_data_export', 'HIPAA 2013 Export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'text';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['content'] = '<br />';
  $handler->display->display_options['header']['text']['format'] = '2';
  $handler->display->display_options['path'] = 'test/results/hipaa2013/export';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page_1' => 0,
    'page_2' => 0,
    'page_3' => 0,
    'page_4' => 0,
  );

  /* Display: SH 2013 Export */
  $handler = $view->new_display('views_data_export', 'SH 2013 Export', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sexual Harassment 2013 Test Results';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'sh_2013_quiz_results_%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['filters']['nid_1']['table'] = 'node';
  $handler->display->display_options['filters']['nid_1']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['relationship'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['value']['value'] = '10282';
  $handler->display->display_options['filters']['nid_1']['group'] = '0';
  $handler->display->display_options['filters']['nid_1']['expose']['operator'] = FALSE;
  /* Filter criterion: Quiz Results: Quiz State */
  $handler->display->display_options['filters']['quiz_state']['id'] = 'quiz_state';
  $handler->display->display_options['filters']['quiz_state']['table'] = 'quiz_node_results';
  $handler->display->display_options['filters']['quiz_state']['field'] = 'quiz_state';
  $handler->display->display_options['filters']['quiz_state']['value'] = array(
    'quiz_state' => 'finished',
  );
  $handler->display->display_options['filters']['quiz_state']['group'] = '0';
  $handler->display->display_options['filters']['quiz_state']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = '0';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Search by Username';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember'] = TRUE;
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['relationship'] = 'uid';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = '0';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'Search by E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['path'] = 'test/results/sh2013/export';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: HR Day 2013 */
  $handler = $view->new_display('page', 'HR Day 2013', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'HR Day 2013 Test Results';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['filters']['nid_1']['table'] = 'node';
  $handler->display->display_options['filters']['nid_1']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['relationship'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['value']['value'] = '10328';
  $handler->display->display_options['filters']['nid_1']['group'] = '0';
  $handler->display->display_options['filters']['nid_1']['expose']['operator'] = FALSE;
  /* Filter criterion: Quiz Results: Quiz State */
  $handler->display->display_options['filters']['quiz_state']['id'] = 'quiz_state';
  $handler->display->display_options['filters']['quiz_state']['table'] = 'quiz_node_results';
  $handler->display->display_options['filters']['quiz_state']['field'] = 'quiz_state';
  $handler->display->display_options['filters']['quiz_state']['value'] = array(
    'quiz_state' => 'finished',
  );
  $handler->display->display_options['filters']['quiz_state']['group'] = '0';
  $handler->display->display_options['filters']['quiz_state']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = '0';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Search by Username';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember'] = TRUE;
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['relationship'] = 'uid';
  $handler->display->display_options['filters']['mail']['operator'] = 'contains';
  $handler->display->display_options['filters']['mail']['group'] = '0';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'Search by E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['path'] = 'hr/hrday/quiz/results';

  /* Display: HR Day 2013 Export */
  $handler = $view->new_display('views_data_export', 'HR Day 2013 Export', 'views_data_export_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'HR Day 2013 Test Results';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'hr_day_test_results_%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['path'] = 'hr/hrday/quiz/results/export';
  $handler->display->display_options['sitename_title'] = 0;
  $export['test_quiz_results'] = $view;

  return $export;
}
