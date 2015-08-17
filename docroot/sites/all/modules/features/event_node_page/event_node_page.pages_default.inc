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
  $display->uuid = 'feeed729-8cb2-4a8a-92e2-03be7e4ee70a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d584bb6f-ee64-4e4a-b131-00407711c7cf';
    $pane->panel = 'bottom_region';
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
    $display->panels['bottom_region'][0] = 'new-d584bb6f-ee64-4e4a-b131-00407711c7cf';
    $pane = new stdClass();
    $pane->pid = 'new-fb710167-eb6f-41b9-803a-779d472d36cd';
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
      'css_id' => 'supersport-popular-view',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fb710167-eb6f-41b9-803a-779d472d36cd';
    $display->content['new-fb710167-eb6f-41b9-803a-779d472d36cd'] = $pane;
    $display->panels['bottom_region'][1] = 'new-fb710167-eb6f-41b9-803a-779d472d36cd';
    $pane = new stdClass();
    $pane->pid = 'new-79073162-d88c-45b0-b2ae-053f82e67577';
    $pane->panel = 'top_region';
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
    $display->panels['top_region'][0] = 'new-79073162-d88c-45b0-b2ae-053f82e67577';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-79073162-d88c-45b0-b2ae-053f82e67577';
  $handler->conf['display'] = $display;
  $export['node_view__event_node_page'] = $handler;

  return $export;
}
