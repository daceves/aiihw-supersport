<?php
/**
 * @file
 * supersport_image_styles.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function supersport_image_styles_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_toolkit';
  $strongarm->value = 'gd';
  $export['image_toolkit'] = $strongarm;

  return $export;
}
