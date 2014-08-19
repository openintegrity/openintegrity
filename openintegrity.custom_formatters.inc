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
  $formatter->name = 'badge';
  $formatter->label = 'Badge';
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

$path_icon = \'https://openintegrity.org/badge/img/\' . $t0s->name . $t1s->name . $t2s->name . \'.png\';
$path_drawer = \'https://openintegrity.org/badge/img/Drawer\' . $t0s->name . $t1s->name . $t2s->name . \'.png\';
$title = $t0c->name . \' : \' . $t0s->name . \' / \' . $t1c->name . \' : \' . $t1s->name . \' / \' . $t2c->name . \' : \' . $t2s->name;
$alt = $t0c->name . \' : \' . $t0s->name . \' / \' . $t1c->name . \' : \' . $t1s->name . \' / \' . $t2c->name . \' : \' . $t2s->name;


$ret = \'\';
$ret .= \'<div class="oii-badge">\';
$ret .= \'   <div class="oii-icon">\';
$ret .= \'     <img width="34" height="34" src="\' . $path_icon . \'" alt="\' . $alt . \'" title="\' . $title . \'"/>\';
$ret .= \'   </div>\';
$ret .= \'   <div class="oii-drawer">\';
$ret .= \'     <img width="96" height="34" src="\' . $path_drawer . \'"/>\';
$ret .= \'   </div>\';
$ret .= \'</div>\';
$ret .= \'<div class="oii-teaser">\';
//$ret .= \'  <img width="506" height="406" src="img/SampleTeaser.png"/>\';
$ret .= \'</div>\';
      
echo $ret;';
  $formatter->fapi = '';
  $export['badge'] = $formatter;

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
      \'path\' => \'https://openintegrity.org/badge/img/\' . $t0s->name . $t1s->name . $t2s->name . \'.png\', 
      \'alt\' => $t0c->name . \' : \' . $t0s->name . \' / \' . $t1c->name . \' : \' . $t1s->name . \' / \' . $t2c->name . \' : \' . $t2s->name,
      \'title\' => $t0c->name . \' : \' . $t0s->name . \' / \' . $t1c->name . \' : \' . $t1s->name . \' / \' . $t2c->name . \' : \' . $t2s->name,
      \'width\' => \'34\',
      \'height\' => \'34\',
      \'attributes\' => array(\'class\' => \'some-img\', \'id\' => \'my-img\'),
      );
echo theme(\'image\',$badge);';
  $formatter->fapi = '';
  $export['static_badge'] = $formatter;

  return $export;
}
