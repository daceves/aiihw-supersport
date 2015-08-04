<?php
/**
 * @file
 * supersport_homepage_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function supersport_homepage_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'archived_view';
  $view->description = 'Displays upcoming events';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Archived View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Archived';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_sport' => 'field_sport',
    'field_teams' => 'field_teams',
    'field_league' => 'field_league',
  );
  $handler->display->display_options['row_options']['separator'] = '|';
  /* No results behavior: Global: Messages */
  $handler->display->display_options['empty']['messages']['id'] = 'messages';
  $handler->display->display_options['empty']['messages']['table'] = 'views';
  $handler->display->display_options['empty']['messages']['field'] = 'messages';
  $handler->display->display_options['empty']['messages']['label'] = 'No Upcoming Events Error Message';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Sport */
  $handler->display->display_options['fields']['field_sport']['id'] = 'field_sport';
  $handler->display->display_options['fields']['field_sport']['table'] = 'field_data_field_sport';
  $handler->display->display_options['fields']['field_sport']['field'] = 'field_sport';
  $handler->display->display_options['fields']['field_sport']['label'] = '';
  $handler->display->display_options['fields']['field_sport']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sport']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: League */
  $handler->display->display_options['fields']['field_league']['id'] = 'field_league';
  $handler->display->display_options['fields']['field_league']['table'] = 'field_data_field_league';
  $handler->display->display_options['fields']['field_league']['field'] = 'field_league';
  $handler->display->display_options['fields']['field_league']['label'] = '';
  $handler->display->display_options['fields']['field_league']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_league']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Teams */
  $handler->display->display_options['fields']['field_teams']['id'] = 'field_teams';
  $handler->display->display_options['fields']['field_teams']['table'] = 'field_data_field_teams';
  $handler->display->display_options['fields']['field_teams']['field'] = 'field_teams';
  $handler->display->display_options['fields']['field_teams']['label'] = '';
  $handler->display->display_options['fields']['field_teams']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teams']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_teams']['delta_offset'] = '0';
  /* Sort criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
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
  /* Filter criterion: Content: Date - end date (field_date:value2) */
  $handler->display->display_options['filters']['field_date_value2']['id'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value2']['field'] = 'field_date_value2';
  $handler->display->display_options['filters']['field_date_value2']['operator'] = '<';
  $handler->display->display_options['filters']['field_date_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_date_value2']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'archived-view';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $export['archived_view'] = $view;

  $view = new view();
  $view->name = 'main_feature_hero';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Main Feature Hero';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Sort criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
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
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['main_feature_hero'] = $view;

  $view = new view();
  $view->name = 'upcoming_view';
  $view->description = 'Displays upcoming events';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Upcoming View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_sport' => 'field_sport',
    'field_teams' => 'field_teams',
    'field_league' => 'field_league',
  );
  $handler->display->display_options['row_options']['separator'] = '|';
  /* No results behavior: Global: Messages */
  $handler->display->display_options['empty']['messages']['id'] = 'messages';
  $handler->display->display_options['empty']['messages']['table'] = 'views';
  $handler->display->display_options['empty']['messages']['field'] = 'messages';
  $handler->display->display_options['empty']['messages']['label'] = 'No Upcoming Events Error Message';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Field: Sport */
  $handler->display->display_options['fields']['field_sport']['id'] = 'field_sport';
  $handler->display->display_options['fields']['field_sport']['table'] = 'field_data_field_sport';
  $handler->display->display_options['fields']['field_sport']['field'] = 'field_sport';
  $handler->display->display_options['fields']['field_sport']['label'] = '';
  $handler->display->display_options['fields']['field_sport']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sport']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: League */
  $handler->display->display_options['fields']['field_league']['id'] = 'field_league';
  $handler->display->display_options['fields']['field_league']['table'] = 'field_data_field_league';
  $handler->display->display_options['fields']['field_league']['field'] = 'field_league';
  $handler->display->display_options['fields']['field_league']['label'] = '';
  $handler->display->display_options['fields']['field_league']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_league']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Teams */
  $handler->display->display_options['fields']['field_teams']['id'] = 'field_teams';
  $handler->display->display_options['fields']['field_teams']['table'] = 'field_data_field_teams';
  $handler->display->display_options['fields']['field_teams']['field'] = 'field_teams';
  $handler->display->display_options['fields']['field_teams']['label'] = '';
  $handler->display->display_options['fields']['field_teams']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teams']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_teams']['delta_offset'] = '0';
  /* Sort criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Date -  start date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'upcoming-view';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $export['upcoming_view'] = $view;

  return $export;
}
