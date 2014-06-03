<?php
/**
 * @file
 * slac_policy_demo_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_policy_demo_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
