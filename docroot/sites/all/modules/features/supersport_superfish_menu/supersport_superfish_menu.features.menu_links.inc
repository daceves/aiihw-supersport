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

  // Exported menu link: menu-supersport-taxonomy-menu_arsenal-fc:taxonomy/term/16
  $menu_links['menu-supersport-taxonomy-menu_arsenal-fc:taxonomy/term/16'] = array(
    'menu_name' => 'menu-supersport-taxonomy-menu',
    'link_path' => 'taxonomy/term/16',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Arsenal F.C.',
    'options' => array(
      'attributes' => array(
        'title' => 'Arsenal F.C.',
      ),
      'identifier' => 'menu-supersport-taxonomy-menu_arsenal-fc:taxonomy/term/16',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-supersport-taxonomy-menu_premier-league:taxonomy/term/15',
  );
  // Exported menu link: menu-supersport-taxonomy-menu_manchester-united-fc:taxonomy/term/17
  $menu_links['menu-supersport-taxonomy-menu_manchester-united-fc:taxonomy/term/17'] = array(
    'menu_name' => 'menu-supersport-taxonomy-menu',
    'link_path' => 'taxonomy/term/17',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Manchester United F.C.',
    'options' => array(
      'attributes' => array(
        'title' => 'Manchester United F.C.',
      ),
      'identifier' => 'menu-supersport-taxonomy-menu_manchester-united-fc:taxonomy/term/17',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-supersport-taxonomy-menu_premier-league:taxonomy/term/15',
  );
  // Exported menu link: menu-supersport-taxonomy-menu_premier-league:taxonomy/term/15
  $menu_links['menu-supersport-taxonomy-menu_premier-league:taxonomy/term/15'] = array(
    'menu_name' => 'menu-supersport-taxonomy-menu',
    'link_path' => 'taxonomy/term/15',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Premier League',
    'options' => array(
      'attributes' => array(
        'title' => 'Premier League',
      ),
      'identifier' => 'menu-supersport-taxonomy-menu_premier-league:taxonomy/term/15',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-supersport-taxonomy-menu_soccer:taxonomy/term/14',
  );
  // Exported menu link: menu-supersport-taxonomy-menu_soccer:taxonomy/term/14
  $menu_links['menu-supersport-taxonomy-menu_soccer:taxonomy/term/14'] = array(
    'menu_name' => 'menu-supersport-taxonomy-menu',
    'link_path' => 'taxonomy/term/14',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Soccer',
    'options' => array(
      'attributes' => array(
        'title' => 'Soccer',
      ),
      'identifier' => 'menu-supersport-taxonomy-menu_soccer:taxonomy/term/14',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-supersport-taxonomy-menu_sport:<nolink>',
  );
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
  t('Arsenal F.C.');
  t('Manchester United F.C.');
  t('Premier League');
  t('Soccer');
  t('Sport');

  return $menu_links;
}
