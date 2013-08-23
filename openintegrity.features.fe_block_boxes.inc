<?php
/**
 * @file
 * openintegrity.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function openintegrity_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'entry-1';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'entry_1';
  $fe_block_boxes->body = 'USING THE TOOL AND HAVE MORE EVIDENCE? JOIN IN AND SUBMIT A REPORT';

  $export['entry_1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'entry-2';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'entry_2';
  $fe_block_boxes->body = 'ARE YOU THE TOOL DEVELOPER? ADHERE TO OPEN INTEGRITY INDEX AND SUBMIT A DEVELOPER REPORT';

  $export['entry_2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'entry-3';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'entry_3';
  $fe_block_boxes->body = 'ARE YOU A DIGITAL SECURITY AND PRIVACY EXPERT? JOIN THE PEER REVIEWING COMMUNITY';

  $export['entry_3'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'home-1';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'home_1';
  $fe_block_boxes->body = 'HOW DOES THE INDEX WORK AND HOW CAN YOU CONTRIBUTE?';

  $export['home_1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'home-2';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'home_2';
  $fe_block_boxes->body = 'TOOLMAKERS: JOIN TO SUPPORT THE SECURITY & PRIVACY OF YOUR USERS';

  $export['home_2'] = $fe_block_boxes;

  return $export;
}
