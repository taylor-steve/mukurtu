<?php
/**
 * @file
 * ma_profile.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ma_profile_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:admin/people/create
  $menu_links['main-menu:admin/people/create'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/people/create',
    'router_path' => 'admin/people/create',
    'link_title' => 'User',
    'options' => array(
      'attributes' => array(
        'title' => '',
        'class' => array(
          0 => 'mukurtu-actions',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('User');


  return $menu_links;
}
