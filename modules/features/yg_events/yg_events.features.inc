<?php
/**
 * @file
 * yg_events.features.inc
 */

/**
 * Implements hook_node_info().
 */
function yg_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Events to display on calendar/list.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
