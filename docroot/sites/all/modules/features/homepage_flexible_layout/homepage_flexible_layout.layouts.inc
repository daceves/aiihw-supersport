<?php
/**
 * @file
 * homepage_flexible_layout.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function homepage_flexible_layout_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'homepage_flexible_layout';
  $layout->admin_title = 'homepage_flexible_layout';
  $layout->admin_description = 'A flexible layout designed for the homepage. This layout contains two rows. The top row has two columns while the bottom row has one column.';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
        ),
        'parent' => NULL,
      ),
      1 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 7,
          1 => 5,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 12,
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 9,
          1 => 8,
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      8 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '7',
        'children' => array(
          0 => 11,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      9 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '7',
        'children' => array(
          0 => 10,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_left_region',
        ),
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
      'top_left_region' => array(
        'type' => 'region',
        'title' => 'Top Left Region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
        'hide_empty' => 0,
      ),
      11 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_right_region',
        ),
        'parent' => '8',
        'class' => '',
        'hide_empty' => 0,
      ),
      'top_right_region' => array(
        'type' => 'region',
        'title' => 'Top Right Region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '11',
        'class' => '',
        'hide_empty' => 0,
      ),
      12 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'children' => array(
          0 => 13,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      13 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom_region',
        ),
        'parent' => '12',
        'class' => '',
        'hide_empty' => 0,
      ),
      'bottom_region' => array(
        'type' => 'region',
        'title' => 'Bottom Region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '13',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $export['homepage_flexible_layout'] = $layout;

  return $export;
}
