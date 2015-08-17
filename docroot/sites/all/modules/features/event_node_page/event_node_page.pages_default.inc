<?php
/**
 * @file
 * event_node_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function event_node_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__event_node_page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Event Node Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'event_node_page',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'event' => 'event',
              'video' => 'video',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
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
  $display->uuid = 'feeed729-8cb2-4a8a-92e2-03be7e4ee70a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-79073162-d88c-45b0-b2ae-053f82e67577';
    $pane->panel = 'supersport_three_region_one';
    $pane->type = 'block';
    $pane->subtype = 'supersport_event_header-ss_header';
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
    $pane->uuid = '79073162-d88c-45b0-b2ae-053f82e67577';
    $display->content['new-79073162-d88c-45b0-b2ae-053f82e67577'] = $pane;
    $display->panels['supersport_three_region_one'][0] = 'new-79073162-d88c-45b0-b2ae-053f82e67577';
    $pane = new stdClass();
    $pane->pid = 'new-c46e87e0-e103-4067-81d1-f4551554e1ce';
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
    $pane->uuid = 'c46e87e0-e103-4067-81d1-f4551554e1ce';
    $display->content['new-c46e87e0-e103-4067-81d1-f4551554e1ce'] = $pane;
    $display->panels['supersport_three_region_three'][0] = 'new-c46e87e0-e103-4067-81d1-f4551554e1ce';
    $pane = new stdClass();
    $pane->pid = 'new-d584bb6f-ee64-4e4a-b131-00407711c7cf';
    $pane->panel = 'supersport_three_region_two';
    $pane->type = 'views_panes';
    $pane->subtype = 'event_node_view-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'supersport-event-node-page',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd584bb6f-ee64-4e4a-b131-00407711c7cf';
    $display->content['new-d584bb6f-ee64-4e4a-b131-00407711c7cf'] = $pane;
    $display->panels['supersport_three_region_two'][0] = 'new-d584bb6f-ee64-4e4a-b131-00407711c7cf';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-79073162-d88c-45b0-b2ae-053f82e67577';
  $handler->conf['display'] = $display;
  $export['node_view__event_node_page'] = $handler;

  return $export;
}
