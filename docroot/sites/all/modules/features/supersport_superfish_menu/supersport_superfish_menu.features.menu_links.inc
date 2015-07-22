<?php
/**
 * @file
 * supersport_superfish_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function supersport_superfish_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-supersport-taxonomy-menu_sport:<nolink>
  $menu_links['menu-supersport-taxonomy-menu_sport:<nolink>'] = array(
    'menu_name' => 'menu-supersport-taxonomy-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Sport',
    'options' => array(
      'attributes' => array(
        'title' => 'Menu container to hold all sports',
      ),
      'identifier' => 'menu-supersport-taxonomy-menu_sport:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Sport');

  return $menu_links;
}
