<?php
/**
 * @file
 * supersport_image_styles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function supersport_image_styles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function supersport_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: event_node_page_image.
  $styles['event_node_page_image'] = array(
    'label' => 'Event Node Page Image',
    'effects' => array(
      3 => array(
        'name' => 'iek_image_resize',
        'data' => array(
          'width' => 1280,
          'height' => 720,
          'blank_margin' => 1,
          'blank_margin_bg_color' => '#000000',
          'position' => 'middle_center',
          'x' => 0,
          'y' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
