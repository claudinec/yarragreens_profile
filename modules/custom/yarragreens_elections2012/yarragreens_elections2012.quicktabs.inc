<?php
/**
 * @file
 * yarragreens_elections2012.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function yarragreens_elections2012_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'council_elections_2012';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Yarra Council Elections, 27 October 2012';
  $quicktabs->tabs = array(
    0 => array(
      'path' => 'council_elections_2012',
      'title' => 'Wards and Candidates',
      'weight' => '-100',
      'type' => 'callback',
    ),
    1 => array(
      'machine_name' => 'policies',
      'title' => 'Policies',
      'weight' => '-99',
      'type' => 'qtabs',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Policies');
  t('Wards and Candidates');
  t('Yarra Council Elections, 27 October 2012');

  $export['council_elections_2012'] = $quicktabs;

  return $export;
}
