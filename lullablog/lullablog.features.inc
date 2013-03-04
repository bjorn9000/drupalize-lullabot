<?php
/**
 * @file
 * lullablog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lullablog_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function lullablog_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function lullablog_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => t('Blog is a made up word that is both a verb and a noun.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
