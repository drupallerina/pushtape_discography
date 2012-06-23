<?php
/**
 * @file
 * pushtape_discography.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pushtape_discography_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__album';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__album'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__track';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__track'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_album';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_album'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_track';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_track'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_album';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_album'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_track';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_track'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_album';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_album'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_track';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_track'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_album';
  $strongarm->value = '1';
  $export['node_preview_album'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_track';
  $strongarm->value = '1';
  $export['node_preview_track'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_album';
  $strongarm->value = 0;
  $export['node_submitted_album'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_track';
  $strongarm->value = 0;
  $export['node_submitted_track'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_album';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'mediaplaylist' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_album'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_track';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'mediaplaylist' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_track'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_artist';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_taxonomy_term_artist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:album_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:20:"panelizer_node:album";s:23:"allowed_layout_settings";a:35:{s:8:"flexible";b:0;s:6:"onecol";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:6:"twocol";b:0;s:14:"twocol_stacked";b:0;s:17:"threecol_33_34_33";b:0;s:13:"twocol_bricks";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:6:"whelan";b:1;s:5:"sutro";b:1;s:5:"selby";b:1;s:7:"moscone";b:1;s:15:"brenham_flipped";b:1;s:6:"boxton";b:1;s:22:"bryant_flipped_flipped";b:1;s:6:"bryant";b:1;s:4:"pond";b:1;s:7:"brenham";b:1;s:8:"mccoppin";b:1;s:5:"brown";b:1;s:4:"burr";b:1;s:15:"hewston_flipped";b:1;s:7:"hewston";b:1;s:9:"sanderson";b:1;s:12:"webb_flipped";b:1;s:17:"sanderson_flipped";b:1;s:8:"bartlett";b:1;s:6:"harris";b:1;s:12:"burr_flipped";b:1;s:6:"phelan";b:1;s:15:"moscone_flipped";b:1;s:13:"selby_flipped";b:1;s:16:"bartlett_flipped";b:1;s:5:"geary";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:album_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:album_default';
  $strongarm->value = array(
    'block' => 'block',
    'custom' => 'custom',
    'entity_field_extra' => 'entity_field_extra',
    'entity_field' => 'entity_field',
    'entity_form_field' => 'entity_form_field',
    'token' => 'token',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'menu_tree' => 'menu_tree',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_node:album_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:track_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:20:"panelizer_node:track";s:23:"allowed_layout_settings";a:35:{s:8:"flexible";b:0;s:6:"onecol";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:6:"twocol";b:0;s:14:"twocol_stacked";b:0;s:17:"threecol_33_34_33";b:0;s:13:"twocol_bricks";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:6:"whelan";b:1;s:5:"sutro";b:1;s:5:"selby";b:1;s:7:"moscone";b:1;s:15:"brenham_flipped";b:1;s:6:"boxton";b:1;s:22:"bryant_flipped_flipped";b:1;s:6:"bryant";b:1;s:4:"pond";b:1;s:7:"brenham";b:1;s:8:"mccoppin";b:1;s:5:"brown";b:1;s:4:"burr";b:1;s:15:"hewston_flipped";b:1;s:7:"hewston";b:1;s:9:"sanderson";b:1;s:12:"webb_flipped";b:1;s:17:"sanderson_flipped";b:1;s:8:"bartlett";b:1;s:6:"harris";b:1;s:12:"burr_flipped";b:1;s:6:"phelan";b:1;s:15:"moscone_flipped";b:1;s:13:"selby_flipped";b:1;s:16:"bartlett_flipped";b:1;s:5:"geary";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:track_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:track_default';
  $strongarm->value = array(
    'block' => 'block',
    'custom' => 'custom',
    'entity_field_extra' => 'entity_field_extra',
    'entity_field' => 'entity_field',
    'entity_form_field' => 'entity_form_field',
    'token' => 'token',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'menu_tree' => 'menu_tree',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_node:track_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_taxonomy_term:artist_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:30:"panelizer_taxonomy_term:artist";s:23:"allowed_layout_settings";a:35:{s:8:"flexible";b:0;s:6:"onecol";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:6:"twocol";b:0;s:14:"twocol_stacked";b:0;s:17:"threecol_33_34_33";b:0;s:13:"twocol_bricks";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:6:"whelan";b:1;s:5:"sutro";b:1;s:5:"selby";b:1;s:7:"moscone";b:1;s:15:"brenham_flipped";b:1;s:6:"boxton";b:1;s:22:"bryant_flipped_flipped";b:1;s:6:"bryant";b:1;s:4:"pond";b:1;s:7:"brenham";b:1;s:8:"mccoppin";b:1;s:5:"brown";b:1;s:4:"burr";b:1;s:15:"hewston_flipped";b:1;s:7:"hewston";b:1;s:9:"sanderson";b:1;s:12:"webb_flipped";b:1;s:17:"sanderson_flipped";b:1;s:8:"bartlett";b:1;s:6:"harris";b:1;s:12:"burr_flipped";b:1;s:6:"phelan";b:1;s:15:"moscone_flipped";b:1;s:13:"selby_flipped";b:1;s:16:"bartlett_flipped";b:1;s:5:"geary";b:1;}s:10:"form_state";N;}';
  $export['panelizer_taxonomy_term:artist_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_taxonomy_term:artist_default';
  $strongarm->value = array(
    'block' => 'block',
    'custom' => 'custom',
    'entity_field_extra' => 'entity_field_extra',
    'entity_field' => 'entity_field',
    'entity_form_field' => 'entity_form_field',
    'token' => 'token',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'menu_tree' => 'menu_tree',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_taxonomy_term:artist_default'] = $strongarm;

  return $export;
}
