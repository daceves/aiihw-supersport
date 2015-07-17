<?php
/**
 * @file
 * supersport_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function supersport_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_live|node|event|form';
  $field_group->group_name = 'group_live';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Live',
    'weight' => '9',
    'children' => array(
      0 => 'field_live_video',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Live',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_live|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postgame|node|event|form';
  $field_group->group_name = 'group_postgame';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Post',
    'weight' => '11',
    'children' => array(
      0 => 'field_post_live_video',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Post',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_postgame|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prelive|node|event|form';
  $field_group->group_name = 'group_prelive';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pre-live',
    'weight' => '8',
    'children' => array(
      0 => 'field_pre_live_video',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Pre-live',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_prelive|node|event|form'] = $field_group;

  return $export;
}
