<?php
/**
 * @file
 * openintegrity.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function openintegrity_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'static_badge';
  $formatter->label = 'Static Badge';
  $formatter->description = '';
  $formatter->mode = 'php';
  $formatter->field_types = 'field_collection';
  $formatter->code = '$fc0 = field_collection_item_load($variables[\'#items\'][0][\'value\']);
$fc1 = field_collection_item_load($variables[\'#items\'][1][\'value\']);
$fc2 = field_collection_item_load($variables[\'#items\'][2][\'value\']);
$t0c = taxonomy_term_load($fc0->field_criteria[\'und\'][0][\'tid\']);
$t0s = taxonomy_term_load($fc0->field_index_score[\'und\'][0][\'tid\']);
$t1c = taxonomy_term_load($fc1->field_criteria[\'und\'][0][\'tid\']);
$t1s = taxonomy_term_load($fc1->field_index_score[\'und\'][0][\'tid\']);
$t2c = taxonomy_term_load($fc2->field_criteria[\'und\'][0][\'tid\']);
$t2s = taxonomy_term_load($fc2->field_index_score[\'und\'][0][\'tid\']);
$badge = array(
      \'path\' => $t0s->name . $t1s->name . $t2s->name . \'.png\', 
      \'alt\' => $t0c->name . \' : \' . $t0s->name . \' / \' . $t1c->name . \' : \' . $t1s->name . \' / \' . $t2c->name . \' : \' . $t2s->name,
      \'title\' => $t0c->name . \' : \' . $t0s->name . \' / \' . $t1c->name . \' : \' . $t1s->name . \' / \' . $t2c->name . \' : \' . $t2s->name,
      \'width\' => \'34\',
      \'height\' => \'34\',
      \'attributes\' => array(\'class\' => \'some-img\', \'id\' => \'my-img\'),
      );
echo theme_image($badge);';
  $formatter->fapi = '';
  $export['static_badge'] = $formatter;

  return $export;
}
