<?php
/**
 * @file
 * supersport_quicktabs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function supersport_quicktabs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}
