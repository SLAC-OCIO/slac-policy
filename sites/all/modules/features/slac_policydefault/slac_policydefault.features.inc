<?php
/**
 * @file
 * slac_policydefault.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_policydefault_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
