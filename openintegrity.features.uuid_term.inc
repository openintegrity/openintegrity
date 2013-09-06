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
    'name' => 'Decision Making',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '04372f87-fbbe-4595-a2f2-c81e888a3e61',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'entry_category',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Risk Management',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '059541f8-00ce-41b0-b7ea-0e6d20bb14d2',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'parent' => array(
      0 => '97085641-b2f6-436d-969a-0fd15f86d85a',
      1 => '97085641-b2f6-436d-969a-0fd15f86d85a',
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 11,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1376497523,
          'changed' => 1376497523,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Correct SSL Implementation',
    'description' => 'The tool correctly implements SSL.',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => '076aa0ae-77e9-43ad-b79a-999d9dc0e6dc',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => 'df9fb481-1f2f-40e9-a600-04794ec5e5ce',
      1 => 'df9fb481-1f2f-40e9-a600-04794ec5e5ce',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Audit available',
    'description' => 'The audit document is publicly available on the internet.',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '097b3647-bd02-46c6-909b-195fb8c1213e',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '709c334a-5352-4437-886d-62fab676ca1d',
      1 => '709c334a-5352-4437-886d-62fab676ca1d',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Timely response to audit',
    'description' => 'Have significant vulnerabilities, having an impact on security or privacy, identified during the audit been addressed within 2 months of the audit (through a fix or a published workaround)?',
    'format' => 'full_html',
    'weight' => 5,
    'uuid' => '0b3b0d46-e84a-4c7c-9832-6a19e7c8019f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(
      'und' => array(
        0 => array(
          'interval' => 2,
          'period' => 'month',
        ),
      ),
    ),
    'field_threshold' => array(),
    'parent' => array(
      0 => '709c334a-5352-4437-886d-62fab676ca1d',
      1 => '709c334a-5352-4437-886d-62fab676ca1d',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Date',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '0cd143ec-77b4-499e-8cb9-5681c83f0f3d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'claim_variables',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'User Documentation',
    'description' => 'Link to user documentation or user forum request about basic operation.',
    'format' => 'full_html',
    'weight' => -3,
    'uuid' => '0f742e7a-9f6a-4d09-ad37-a9cf99ed722f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '8a8844b9-15ff-4466-98aa-43d480efb05c',
      1 => '8a8844b9-15ff-4466-98aa-43d480efb05c',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Sustainable Service Provision',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'parent' => array(
      0 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
      1 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 8,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1376497488,
          'changed' => 1376497488,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Notification of policy changes',
    'description' => 'Are users of the tool or platform clearly informed about changes in the policy?',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '1595167a-1d87-4436-b7af-ec2e305b32bd',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
      1 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Bug reporting system',
    'description' => 'Users can submit bugs about the tool.',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '16c6b747-e254-45ed-aa92-bcdc076055a9',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '059541f8-00ce-41b0-b7ea-0e6d20bb14d2',
      1 => '059541f8-00ce-41b0-b7ea-0e6d20bb14d2',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Minimal content filtering compliance',
    'description' => 'Is the system filtering content that is not required by law in the jurisdiction where its operating?',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '1cda9537-a92a-49e8-911d-2999c3509146',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '81afbcc8-f229-4b46-88a6-8c1bcd74cf3a',
      1 => '81afbcc8-f229-4b46-88a6-8c1bcd74cf3a',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Personal data protected',
    'description' => 'Does the tool protects personal data, i.e. does not share or disclose personal data?',
    'format' => 'full_html',
    'weight' => -3,
    'uuid' => '213df11e-4a40-46a8-826c-f68f8f0368ad',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '958b8189-17cf-4e28-9124-d85e03270a7b',
      1 => '958b8189-17cf-4e28-9124-d85e03270a7b',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Bug releases',
    'description' => 'Regular publication of bug and bug fixes with new releases such as a changelog.',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => '21909323-2dac-450e-bec5-5148a41ca056',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
      1 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Responsive to user help requests',
    'description' => 'User support requests where addressed within 2 weeks.',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '249cc0ca-0eb5-411f-ad3d-4c52cc439d6d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(
      'und' => array(
        0 => array(
          'interval' => 2,
          'period' => 'week',
        ),
      ),
    ),
    'field_threshold' => array(),
    'parent' => array(
      0 => '8a8844b9-15ff-4466-98aa-43d480efb05c',
      1 => '8a8844b9-15ff-4466-98aa-43d480efb05c',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Secure by Default',
    'description' => 'Does the tool have sensible secure defaults without needing additional hardening.',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '29155210-950c-4e7b-b31b-86b10d92b2bd',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '35802634-3643-45bd-b1a3-c6b0ac037fff',
      1 => '35802634-3643-45bd-b1a3-c6b0ac037fff',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Data Minimization',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2972ce3f-3150-47ea-93f8-0a637d996bd8',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'parent' => array(
      0 => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
      1 => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 16,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1376497661,
          'changed' => 1376497661,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Mobile Software',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'entry_type',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Experienced Auditor',
    'description' => 'The auditing organisation is reputed and experienced.',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '2e5c711a-0d46-4939-9ed4-1d11e0ce66c1',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '709c334a-5352-4437-886d-62fab676ca1d',
      1 => '709c334a-5352-4437-886d-62fab676ca1d',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Voice Chat',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '32fc70cf-55b3-4579-b498-4f8309cb089e',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'entry_category',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Non-neutrality Disclosure',
    'description' => 'Is the content filtering documented and available? Are user notified of filtering updates?',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => '34672ee8-8e6d-4f9f-aca4-ffa5f9055d9f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '81afbcc8-f229-4b46-88a6-8c1bcd74cf3a',
      1 => '81afbcc8-f229-4b46-88a6-8c1bcd74cf3a',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Security Posture',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '35802634-3643-45bd-b1a3-c6b0ac037fff',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'parent' => array(
      0 => '97085641-b2f6-436d-969a-0fd15f86d85a',
      1 => '97085641-b2f6-436d-969a-0fd15f86d85a',
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 12,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1376497619,
          'changed' => 1376497619,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Minimal logging by default',
    'description' => 'Does the tool logs minimal amounts of data by default?',
    'format' => 'full_html',
    'weight' => -3,
    'uuid' => '390274f8-d26a-48d6-9d17-509cde1f1b38',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '2972ce3f-3150-47ea-93f8-0a637d996bd8',
      1 => '2972ce3f-3150-47ea-93f8-0a637d996bd8',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Outdated',
    'description' => '',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => '3f2e1af7-62e8-47d1-bda1-be195d12225c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'claim_status',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Sufficient Performance',
    'description' => 'Indication of performance being satisfying for operating the tool under normal conditions.',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '408745cc-2ac5-468e-9c00-f3974c8f4b11',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '7679c053-253e-431d-b8b2-52c1a571f4f0',
      1 => '7679c053-253e-431d-b8b2-52c1a571f4f0',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Audited',
    'description' => 'An audit is known to have been accomplished within the past 2 years.',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '46bf5e11-1c0d-4836-9e52-5ad1162b9dd3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(
      'und' => array(
        0 => array(
          'interval' => 2,
          'period' => 'year',
        ),
      ),
    ),
    'field_threshold' => array(),
    'parent' => array(
      0 => '709c334a-5352-4437-886d-62fab676ca1d',
      1 => '709c334a-5352-4437-886d-62fab676ca1d',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Transparent Development',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'parent' => array(
      0 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
      1 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 5,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1376497442,
          'changed' => 1376497442,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Audit with NDA',
    'description' => 'The tool developers allow organisations to audit their tool under an non disclosure agreement.',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '481846ec-fd46-47a1-8734-8b1ab53530f3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
      1 => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Public user support',
    'description' => 'Availability of a forum or email to request support.',
    'format' => 'full_html',
    'weight' => -1,
    'uuid' => '48645eb3-a18c-4915-91fc-f38831587ee0',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '8a8844b9-15ff-4466-98aa-43d480efb05c',
      1 => '8a8844b9-15ff-4466-98aa-43d480efb05c',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Traffic analysis mitigation',
    'description' => 'Link to mitigation strategy to resist traffic analysis.',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4890b926-de5a-4a0d-9f37-7a571cc8b00c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '896490e6-12f2-4755-9cc2-84cfdf1d23fa',
      1 => '896490e6-12f2-4755-9cc2-84cfdf1d23fa',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Documented Threat Model',
    'description' => 'Is there documentation of the threat model the tool is designed for?',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => '49d862e1-6526-4124-82e7-cb33c001dc85',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '059541f8-00ce-41b0-b7ea-0e6d20bb14d2',
      1 => '059541f8-00ce-41b0-b7ea-0e6d20bb14d2',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Visible risk disclosure',
    'description' => 'The tool alerts its users about risks associated with the tool\'s use.',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4c63cd8f-912f-412a-afd4-6421302f9b68',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '059541f8-00ce-41b0-b7ea-0e6d20bb14d2',
      1 => '059541f8-00ce-41b0-b7ea-0e6d20bb14d2',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Forward secrecy',
    'description' => 'Does the tool provide forward secrecy.',
    'format' => 'full_html',
    'weight' => -1,
    'uuid' => '4df53a16-9ecb-400f-a98a-9ba5a0ce4c31',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => 'b599c21e-7428-4442-9f22-fd988aabe11b',
      1 => 'b599c21e-7428-4442-9f22-fd988aabe11b',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Timely response to vulnerabilities',
    'description' => 'Disclosed and significant vulnerabilities where fixed within 2 months.',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '532db988-e942-477a-b88f-c258f8ba8b4b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(
      'und' => array(
        0 => array(
          'interval' => 2,
          'period' => 'month',
        ),
      ),
    ),
    'field_threshold' => array(),
    'parent' => array(
      0 => '059541f8-00ce-41b0-b7ea-0e6d20bb14d2',
      1 => '059541f8-00ce-41b0-b7ea-0e6d20bb14d2',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Public availability of aggregated anonymized logging',
    'description' => 'Does the tool or platform publish aggregated anonymised data?',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '53822bd2-5b6a-47b4-a110-34bb0234fdb4',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '2972ce3f-3150-47ea-93f8-0a637d996bd8',
      1 => '2972ce3f-3150-47ea-93f8-0a637d996bd8',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Data retention disclosure',
    'description' => 'Is the platform disclosing its data retention policy to its users. Does the organisation documents the data, meta-data that is being kept for technical or regulatory reasons. ',
    'format' => 'full_html',
    'weight' => -1,
    'uuid' => '54a5f320-ac92-4fc6-8f03-38b9fae713d5',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '2972ce3f-3150-47ea-93f8-0a637d996bd8',
      1 => '2972ce3f-3150-47ea-93f8-0a637d996bd8',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Confidential by Default',
    'description' => 'Does the tool offer confidentiality by default?',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '57633df2-a3a8-4412-8a2c-1aa1a7e1f442',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => 'b599c21e-7428-4442-9f22-fd988aabe11b',
      1 => 'b599c21e-7428-4442-9f22-fd988aabe11b',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Transparency report',
    'description' => 'Is the organisation releasing a transparency report on government surveillance and interventions (indicating for example requests by LEA, third parties to take down, or disclose data or meta-data).',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '578b0119-08b5-4733-b11a-1541062efe8d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
      1 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Negating',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '580a9945-e101-4d4f-a812-987b9c4d473c',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'evidence_status',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 62,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1376492184,
          'changed' => 1376492184,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Practical to replicate',
    'description' => 'Documentation for building binaries.',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '58db7236-8e24-4752-9a1e-71a0ea21caef',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
      1 => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Fail Closed',
    'description' => 'Does the system fail closed?',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5b8b2eac-b508-4e89-8729-9545c530541d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '74443e40-4865-460b-9511-6a528ada87f9',
      1 => '74443e40-4865-460b-9511-6a528ada87f9',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Deterministic build process',
    'description' => 'The system can be compiled or built and consistently create the same binary files.',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '5d9862ee-5180-4b7f-af95-2dc2875746ba',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
      1 => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Open audit agreement',
    'description' => 'The system developers allow any organisation to perform and publish an audit of their code.',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '5e7d02b3-dc47-466c-99ac-27aa7ef0bb5f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
      1 => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Decentralised Architecture',
    'description' => 'Does the platform or tool use a decentralised architecture?',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '5ec5b1f2-38e5-4c39-a0e0-2b369b1dd055',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '35802634-3643-45bd-b1a3-c6b0ac037fff',
      1 => '35802634-3643-45bd-b1a3-c6b0ac037fff',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Notification of security failures',
    'description' => 'Users are alerted when security features are not in operation or failing.',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '607b9b7e-5303-469f-a5e3-84fbc8362e4c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '74443e40-4865-460b-9511-6a528ada87f9',
      1 => '74443e40-4865-460b-9511-6a528ada87f9',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Video Chat',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '63535954-6ae8-4f1e-b5f0-10eb91f0826d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'entry_category',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Disputed',
    'description' => NULL,
    'format' => NULL,
    'weight' => 2,
    'uuid' => '653b0dfb-3534-43d1-8071-2286d88f9e94',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'claim_status',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Browser',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '68850643-4e4d-414c-ad70-86c61a3377d5',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'entry_category',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Availability of localisation',
    'description' => 'Link to localized user documentation and localised user interface for supported languages.',
    'format' => 'full_html',
    'weight' => -2,
    'uuid' => '6d3da2fc-525c-4ffc-a7de-37a3c252de2f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '8a8844b9-15ff-4466-98aa-43d480efb05c',
      1 => '8a8844b9-15ff-4466-98aa-43d480efb05c',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Externally Reviewed',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '709c334a-5352-4437-886d-62fab676ca1d',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'parent' => array(
      0 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
      1 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 6,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1376497459,
          'changed' => 1376497459,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Failure Behavior',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '74443e40-4865-460b-9511-6a528ada87f9',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'parent' => array(
      0 => '97085641-b2f6-436d-969a-0fd15f86d85a',
      1 => '97085641-b2f6-436d-969a-0fd15f86d85a',
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 101,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1376497546,
          'changed' => 1376497546,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Legally replicable',
    'description' => 'Legally possible to replicate the platform.',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '75a0ed10-3447-4677-b56a-3bd78c696243',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
      1 => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Responded to audit',
    'description' => 'Have significant vulnerabilities, having an impact on security or privacy, identified during the audit been addressed through a fix or a published workaround?',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => '75b12edd-5060-437e-8896-2973c48691e6',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '709c334a-5352-4437-886d-62fab676ca1d',
      1 => '709c334a-5352-4437-886d-62fab676ca1d',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'User Experience',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '7679c053-253e-431d-b8b2-52c1a571f4f0',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'parent' => array(
      0 => '97085641-b2f6-436d-969a-0fd15f86d85a',
      1 => '97085641-b2f6-436d-969a-0fd15f86d85a',
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 14,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1376497585,
          'changed' => 1376497585,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Public code repository',
    'description' => 'The source code is publicly available on the internet.',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '76e5d2fc-0f5b-4920-a63a-bb187283c827',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
      1 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Disclosure of confidentiality failures',
    'description' => 'Does the tool alerts the user when confidentiality is not available?',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '7b297360-102d-40e0-81c3-686fb6cfa6db',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => 'b599c21e-7428-4442-9f22-fd988aabe11b',
      1 => 'b599c21e-7428-4442-9f22-fd988aabe11b',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Functional build tree',
    'description' => 'Availability of functional build tree.',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '7c836c53-dd58-4f8d-a8ec-750e34337f7a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
      1 => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Net Neutral',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '81afbcc8-f229-4b46-88a6-8c1bcd74cf3a',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'parent' => array(
      0 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
      1 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 9,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1376497478,
          'changed' => 1376497478,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Disputed',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '81e3e628-c0f1-4b55-9616-fbad7fcc68b3',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'subindex_status',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 143,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1376499922,
          'changed' => 1376499922,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Defence in Depth',
    'description' => 'Does the system provide multiple layers of defence against potential threats?',
    'format' => 'full_html',
    'weight' => -1,
    'uuid' => '82394754-ef91-416c-a8f7-8f6553ab3ebc',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '35802634-3643-45bd-b1a3-c6b0ac037fff',
      1 => '35802634-3643-45bd-b1a3-c6b0ac037fff',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'All',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '845ada2e-17e3-4481-b454-7b903c1f0c71',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'score',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Roadmap available',
    'description' => 'Availability of a roadmap indicating the priorities and schedule of the resolution of certain issues or the implementation of certain features.',
    'format' => 'full_html',
    'weight' => 5,
    'uuid' => '85263771-c208-443d-b9a4-b964a4f4abb3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
      1 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Significant policies documented',
    'description' => 'Are the terms of use of the tool or the platform clearly documented and available?',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '861cdbe0-cd2d-4076-9ed2-c399957826bd',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
      1 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Code available on request',
    'description' => 'The source code is available on request.',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '87dfedde-4457-452d-b428-8179564aac99',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
      1 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'SSL by default',
    'description' => 'The tool automatically uses encrypted channels for distribution of code and content.',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '892f2bcc-38b1-426f-814d-5b1f32d88389',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => 'df9fb481-1f2f-40e9-a600-04794ec5e5ce',
      1 => 'df9fb481-1f2f-40e9-a600-04794ec5e5ce',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Identity Control',
    'description' => '',
    'format' => 'plain_text',
    'weight' => -1,
    'uuid' => '896490e6-12f2-4755-9cc2-84cfdf1d23fa',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'parent' => array(
      0 => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
      1 => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 15,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1376497649,
          'changed' => 1376497649,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Documentation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '8a8844b9-15ff-4466-98aa-43d480efb05c',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'parent' => array(
      0 => '97085641-b2f6-436d-969a-0fd15f86d85a',
      1 => '97085641-b2f6-436d-969a-0fd15f86d85a',
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 13,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1376497565,
          'changed' => 1376497565,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'No throttling and capping',
    'description' => 'Does the system enforce data transfers throttling or throughput cap without user action?',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '8bc57311-5c93-462d-bb0a-71b7f85f9a60',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '81afbcc8-f229-4b46-88a6-8c1bcd74cf3a',
      1 => '81afbcc8-f229-4b46-88a6-8c1bcd74cf3a',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'No Monetization of user data',
    'description' => 'Does the organisation refrain from selling user data to third parties?',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '92d1018e-65f8-43b1-bcdb-323646140a08',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '958b8189-17cf-4e28-9124-d85e03270a7b',
      1 => '958b8189-17cf-4e28-9124-d85e03270a7b',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Data Protection',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '958b8189-17cf-4e28-9124-d85e03270a7b',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'parent' => array(
      0 => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
      1 => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 116,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1376497691,
          'changed' => 1376497691,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Aggregated data protected',
    'description' => 'Does the tool protects aggregated data, i.e. does not share or disclose data in aggregates?',
    'format' => 'full_html',
    'weight' => -2,
    'uuid' => '95e47033-6c23-4063-be5b-f3f4dd8be8db',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '958b8189-17cf-4e28-9124-d85e03270a7b',
      1 => '958b8189-17cf-4e28-9124-d85e03270a7b',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Security',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 27,
    'uuid' => '97085641-b2f6-436d-969a-0fd15f86d85a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Secure Distribution by Default',
    'description' => 'The tool and any updates are distributed via encrypted channels by default.',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '98f84f5d-110c-4d73-898c-c00724c81b44',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => 'df9fb481-1f2f-40e9-a600-04794ec5e5ce',
      1 => 'df9fb481-1f2f-40e9-a600-04794ec5e5ce',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Unsubstantiated',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '9d7bd3da-2151-460d-8d35-2444ed4be07a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'claim_status',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Enforced Policies',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'parent' => array(
      0 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
      1 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 7,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1376497469,
          'changed' => 1376497469,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Non-automated Audit',
    'description' => 'The audit was not performed by an automated process.',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '9fba77c5-5def-490a-864b-8e2e0820184f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '709c334a-5352-4437-886d-62fab676ca1d',
      1 => '709c334a-5352-4437-886d-62fab676ca1d',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Visible vulnerability disclosure',
    'description' => 'The tool alerts its users about disclosed vulnerabilities.',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => 'a2e8c142-d3b2-49fd-afab-4acf526a02bd',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '059541f8-00ce-41b0-b7ea-0e6d20bb14d2',
      1 => '059541f8-00ce-41b0-b7ea-0e6d20bb14d2',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Hosted Platform',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'entry_type',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Outdated',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a7f393e9-ba28-4f65-8b79-deafc94d85f4',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'subindex_status',
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 144,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1376499928,
          'changed' => 1376499928,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'HSTS or pinned SSL',
    'description' => 'The tool uses the HSTS protocol or uses SSL certificate pinning for distribution of code and content.',
    'format' => 'full_html',
    'weight' => 5,
    'uuid' => 'ac8fb73a-10b2-4374-9b12-2f8677006865',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => 'df9fb481-1f2f-40e9-a600-04794ec5e5ce',
      1 => 'df9fb481-1f2f-40e9-a600-04794ec5e5ce',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Server Software',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'entry_type',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Binary authentication',
    'description' => 'The tool\'s integrity can be verified (through checksums...)',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => 'b1513e2b-b637-4e1a-adba-cd3500298419',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => 'df9fb481-1f2f-40e9-a600-04794ec5e5ce',
      1 => 'df9fb481-1f2f-40e9-a600-04794ec5e5ce',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Policy breach reports',
    'description' => 'Are breaches of policy documented?',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => 'b32f27b9-ba87-4adc-bbaa-9132b2c25550',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
      1 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Usability',
    'description' => 'Target user base is able to successfully complete tasks.',
    'format' => 'full_html',
    'weight' => -2,
    'uuid' => 'b588b904-af8e-4b6b-8da7-d74944ec1f7f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '7679c053-253e-431d-b8b2-52c1a571f4f0',
      1 => '7679c053-253e-431d-b8b2-52c1a571f4f0',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Confidentiality',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'b599c21e-7428-4442-9f22-fd988aabe11b',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'parent' => array(
      0 => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
      1 => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 17,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1376497885,
          'changed' => 1376497885,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Activity of issue tracker',
    'description' => 'The most recent activity on the issue tracker occured in the past 6 months, as a reflection of the activity of issue posting and resolution.',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => 'b74e6c21-0fd6-4c17-b73f-527e5177a5b1',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(
      'und' => array(
        0 => array(
          'interval' => 6,
          'period' => 'month',
        ),
      ),
    ),
    'field_threshold' => array(),
    'parent' => array(
      0 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
      1 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Private by default',
    'description' => 'Does the tool provide privacy by default?',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b784998e-2dde-45ad-aa21-f8d32b4beb6d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '896490e6-12f2-4755-9cc2-84cfdf1d23fa',
      1 => '896490e6-12f2-4755-9cc2-84cfdf1d23fa',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Peer Reviewed',
    'description' => NULL,
    'format' => NULL,
    'weight' => 3,
    'uuid' => 'bbc24dc4-1b7c-4126-bc81-a98d54b89277',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'claim_status',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Publicly Verifiable',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(
      'und' => array(
        0 => array(
          'value' => 3,
        ),
      ),
    ),
    'parent' => array(
      0 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
      1 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 4,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1376497433,
          'changed' => 1376497433,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'None',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bfe2b4ca-b289-41bf-b611-0332d4a92048',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'score',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'End point obfuscation',
    'description' => 'Does the tool allow its user to not be identifiable through their network location?',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c4923ef3-5f25-48c1-ae12-dcd596cd4bb5',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '896490e6-12f2-4755-9cc2-84cfdf1d23fa',
      1 => '896490e6-12f2-4755-9cc2-84cfdf1d23fa',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'No content prioritisation',
    'description' => 'Does the platform accept or require payment for the prioritisation or placement of specific content, tiered pricing on the user side or paid SLAs? (This doesn\'t include payment for access to different performance tiers)',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => 'c733f852-1245-4ac9-a709-1a27113d4fbe',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '81afbcc8-f229-4b46-88a6-8c1bcd74cf3a',
      1 => '81afbcc8-f229-4b46-88a6-8c1bcd74cf3a',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Documented protection of user data',
    'description' => 'Does the organisation disclose how, when and for which purpose user data or meta-data will be shared with third parties (including monetization)',
    'format' => 'full_html',
    'weight' => -1,
    'uuid' => 'c8cbe167-8ff4-4192-a63a-ea6353095530',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '958b8189-17cf-4e28-9124-d85e03270a7b',
      1 => '958b8189-17cf-4e28-9124-d85e03270a7b',
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 128,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1376497872,
          'changed' => 1376497872,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Documented usability design',
    'description' => 'Documentation of the approach to interface or user experience design indicating an effort to provide good user experience.',
    'format' => 'full_html',
    'weight' => -1,
    'uuid' => 'c9314ad5-485f-4f38-a74e-a6079f4e60c5',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '7679c053-253e-431d-b8b2-52c1a571f4f0',
      1 => '7679c053-253e-431d-b8b2-52c1a571f4f0',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'End to end encryption',
    'description' => 'Does the tool encrypt communications end to end?',
    'format' => 'full_html',
    'weight' => -2,
    'uuid' => 'cc67e51b-1775-4752-89b2-87639bef5c5d',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => 'b599c21e-7428-4442-9f22-fd988aabe11b',
      1 => 'b599c21e-7428-4442-9f22-fd988aabe11b',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Privacy',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 28,
    'uuid' => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Code escrow agreement',
    'description' => 'Commitment to release the code if the organisation fails to allow continuation of service provision.',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => 'd9a491c5-2d89-4dd7-a814-8d7190443b51',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
      1 => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Email',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd9d1e506-5ec8-44e6-b4bd-a24f0f538b8c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'entry_category',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Supporting',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'deb874a4-ca74-49ba-b18f-48f66411c2c3',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'evidence_status',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Secure distribution',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'df9fb481-1f2f-40e9-a600-04794ec5e5ce',
    'language' => 'en',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'parent' => array(
      0 => '97085641-b2f6-436d-969a-0fd15f86d85a',
      1 => '97085641-b2f6-436d-969a-0fd15f86d85a',
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 10,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1376497508,
          'changed' => 1376497508,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Continuing Development',
    'description' => 'Last commit submitted within 6 months indicating an ongoing development of the tool.',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => 'dfae2d0f-1fa9-4b07-80ec-6b6d5b591a71',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(
      'und' => array(
        0 => array(
          'interval' => 6,
          'period' => 'month',
        ),
      ),
    ),
    'field_threshold' => array(),
    'parent' => array(
      0 => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
      1 => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Government compliance disclosure',
    'description' => 'Is the organisation disclosing that they are subject to formal or informal jurisdictional liability to comply with government requests?',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => 'e20011b1-88cd-4ec3-8b0b-edb97680afba',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
      1 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Disclosure of Insecure Distribution',
    'description' => 'The tool notifies user when the distribution or updates are not secure or binaries don\'t authenticate. ',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => 'e4664964-a11b-4521-ad20-125c205237db',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '74443e40-4865-460b-9511-6a528ada87f9',
      1 => '74443e40-4865-460b-9511-6a528ada87f9',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'No opt-in content filtering',
    'description' => 'Is the system offering additional content filtering options not required by law?',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => 'e578df63-6345-4aaa-9f90-fca9a981522b',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '81afbcc8-f229-4b46-88a6-8c1bcd74cf3a',
      1 => '81afbcc8-f229-4b46-88a6-8c1bcd74cf3a',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Minimal personal data requirements',
    'description' => 'Does the tool requires reasonable personal data?',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e5f26851-dc3d-4dd5-83d1-eba9ac023d58',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '896490e6-12f2-4755-9cc2-84cfdf1d23fa',
      1 => '896490e6-12f2-4755-9cc2-84cfdf1d23fa',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Public issue tracker',
    'description' => 'There is an issue tracker publicly available to follow the development of the tool.',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => 'e704a009-b7bd-4fc5-bb9a-29d602fa2679',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
      1 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Some',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'e7e50066-3bed-4364-bfd6-cb128e3ac55c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'score',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Defensive coding',
    'description' => 'Documentation of the approach to code defensively.',
    'format' => 'full_html',
    'weight' => -2,
    'uuid' => 'eb22b61e-444a-477c-a166-a7d04315928f',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '35802634-3643-45bd-b1a3-c6b0ac037fff',
      1 => '35802634-3643-45bd-b1a3-c6b0ac037fff',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Policy',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 26,
    'uuid' => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'entity_id' => 1,
          'language' => 'en',
          'source' => '',
          'uid' => 1,
          'status' => 1,
          'translate' => 0,
          'created' => 1377215249,
          'changed' => 1377215249,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Desktop Software',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'entry_type',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Circumvention Tool',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f00672b7-0b54-496c-854c-ec25bb77e393',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'entry_category',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Data retention compliance',
    'description' => 'Is the platform subject to comply with data retention law?',
    'format' => 'full_html',
    'weight' => -2,
    'uuid' => 'f2640580-bb12-4cf3-881b-3245ec158a17',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '2972ce3f-3150-47ea-93f8-0a637d996bd8',
      1 => '2972ce3f-3150-47ea-93f8-0a637d996bd8',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Open Source License',
    'description' => 'The system has an open source license as defined by OSI (http://opensource.org/licenses/) or FSF (https://www.gnu.org/philosophy/license-list.html).',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f5416e14-562d-466b-9d00-837ef5b3c3b7',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
      1 => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Aggregated anonymized logging',
    'description' => 'Does the tool or platform logs aggregated anonymised data.',
    'format' => 'full_html',
    'weight' => -3,
    'uuid' => 'f5c28b44-f281-433c-be49-2dff8ae9a330',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
        3 => array(
          'tid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => '2972ce3f-3150-47ea-93f8-0a637d996bd8',
      1 => '2972ce3f-3150-47ea-93f8-0a637d996bd8',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Content Management System',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f84ad15d-4501-4fb4-a519-508a92467648',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'entry_category',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Automatic updates',
    'description' => 'The tool automatically updates by default.',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => 'f9404c93-375d-47d6-bafd-98b459b5afc7',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'criteria',
    'field_entry_type' => array(
      'und' => array(
        0 => array(
          'tid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
        ),
        1 => array(
          'tid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
        ),
        2 => array(
          'tid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
        ),
      ),
    ),
    'field_expiration' => array(),
    'field_threshold' => array(),
    'parent' => array(
      0 => 'df9fb481-1f2f-40e9-a600-04794ec5e5ce',
      1 => 'df9fb481-1f2f-40e9-a600-04794ec5e5ce',
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Sourced',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => 'ff600325-2379-47c2-9de0-6371c46cf8fa',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'claim_status',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  return $terms;
}
