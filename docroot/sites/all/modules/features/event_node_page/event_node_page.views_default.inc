<?php
/**
 * @file
 * event_node_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function event_node_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'event_node_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Event Node View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Field: Content: Live-video */
  $handler->display->display_options['fields']['field_live_video']['id'] = 'field_live_video';
  $handler->display->display_options['fields']['field_live_video']['table'] = 'field_data_field_live_video';
  $handler->display->display_options['fields']['field_live_video']['field'] = 'field_live_video';
  $handler->display->display_options['fields']['field_live_video']['label'] = '';
  $handler->display->display_options['fields']['field_live_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_live_video']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_live_video']['settings'] = array(
    'view_mode' => 'default',
    'links' => 0,
  );
  /* Field: Content: post-live-video */
  $handler->display->display_options['fields']['field_post_live_video']['id'] = 'field_post_live_video';
  $handler->display->display_options['fields']['field_post_live_video']['table'] = 'field_data_field_post_live_video';
  $handler->display->display_options['fields']['field_post_live_video']['field'] = 'field_post_live_video';
  $handler->display->display_options['fields']['field_post_live_video']['label'] = '';
  $handler->display->display_options['fields']['field_post_live_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_live_video']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_post_live_video']['settings'] = array(
    'view_mode' => 'default',
    'links' => 0,
  );
  /* Field: Content: Pre-live-video */
  $handler->display->display_options['fields']['field_pre_live_video']['id'] = 'field_pre_live_video';
  $handler->display->display_options['fields']['field_pre_live_video']['table'] = 'field_data_field_pre_live_video';
  $handler->display->display_options['fields']['field_pre_live_video']['field'] = 'field_pre_live_video';
  $handler->display->display_options['fields']['field_pre_live_video']['label'] = '';
  $handler->display->display_options['fields']['field_pre_live_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pre_live_video']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_pre_live_video']['settings'] = array(
    'view_mode' => 'default',
    'links' => 0,
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['event_node_view'] = $view;

  return $export;
}
