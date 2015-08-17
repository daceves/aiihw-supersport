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
  $display->layout = 'flexible:supersport_three_row_layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_region' => NULL,
      'bottom_region' => NULL,
      'supersport_three_region_one' => NULL,
      'supersport_three_region_two' => NULL,
      'supersport_three_region_three' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1f04e98d-e377-4c8c-9b39-24a2eb6a008b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8261dad1-0072-44f1-a5dc-1d7d38b657ff';
    $pane->panel = 'supersport_three_region_one';
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
    $display->panels['supersport_three_region_one'][0] = 'new-8261dad1-0072-44f1-a5dc-1d7d38b657ff';
    $pane = new stdClass();
    $pane->pid = 'new-b32bd347-bb86-4609-9e57-a1c2cb0b2d7f';
    $pane->panel = 'supersport_three_region_three';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b32bd347-bb86-4609-9e57-a1c2cb0b2d7f';
    $display->content['new-b32bd347-bb86-4609-9e57-a1c2cb0b2d7f'] = $pane;
    $display->panels['supersport_three_region_three'][0] = 'new-b32bd347-bb86-4609-9e57-a1c2cb0b2d7f';
    $pane = new stdClass();
    $pane->pid = 'new-a5a31f23-9f5a-46bd-b1a7-005c80649e27';
    $pane->panel = 'supersport_three_region_two';
    $pane->type = 'views';
    $pane->subtype = 'taxonomy_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '9',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
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
    $pane->uuid = 'a5a31f23-9f5a-46bd-b1a7-005c80649e27';
    $display->content['new-a5a31f23-9f5a-46bd-b1a7-005c80649e27'] = $pane;
    $display->panels['supersport_three_region_two'][0] = 'new-a5a31f23-9f5a-46bd-b1a7-005c80649e27';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__taxonomy_term_panel'] = $handler;

  return $export;
}
