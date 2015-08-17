<?php
/**
 * @file
 * supersport_taxonomy_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function supersport_taxonomy_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__taxonomy_term_panel';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Taxonomy Term Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'taxonomy_term_panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible:event_node_flexible_layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_region' => NULL,
      'bottom_region' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1f04e98d-e377-4c8c-9b39-24a2eb6a008b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e083182b-106c-4b3f-80d0-3086abe10cc7';
    $pane->panel = 'bottom_region';
    $pane->type = 'views';
    $pane->subtype = 'popular_sport_event_views';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'popular-sport-event-views-region',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e083182b-106c-4b3f-80d0-3086abe10cc7';
    $display->content['new-e083182b-106c-4b3f-80d0-3086abe10cc7'] = $pane;
    $display->panels['bottom_region'][0] = 'new-e083182b-106c-4b3f-80d0-3086abe10cc7';
    $pane = new stdClass();
    $pane->pid = 'new-8261dad1-0072-44f1-a5dc-1d7d38b657ff';
    $pane->panel = 'top_region';
    $pane->type = 'block';
    $pane->subtype = 'supersport_event_header-ss_taxonomy_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8261dad1-0072-44f1-a5dc-1d7d38b657ff';
    $display->content['new-8261dad1-0072-44f1-a5dc-1d7d38b657ff'] = $pane;
    $display->panels['top_region'][0] = 'new-8261dad1-0072-44f1-a5dc-1d7d38b657ff';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__taxonomy_term_panel'] = $handler;

  return $export;
}
