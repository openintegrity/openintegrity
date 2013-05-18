<?php
/**
 * @file
 * openintegrity.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function openintegrity_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Risk Management',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '059541f8-00ce-41b0-b7ea-0e6d20bb14d2',
    'vocabulary_machine_name' => 'criteria',
    'parent' => array(
      0 => '97085641-b2f6-436d-969a-0fd15f86d85a',
      1 => '97085641-b2f6-436d-969a-0fd15f86d85a',
    ),
  );
  $terms[] = array(
    'name' => 'Sustainable Operation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
    'vocabulary_machine_name' => 'criteria',
    'parent' => array(
      0 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
      1 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    ),
  );
  $terms[] = array(
    'name' => 'Data Minimization',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '2972ce3f-3150-47ea-93f8-0a637d996bd8',
    'vocabulary_machine_name' => 'criteria',
    'parent' => array(
      0 => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
      1 => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
    ),
  );
  $terms[] = array(
    'name' => 'Secure Defaults',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '35802634-3643-45bd-b1a3-c6b0ac037fff',
    'vocabulary_machine_name' => 'criteria',
    'parent' => array(
      0 => '97085641-b2f6-436d-969a-0fd15f86d85a',
      1 => '97085641-b2f6-436d-969a-0fd15f86d85a',
    ),
  );
  $terms[] = array(
    'name' => 'Transparent Development',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
    'vocabulary_machine_name' => 'criteria',
    'parent' => array(
      0 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
      1 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    ),
  );
  $terms[] = array(
    'name' => 'Externally Reviewed',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '709c334a-5352-4437-886d-62fab676ca1d',
    'vocabulary_machine_name' => 'criteria',
    'parent' => array(
      0 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
      1 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    ),
  );
  $terms[] = array(
    'name' => 'Usability',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '7679c053-253e-431d-b8b2-52c1a571f4f0',
    'vocabulary_machine_name' => 'criteria',
    'parent' => array(
      0 => '97085641-b2f6-436d-969a-0fd15f86d85a',
      1 => '97085641-b2f6-436d-969a-0fd15f86d85a',
    ),
  );
  $terms[] = array(
    'name' => 'Net Neutral',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '81afbcc8-f229-4b46-88a6-8c1bcd74cf3a',
    'vocabulary_machine_name' => 'criteria',
    'parent' => array(
      0 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
      1 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    ),
  );
  $terms[] = array(
    'name' => 'Identity Control',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '896490e6-12f2-4755-9cc2-84cfdf1d23fa',
    'vocabulary_machine_name' => 'criteria',
    'parent' => array(
      0 => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
      1 => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
    ),
  );
  $terms[] = array(
    'name' => 'User Support',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '8a8844b9-15ff-4466-98aa-43d480efb05c',
    'vocabulary_machine_name' => 'criteria',
    'parent' => array(
      0 => '97085641-b2f6-436d-969a-0fd15f86d85a',
      1 => '97085641-b2f6-436d-969a-0fd15f86d85a',
    ),
  );
  $terms[] = array(
    'name' => 'Security',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '97085641-b2f6-436d-969a-0fd15f86d85a',
    'vocabulary_machine_name' => 'criteria',
  );
  $terms[] = array(
    'name' => 'Documented Policies',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
    'vocabulary_machine_name' => 'criteria',
    'parent' => array(
      0 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
      1 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    ),
  );
  $terms[] = array(
    'name' => 'Confidentiality',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'b599c21e-7428-4442-9f22-fd988aabe11b',
    'vocabulary_machine_name' => 'criteria',
    'parent' => array(
      0 => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
      1 => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
    ),
  );
  $terms[] = array(
    'name' => 'Publicly Verifiable',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
    'vocabulary_machine_name' => 'criteria',
    'parent' => array(
      0 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
      1 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    ),
  );
  $terms[] = array(
    'name' => 'Privacy',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
    'vocabulary_machine_name' => 'criteria',
  );
  $terms[] = array(
    'name' => 'Secure distribution',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'df9fb481-1f2f-40e9-a600-04794ec5e5ce',
    'vocabulary_machine_name' => 'criteria',
    'parent' => array(
      0 => '97085641-b2f6-436d-969a-0fd15f86d85a',
      1 => '97085641-b2f6-436d-969a-0fd15f86d85a',
    ),
  );
  $terms[] = array(
    'name' => 'Policy',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    'vocabulary_machine_name' => 'criteria',
  );
  return $terms;
}
