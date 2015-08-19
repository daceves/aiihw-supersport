<?php
/**
 * @file
 * supersport_taxonomy_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function supersport_taxonomy_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'taxonomy_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Taxonomy View';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_live_video_target_id']['id'] = 'field_live_video_target_id';
  $handler->display->display_options['relationships']['field_live_video_target_id']['table'] = 'field_data_field_live_video';
  $handler->display->display_options['relationships']['field_live_video_target_id']['field'] = 'field_live_video_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_post_live_video_target_id']['id'] = 'field_post_live_video_target_id';
  $handler->display->display_options['relationships']['field_post_live_video_target_id']['table'] = 'field_data_field_post_live_video';
  $handler->display->display_options['relationships']['field_post_live_video_target_id']['field'] = 'field_post_live_video_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_pre_live_video_target_id']['id'] = 'field_pre_live_video_target_id';
  $handler->display->display_options['relationships']['field_pre_live_video_target_id']['table'] = 'field_data_field_pre_live_video';
  $handler->display->display_options['relationships']['field_pre_live_video_target_id']['field'] = 'field_pre_live_video_target_id';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Sport Video */
  $handler->display->display_options['fields']['field_sportvideo']['id'] = 'field_sportvideo';
  $handler->display->display_options['fields']['field_sportvideo']['table'] = 'field_data_field_sportvideo';
  $handler->display->display_options['fields']['field_sportvideo']['field'] = 'field_sportvideo';
  $handler->display->display_options['fields']['field_sportvideo']['relationship'] = 'field_pre_live_video_target_id';
  $handler->display->display_options['fields']['field_sportvideo']['label'] = '';
  $handler->display->display_options['fields']['field_sportvideo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sportvideo']['click_sort_column'] = 'fid';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['relationship'] = 'field_post_live_video_target_id';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image_2']['id'] = 'field_image_2';
  $handler->display->display_options['fields']['field_image_2']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_2']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_2']['relationship'] = 'field_live_video_target_id';
  $handler->display->display_options['fields']['field_image_2']['label'] = '';
  $handler->display->display_options['fields']['field_image_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_2']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image_3']['id'] = 'field_image_3';
  $handler->display->display_options['fields']['field_image_3']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_3']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_3']['relationship'] = 'field_pre_live_video_target_id';
  $handler->display->display_options['fields']['field_image_3']['label'] = '';
  $handler->display->display_options['fields']['field_image_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_3']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_3']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Live Video */
  $handler->display->display_options['fields']['field_live_video']['id'] = 'field_live_video';
  $handler->display->display_options['fields']['field_live_video']['table'] = 'field_data_field_live_video';
  $handler->display->display_options['fields']['field_live_video']['field'] = 'field_live_video';
  $handler->display->display_options['fields']['field_live_video']['relationship'] = 'field_live_video_target_id';
  $handler->display->display_options['fields']['field_live_video']['label'] = '';
  $handler->display->display_options['fields']['field_live_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_live_video']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Post-live Video */
  $handler->display->display_options['fields']['field_post_live_video']['id'] = 'field_post_live_video';
  $handler->display->display_options['fields']['field_post_live_video']['table'] = 'field_data_field_post_live_video';
  $handler->display->display_options['fields']['field_post_live_video']['field'] = 'field_post_live_video';
  $handler->display->display_options['fields']['field_post_live_video']['relationship'] = 'field_post_live_video_target_id';
  $handler->display->display_options['fields']['field_post_live_video']['label'] = '';
  $handler->display->display_options['fields']['field_post_live_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_post_live_video']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Pre-live Video */
  $handler->display->display_options['fields']['field_pre_live_video']['id'] = 'field_pre_live_video';
  $handler->display->display_options['fields']['field_pre_live_video']['table'] = 'field_data_field_pre_live_video';
  $handler->display->display_options['fields']['field_pre_live_video']['field'] = 'field_pre_live_video';
  $handler->display->display_options['fields']['field_pre_live_video']['relationship'] = 'field_pre_live_video_target_id';
  $handler->display->display_options['fields']['field_pre_live_video']['label'] = '';
  $handler->display->display_options['fields']['field_pre_live_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pre_live_video']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Sport Video */
  $handler->display->display_options['fields']['field_sportvideo_1']['id'] = 'field_sportvideo_1';
  $handler->display->display_options['fields']['field_sportvideo_1']['table'] = 'field_data_field_sportvideo';
  $handler->display->display_options['fields']['field_sportvideo_1']['field'] = 'field_sportvideo';
  $handler->display->display_options['fields']['field_sportvideo_1']['relationship'] = 'field_pre_live_video_target_id';
  $handler->display->display_options['fields']['field_sportvideo_1']['label'] = '';
  $handler->display->display_options['fields']['field_sportvideo_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sportvideo_1']['click_sort_column'] = 'fid';
  /* Field: Content: Sport Video */
  $handler->display->display_options['fields']['field_sportvideo_2']['id'] = 'field_sportvideo_2';
  $handler->display->display_options['fields']['field_sportvideo_2']['table'] = 'field_data_field_sportvideo';
  $handler->display->display_options['fields']['field_sportvideo_2']['field'] = 'field_sportvideo';
  $handler->display->display_options['fields']['field_sportvideo_2']['relationship'] = 'field_live_video_target_id';
  $handler->display->display_options['fields']['field_sportvideo_2']['label'] = '';
  $handler->display->display_options['fields']['field_sportvideo_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sportvideo_2']['click_sort_column'] = 'fid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'league' => 'league',
    'sport' => 'sport',
    'teams' => 'teams',
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['taxonomy_view'] = $view;

  return $export;
}
