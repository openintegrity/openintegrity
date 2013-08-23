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
