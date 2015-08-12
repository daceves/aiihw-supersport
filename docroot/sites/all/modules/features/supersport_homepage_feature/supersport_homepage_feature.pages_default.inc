<?php
/**
 * @file
 * supersport_homepage_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function supersport_homepage_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'supersport_homepage';
  $page->task = 'page';
  $page->admin_title = 'Supersport Homepage';
  $page->admin_description = 'This displays the main hero view, archived view, upcoming view, and popular view.';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_supersport_homepage__panel_context_2213aabc-778f-4457-89e1-bc2e5c5a957c';
  $handler->task = 'page';
  $handler->subtask = 'supersport_homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible:homepage_flexible_layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_left_region' => NULL,
      'top_right_region' => NULL,
      'bottom_region' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '655b0de6-6002-493d-aa87-b188bd312c85';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-093963fe-e4d3-46c1-982f-1d31014d4448';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '093963fe-e4d3-46c1-982f-1d31014d4448';
    $display->content['new-093963fe-e4d3-46c1-982f-1d31014d4448'] = $pane;
    $display->panels['bottom_region'][0] = 'new-093963fe-e4d3-46c1-982f-1d31014d4448';
    $pane = new stdClass();
    $pane->pid = 'new-7017f2c5-80e4-4a52-a6ce-6e9c3175ef10';
    $pane->panel = 'top_left_region';
    $pane->type = 'views';
    $pane->subtype = 'main_feature_hero';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->uuid = '7017f2c5-80e4-4a52-a6ce-6e9c3175ef10';
    $display->content['new-7017f2c5-80e4-4a52-a6ce-6e9c3175ef10'] = $pane;
    $display->panels['top_left_region'][0] = 'new-7017f2c5-80e4-4a52-a6ce-6e9c3175ef10';
    $pane = new stdClass();
    $pane->pid = 'new-bb2bf079-c4e1-40b6-a48a-a88415a9f3e5';
    $pane->panel = 'top_right_region';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-upcoming_archived_quicktabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = 'bb2bf079-c4e1-40b6-a48a-a88415a9f3e5';
    $display->content['new-bb2bf079-c4e1-40b6-a48a-a88415a9f3e5'] = $pane;
    $display->panels['top_right_region'][0] = 'new-bb2bf079-c4e1-40b6-a48a-a88415a9f3e5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-7017f2c5-80e4-4a52-a6ce-6e9c3175ef10';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['supersport_homepage'] = $page;

  return $pages;

}
