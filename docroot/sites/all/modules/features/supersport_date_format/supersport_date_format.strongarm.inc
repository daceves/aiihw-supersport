<?php
/**
 * @file
 * supersport_date_format.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function supersport_date_format_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_supersport_short_date';
  $strongarm->value = 'd M h:ia T';
  $export['date_format_supersport_short_date'] = $strongarm;

  return $export;
}
