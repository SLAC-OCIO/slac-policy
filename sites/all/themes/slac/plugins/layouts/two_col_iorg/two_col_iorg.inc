<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Basic 2 col with two inner col for IntOrg'),
  'category' => t('Slac layouts'),
  'icon' => 'two_col_iorg.png',
  'theme' => 'two_col_iorg',
  'theme arguments' => array('id', 'content'),
  'css' => 'two_col_iorg.css',
  'regions' => array(
    'left' => t('Left Column'),
    'left_inner' => t('Left Column Inner'),
    'right_inner' => t('Right Column Inner'),
    'right' => t('Right Column')
  ),
);

