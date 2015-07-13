<?php
/**
 * @file
 * supersport_superfish_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function supersport_superfish_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-supersport-taxonomy-menu.
  $menus['menu-supersport-taxonomy-menu'] = array(
    'menu_name' => 'menu-supersport-taxonomy-menu',
    'title' => 'Supersport Taxonomy Menu',
    'description' => 'Superfish taxonomy menu, hierarchical dropdown menu for Supersport taxonomy terms.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Superfish taxonomy menu, hierarchical dropdown menu for Supersport taxonomy terms.');
  t('Supersport Taxonomy Menu');


  return $menus;
}
