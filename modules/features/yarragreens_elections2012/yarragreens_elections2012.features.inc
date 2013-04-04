<?php
/**
 * @file
 * yarragreens_elections2012.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function yarragreens_elections2012_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function yarragreens_elections2012_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function yarragreens_elections2012_node_info() {
  $items = array(
    'candidate' => array(
      'name' => t('Candidate'),
      'base' => 'node_content',
      'description' => t('Profile of an election candidate.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
