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
  $fe_block_boxes->info = 'Contact Text';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'contact_text';
  $fe_block_boxes->body = 'Get in touch with us to let us know about your ideas, suggestions and the problems you\'ve encountered. 

Please make sure you take a look at:

  * [our FAQ](about#faq),
  * [our wiki](https://wiki.openintegrity.org),
  * [our roadmap](https://wiki.openintegrity.org/doku.php?id=roadmap) 
  * and [our issue queue](https://github.com/iilab/openintegrity/issues) as well to see if others have provided similar feedback.

We really appreciate your interest in the Open Integrity Index!
';

  $export['contact_text'] = $fe_block_boxes;

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
  $fe_block_boxes->info = 'Hero';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'hero';
  $fe_block_boxes->body = '<h2>HELPING YOU<br/>
CHOOSE SECURE AND<br/>
PRIVATE TOOLS<br/>
</h2>';

  $export['hero'] = $fe_block_boxes;

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

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'home-3';
  $fe_block_boxes->format = 'plain_text';
  $fe_block_boxes->machine_name = 'home_3';
  $fe_block_boxes->body = 'DIGITAL SECURITY EXPERTS: JOIN TO CONTRIBUTE TO A SAFER & MORE PRIVATE INTERNET';

  $export['home_3'] = $fe_block_boxes;

  return $export;
}
