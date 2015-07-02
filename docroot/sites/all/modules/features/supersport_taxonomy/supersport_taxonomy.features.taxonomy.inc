<?php
/**
 * @file
 * supersport_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function supersport_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'league' => array(
      'name' => 'League',
      'machine_name' => 'league',
      'description' => 'The organization in which the sport is played. ',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'sport' => array(
      'name' => 'Sport',
      'machine_name' => 'sport',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'teams' => array(
      'name' => 'Teams',
      'machine_name' => 'teams',
      'description' => 'Group of athletes playing for a common goal.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
