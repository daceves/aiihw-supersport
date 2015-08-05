<?php
/**
 * @file
 * supersport_quicktabs.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function supersport_quicktabs_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'upcoming_archived_quicktabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Upcoming + Archived Quicktabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_upcoming_view-block',
      'hide_title' => 1,
      'title' => 'Upcoming',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_archived_view-block',
      'hide_title' => 1,
      'title' => 'Archived',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Archived');
  t('Upcoming');
  t('Upcoming + Archived Quicktabs');

  $export['upcoming_archived_quicktabs'] = $quicktabs;

  return $export;
}
