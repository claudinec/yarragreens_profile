<?php
/**
 * @file
 * yarragreens_elections2012.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function yarragreens_elections2012_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|candidate|candidates';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'candidate';
  $ds_fieldsetting->view_mode = 'candidates';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|candidate|candidates'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|candidate|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'candidate';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|candidate|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|candidate|front_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'candidate';
  $ds_fieldsetting->view_mode = 'front_page';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|candidate|front_page'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function yarragreens_elections2012_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|candidate|candidates';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'candidate';
  $ds_layout->view_mode = 'candidates';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_candidate_photo',
      ),
      'right' => array(
        0 => 'title',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_candidate_photo' => 'left',
      'title' => 'right',
      'body' => 'right',
    ),
    'classes' => array(
      'left' => array(
        'candidate' => 'candidate',
      ),
      'right' => array(
        'candidate' => 'candidate',
      ),
    ),
  );
  $export['node|candidate|candidates'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|candidate|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'candidate';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_ward',
        1 => 'field_candidate_photo',
      ),
      'right' => array(
        0 => 'title',
        1 => 'body',
        2 => 'field_agv_link',
      ),
    ),
    'fields' => array(
      'field_ward' => 'left',
      'field_candidate_photo' => 'left',
      'title' => 'right',
      'body' => 'right',
      'field_agv_link' => 'right',
    ),
    'classes' => array(),
  );
  $export['node|candidate|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|candidate|front_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'candidate';
  $ds_layout->view_mode = 'front_page';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'right' => array(
        0 => 'title',
        1 => 'body',
      ),
      'left' => array(
        0 => 'field_ward',
      ),
    ),
    'fields' => array(
      'title' => 'right',
      'body' => 'right',
      'field_ward' => 'left',
    ),
    'classes' => array(),
  );
  $export['node|candidate|front_page'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|ward|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'ward';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'classes' => array(),
  );
  $export['taxonomy_term|ward|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|ward|front_page';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'ward';
  $ds_layout->view_mode = 'front_page';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'description',
      ),
      'left' => array(
        0 => 'field_ward_map',
      ),
    ),
    'fields' => array(
      'description' => 'header',
      'field_ward_map' => 'left',
    ),
    'classes' => array(),
  );
  $export['taxonomy_term|ward|front_page'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|ward|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'ward';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'description',
      ),
      'left' => array(
        0 => 'field_ward_map',
      ),
    ),
    'fields' => array(
      'description' => 'header',
      'field_ward_map' => 'left',
    ),
    'classes' => array(),
  );
  $export['taxonomy_term|ward|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|ward|ward_map';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'ward';
  $ds_layout->view_mode = 'ward_map';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_ward_map',
      ),
      'right' => array(
        0 => 'description',
      ),
    ),
    'fields' => array(
      'field_ward_map' => 'left',
      'description' => 'right',
    ),
    'classes' => array(),
  );
  $export['taxonomy_term|ward|ward_map'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function yarragreens_elections2012_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'candidates';
  $ds_view_mode->label = 'Candidates';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['candidates'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'ward_map';
  $ds_view_mode->label = 'Ward map';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $export['ward_map'] = $ds_view_mode;

  return $export;
}
