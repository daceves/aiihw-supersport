<?php
/**
 * @file
 * supersport_three_row_layout.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function supersport_three_row_layout_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'supersport_three_row_layout';
  $layout->admin_title = 'Supersport Three Row Layout';
  $layout->admin_description = 'A layout made of three elements vertically.';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 2,
          2 => 3,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'supersport_three_region_one',
        ),
        'parent' => 'main',
        'class' => 'supersport-three-one',
        'hide_empty' => 1,
      ),
      'supersport_three_region_one' => array(
        'type' => 'region',
        'title' => 'Supersport Three Region One',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'supersport_three_region_two',
        ),
        'parent' => 'main',
        'class' => 'supersport-three-two',
        'hide_empty' => 1,
      ),
      'supersport_three_region_two' => array(
        'type' => 'region',
        'title' => 'Supersport Three Region Two',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 1,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'supersport_three_region_three',
        ),
        'parent' => 'main',
        'class' => 'supersport-three-three',
        'hide_empty' => 1,
      ),
      'supersport_three_region_three' => array(
        'type' => 'region',
        'title' => 'Supersport Three Region Three',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 1,
      ),
    ),
  );
  $export['supersport_three_row_layout'] = $layout;

  return $export;
}
