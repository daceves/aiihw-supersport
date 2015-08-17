<?php
/**
 * @file
 * supersport_three_row_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function supersport_three_row_layout_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
}
