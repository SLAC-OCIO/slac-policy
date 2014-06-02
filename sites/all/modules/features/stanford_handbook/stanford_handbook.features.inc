<?php
/**
 * @file
 * stanford_handbook.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_handbook_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function stanford_handbook_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function stanford_handbook_node_info() {
  $items = array(
    'chapter' => array(
      'name' => t('Chapter'),
      'base' => 'node_content',
      'description' => t('A Chapter is a collection of subchapters and handbook pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'handbook' => array(
      'name' => t('Handbook'),
      'base' => 'node_content',
      'description' => t('A Handbook is a parent collection of information, and may include chapters, subchapters, and/or pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'handbook_page' => array(
      'name' => t('Handbook Page'),
      'base' => 'node_content',
      'description' => t('A Handbook Page is an individual unit within a Handbook. It can have a parent subchapter and a parent chapter.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'subchapter' => array(
      'name' => t('Subchapter'),
      'base' => 'node_content',
      'description' => t('A Subchapter is a grouping of Handbook Pages within a Chapter.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
