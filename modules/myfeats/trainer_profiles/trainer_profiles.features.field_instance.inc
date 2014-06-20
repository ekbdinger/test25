<?php
/**
 * @file
 * trainer_profiles.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function trainer_profiles_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'profile2-trainer_profile-field_tr_first_name'
  $field_instances['profile2-trainer_profile-field_tr_first_name'] = array(
    'bundle' => 'trainer_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_tr_first_name',
    'label' => 'First Name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'test_format' => 'test_format',
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'test_format' => array(
              'weight' => -7,
            ),
            1 => array(
              'weight' => -9,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -8,
            ),
            4 => array(
              'weight' => -6,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'profile2-trainer_profile-field_tr_last_name'
  $field_instances['profile2-trainer_profile-field_tr_last_name'] = array(
    'bundle' => 'trainer_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_tr_last_name',
    'label' => 'Last Name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'test_format' => 'test_format',
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'test_format' => array(
              'weight' => -7,
            ),
            1 => array(
              'weight' => -9,
            ),
            2 => array(
              'weight' => -10,
            ),
            3 => array(
              'weight' => -8,
            ),
            4 => array(
              'weight' => -6,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'profile2-trainer_profile-field_tr_location'
  $field_instances['profile2-trainer_profile-field_tr_location'] = array(
    'bundle' => 'trainer_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Set this field to "None" to remove someone from the Trainer Profiles Page',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_tr_location',
    'label' => 'Group',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'profile2-trainer_profile-field_tr_role'
  $field_instances['profile2-trainer_profile-field_tr_role'] = array(
    'bundle' => 'trainer_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_tr_role',
    'label' => 'Role',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'profile2-trainer_profile-field_tr_start_date'
  $field_instances['profile2-trainer_profile-field_tr_start_date'] = array(
    'bundle' => 'trainer_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_tr_start_date',
    'label' => 'Start Date',
    'required' => FALSE,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'profile2-trainer_profile-field_tr_state'
  $field_instances['profile2-trainer_profile-field_tr_state'] = array(
    'bundle' => 'trainer_profile',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_tr_state',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'profile2-trainer_profile-field_trainer_picture'
  $field_instances['profile2-trainer_profile-field_trainer_picture'] = array(
    'bundle' => 'trainer_profile',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'trainer_profile_pic',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_trainer_picture',
    'label' => 'Picture',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'training/profile_pics',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '10 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'trainer_profile_pic',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('First Name');
  t('Group');
  t('Last Name');
  t('Location');
  t('Picture');
  t('Role');
  t('Set this field to "None" to remove someone from the Trainer Profiles Page');
  t('Start Date');

  return $field_instances;
}
