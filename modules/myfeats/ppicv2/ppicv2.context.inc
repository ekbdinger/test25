<?php
/**
 * @file
 * ppicv2.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ppicv2_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ppic_links';
  $context->description = 'PPIC menu for general users';
  $context->tag = 'ppic';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'ppic_program' => 'ppic_program',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'ppic-programs' => 'ppic-programs',
        'ppic/*' => 'ppic/*',
        'ppic' => 'ppic',
        'node/10200' => 'node/10200',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-ppic-navigation' => array(
          'module' => 'menu',
          'delta' => 'menu-ppic-navigation',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('PPIC menu for general users');
  t('ppic');
  $export['ppic_links'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ppic_worker_node_type';
  $context->description = 'Display the PPIC Worker menu on PPIC Program Nodes';
  $context->tag = 'ppic';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'ppic_program' => 'ppic_program',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'user' => array(
      'values' => array(
        'PPIC Worker' => 'PPIC Worker',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-ppic-worker' => array(
          'module' => 'menu',
          'delta' => 'menu-ppic-worker',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display the PPIC Worker menu on PPIC Program Nodes');
  t('ppic');
  $export['ppic_worker_node_type'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ppic_worker_role';
  $context->description = 'PPIC Worker menu displays if the user has the right permission';
  $context->tag = 'ppic';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'PPIC Worker' => 'PPIC Worker',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-ppic-worker' => array(
          'module' => 'menu',
          'delta' => 'menu-ppic-worker',
          'region' => 'sidebar_first',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('PPIC Worker menu displays if the user has the right permission');
  t('ppic');
  $export['ppic_worker_role'] = $context;

  return $export;
}
