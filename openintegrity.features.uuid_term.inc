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
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '97085641-b2f6-436d-969a-0fd15f86d85a',
      1 => '97085641-b2f6-436d-969a-0fd15f86d85a',
    ),
  );
  $terms[] = array(
    'name' => 'Audit available',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '097b3647-bd02-46c6-909b-195fb8c1213e',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '709c334a-5352-4437-886d-62fab676ca1d',
      1 => '709c334a-5352-4437-886d-62fab676ca1d',
    ),
  );
  $terms[] = array(
    'name' => 'Response time',
    'description' => NULL,
    'format' => NULL,
    'weight' => 1,
    'uuid' => '0b3b0d46-e84a-4c7c-9832-6a19e7c8019f',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '709c334a-5352-4437-886d-62fab676ca1d',
      1 => '709c334a-5352-4437-886d-62fab676ca1d',
    ),
  );
  $terms[] = array(
    'name' => 'Sustainable Operation',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
      1 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    ),
  );
  $terms[] = array(
    'name' => 'Notification of policy changes',
    'description' => NULL,
    'format' => NULL,
    'weight' => -5,
    'uuid' => '1595167a-1d87-4436-b7af-ec2e305b32bd',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
      1 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
    ),
  );
  $terms[] = array(
    'name' => 'Yes/No/NA',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '1b9fb5f1-a1bd-4bb3-ab1f-ddaa69da29fa',
    'vocabulary_machine_name' => 'evidence_type',
  );
  $terms[] = array(
    'name' => 'Bug releases',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '21909323-2dac-450e-bec5-5148a41ca056',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
      1 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
    ),
  );
  $terms[] = array(
    'name' => 'Data Minimization',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '2972ce3f-3150-47ea-93f8-0a637d996bd8',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
      1 => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
    ),
  );
  $terms[] = array(
    'name' => 'Mobile Client Application',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2e354102-8eb9-435d-b76b-316db2d7b62d',
    'vocabulary_machine_name' => 'entry_type',
  );
  $terms[] = array(
    'name' => 'Experienced Auditor',
    'description' => NULL,
    'format' => NULL,
    'weight' => 1,
    'uuid' => '2e5c711a-0d46-4939-9ed4-1d11e0ce66c1',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '709c334a-5352-4437-886d-62fab676ca1d',
      1 => '709c334a-5352-4437-886d-62fab676ca1d',
    ),
  );
  $terms[] = array(
    'name' => 'Secure Defaults',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '35802634-3643-45bd-b1a3-c6b0ac037fff',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '97085641-b2f6-436d-969a-0fd15f86d85a',
      1 => '97085641-b2f6-436d-969a-0fd15f86d85a',
    ),
  );
  $terms[] = array(
    'name' => 'Experienced/Not Experienced/Automated',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '378af51b-9d61-492b-af10-f30a1e78a022',
    'vocabulary_machine_name' => 'evidence_type',
  );
  $terms[] = array(
    'name' => 'Ongoing verified, significant, under resolution policy breach report',
    'description' => NULL,
    'format' => NULL,
    'weight' => 1,
    'uuid' => '435fb0cd-66ba-427a-b5d9-bd7e3692baa8',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
      1 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
    ),
  );
  $terms[] = array(
    'name' => 'Audited',
    'description' => '',
    'format' => 'full_html',
    'weight' => -1,
    'uuid' => '46bf5e11-1c0d-4836-9e52-5ad1162b9dd3',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(
      'und' => array(
        0 => array(
          'tid' => '6b895e49-9f08-45c3-8bfb-1c51943d7cf5',
        ),
      ),
    ),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '709c334a-5352-4437-886d-62fab676ca1d',
      1 => '709c334a-5352-4437-886d-62fab676ca1d',
    ),
  );
  $terms[] = array(
    'name' => 'Transparent Development',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
      1 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    ),
  );
  $terms[] = array(
    'name' => 'Audit with NDA',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '481846ec-fd46-47a1-8734-8b1ab53530f3',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(
      'und' => array(
        0 => array(
          'tid' => '6b895e49-9f08-45c3-8bfb-1c51943d7cf5',
        ),
      ),
    ),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
      1 => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
    ),
  );
  $terms[] = array(
    'name' => 'All fixed/some fixed/no fixed',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '492fa878-83a1-4849-8363-eacf52aef150',
    'vocabulary_machine_name' => 'evidence_type',
  );
  $terms[] = array(
    'name' => 'Sharing of user data documented',
    'description' => NULL,
    'format' => NULL,
    'weight' => -2,
    'uuid' => '51c85ed1-1bb9-4df1-a2e0-6948228068f6',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
      1 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
    ),
  );
  $terms[] = array(
    'name' => 'Transparency report',
    'description' => NULL,
    'format' => NULL,
    'weight' => -4,
    'uuid' => '578b0119-08b5-4733-b11a-1541062efe8d',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
      1 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
    ),
  );
  $terms[] = array(
    'name' => 'Opposing',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '580a9945-e101-4d4f-a812-987b9c4d473c',
    'vocabulary_machine_name' => 'evidence_status',
  );
  $terms[] = array(
    'name' => 'Practical to replicate',
    'description' => NULL,
    'format' => NULL,
    'weight' => -3,
    'uuid' => '58db7236-8e24-4752-9a1e-71a0ea21caef',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
      1 => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
    ),
  );
  $terms[] = array(
    'name' => 'Logging documented',
    'description' => NULL,
    'format' => NULL,
    'weight' => -3,
    'uuid' => '5b4f42eb-16b2-45a4-b069-957eb528745f',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
      1 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
    ),
  );
  $terms[] = array(
    'name' => 'Deterministic build process',
    'description' => '',
    'format' => 'plain_text',
    'weight' => -3,
    'uuid' => '5d9862ee-5180-4b7f-af95-2dc2875746ba',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
      1 => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
    ),
  );
  $terms[] = array(
    'name' => 'Open audit agreement (anyone can audit)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => -2,
    'uuid' => '5e7d02b3-dc47-466c-99ac-27aa7ef0bb5f',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
      1 => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
    ),
  );
  $terms[] = array(
    'name' => 'Disputed',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '653b0dfb-3534-43d1-8071-2286d88f9e94',
    'vocabulary_machine_name' => 'claim_status',
  );
  $terms[] = array(
    'name' => 'Open audit agreement (anyone can publish)',
    'description' => '',
    'format' => 'plain_text',
    'weight' => -1,
    'uuid' => '68547e34-86c9-4609-befe-7a4a67905046',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
      1 => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
    ),
  );
  $terms[] = array(
    'name' => 'Auditor\'s Experience',
    'description' => '',
    'format' => 'full_html',
    'weight' => 7,
    'uuid' => '6b895e49-9f08-45c3-8bfb-1c51943d7cf5',
    'vocabulary_machine_name' => 'claim_variables',
  );
  $terms[] = array(
    'name' => 'Externally Reviewed',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '709c334a-5352-4437-886d-62fab676ca1d',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
      1 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    ),
  );
  $terms[] = array(
    'name' => 'Legally replicable',
    'description' => NULL,
    'format' => NULL,
    'weight' => -1,
    'uuid' => '75a0ed10-3447-4677-b56a-3bd78c696243',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
      1 => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
    ),
  );
  $terms[] = array(
    'name' => 'Responded to audit',
    'description' => NULL,
    'format' => NULL,
    'weight' => 1,
    'uuid' => '75b12edd-5060-437e-8896-2973c48691e6',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '709c334a-5352-4437-886d-62fab676ca1d',
      1 => '709c334a-5352-4437-886d-62fab676ca1d',
    ),
  );
  $terms[] = array(
    'name' => 'Usability',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '7679c053-253e-431d-b8b2-52c1a571f4f0',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '97085641-b2f6-436d-969a-0fd15f86d85a',
      1 => '97085641-b2f6-436d-969a-0fd15f86d85a',
    ),
  );
  $terms[] = array(
    'name' => 'Public code repository',
    'description' => NULL,
    'format' => NULL,
    'weight' => -5,
    'uuid' => '76e5d2fc-0f5b-4920-a63a-bb187283c827',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
      1 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
    ),
  );
  $terms[] = array(
    'name' => 'Yes/No',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7838b56a-17c8-4948-9bb4-49668f52c952',
    'vocabulary_machine_name' => 'evidence_type',
  );
  $terms[] = array(
    'name' => 'Functional build tree',
    'description' => NULL,
    'format' => NULL,
    'weight' => -2,
    'uuid' => '7c836c53-dd58-4f8d-a8ec-750e34337f7a',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
      1 => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
    ),
  );
  $terms[] = array(
    'name' => 'Net Neutral',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '81afbcc8-f229-4b46-88a6-8c1bcd74cf3a',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
      1 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    ),
  );
  $terms[] = array(
    'name' => 'All',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '845ada2e-17e3-4481-b454-7b903c1f0c71',
    'vocabulary_machine_name' => 'score',
  );
  $terms[] = array(
    'name' => 'Roadmap available',
    'description' => NULL,
    'format' => NULL,
    'weight' => 1,
    'uuid' => '85263771-c208-443d-b9a4-b964a4f4abb3',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
      1 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
    ),
  );
  $terms[] = array(
    'name' => 'Significant policies documentation',
    'description' => NULL,
    'format' => NULL,
    'weight' => -6,
    'uuid' => '861cdbe0-cd2d-4076-9ed2-c399957826bd',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
      1 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
    ),
  );
  $terms[] = array(
    'name' => 'Source available upon request',
    'description' => NULL,
    'format' => NULL,
    'weight' => -4,
    'uuid' => '87dfedde-4457-452d-b428-8179564aac99',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
      1 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
    ),
  );
  $terms[] = array(
    'name' => 'Identity Control',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '896490e6-12f2-4755-9cc2-84cfdf1d23fa',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
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
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
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
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
  );
  $terms[] = array(
    'name' => 'Unsubstantiated',
    'description' => NULL,
    'format' => NULL,
    'weight' => 1,
    'uuid' => '9d7bd3da-2151-460d-8d35-2444ed4be07a',
    'vocabulary_machine_name' => 'claim_status',
  );
  $terms[] = array(
    'name' => 'Enforced Policies',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
      1 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    ),
  );
  $terms[] = array(
    'name' => 'Online Service',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a35433fc-bd5d-4e89-83f5-b5e25cf794a8',
    'vocabulary_machine_name' => 'entry_type',
  );
  $terms[] = array(
    'name' => 'Date',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'a6e272f7-8dd5-401d-b0eb-fcc408c4735a',
    'vocabulary_machine_name' => 'evidence_type',
  );
  $terms[] = array(
    'name' => 'Server Application',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'afad8527-c8a7-4e82-9e7f-13a8b78bf3e5',
    'vocabulary_machine_name' => 'entry_type',
  );
  $terms[] = array(
    'name' => 'Verified, significant, under resolution policy breach report',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'b32f27b9-ba87-4adc-bbaa-9132b2c25550',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
      1 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
    ),
  );
  $terms[] = array(
    'name' => 'Confidentiality',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'b599c21e-7428-4442-9f22-fd988aabe11b',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
      1 => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
    ),
  );
  $terms[] = array(
    'name' => 'Activity of issue tracker',
    'description' => NULL,
    'format' => NULL,
    'weight' => -2,
    'uuid' => 'b74e6c21-0fd6-4c17-b73f-527e5177a5b1',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
      1 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
    ),
  );
  $terms[] = array(
    'name' => 'Peer Reviewed',
    'description' => NULL,
    'format' => NULL,
    'weight' => -3,
    'uuid' => 'bbc24dc4-1b7c-4126-bc81-a98d54b89277',
    'vocabulary_machine_name' => 'claim_status',
  );
  $terms[] = array(
    'name' => 'Publicly Verifiable',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(
      'und' => array(
        0 => array(
          'value' => 'a:32:{s:8:"cell_0_0";s:2:"PV";s:8:"cell_0_1";s:3:"OPE";s:8:"cell_0_2";s:4:" DET";s:8:"cell_0_3";s:3:"OAU";s:8:"cell_0_4";s:3:"OAP";s:8:"cell_0_5";s:3:"NDA";s:8:"cell_1_0";s:1:"1";s:8:"cell_1_1";s:1:"1";s:8:"cell_1_2";s:1:"1";s:8:"cell_1_3";s:1:"*";s:8:"cell_1_4";s:1:"*";s:8:"cell_1_5";s:1:"*";s:8:"cell_2_0";s:3:"0.5";s:8:"cell_2_1";s:1:"1";s:8:"cell_2_2";s:1:"0";s:8:"cell_2_3";s:1:"*";s:8:"cell_2_4";s:1:"*";s:8:"cell_2_5";s:1:"*";s:8:"cell_3_0";s:3:"0.5";s:8:"cell_3_1";s:1:"*";s:8:"cell_3_2";s:1:"*";s:8:"cell_3_3";s:1:"*";s:8:"cell_3_4";s:1:"*";s:8:"cell_3_5";s:1:"1";s:8:"cell_4_0";s:1:"1";s:8:"cell_4_1";s:1:"0";s:8:"cell_4_2";s:1:"0";s:8:"cell_4_3";s:1:"1";s:8:"cell_4_4";s:1:"1";s:8:"cell_4_5";s:1:"*";s:7:"rebuild";a:3:{s:10:"count_cols";i:6;s:10:"count_rows";i:5;s:7:"rebuild";s:13:"Rebuild Table";}s:6:"import";a:2:{s:38:"tablefield_csv_field_decision_matrix_0";s:0:"";s:31:"rebuild_field_decision_matrix_0";s:10:"Upload CSV";}}',
          'format' => NULL,
          'tabledata' => array(
            0 => array(
              0 => 'PV',
              1 => 'OPE',
              2 => ' DET',
              3 => 'OAU',
              4 => 'OAP',
              5 => 'NDA',
            ),
            1 => array(
              0 => 1,
              1 => 1,
              2 => 1,
              3 => '*',
              4 => '*',
              5 => '*',
            ),
            2 => array(
              0 => 0.5,
              1 => 1,
              2 => 0,
              3 => '*',
              4 => '*',
              5 => '*',
            ),
            3 => array(
              0 => 0.5,
              1 => '*',
              2 => '*',
              3 => '*',
              4 => '*',
              5 => 1,
            ),
            4 => array(
              0 => 1,
              1 => 0,
              2 => 0,
              3 => 1,
              4 => 1,
              5 => '*',
            ),
          ),
        ),
      ),
    ),
    'parent' => array(
      0 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
      1 => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    ),
  );
  $terms[] = array(
    'name' => 'Vulnerability disclosure',
    'description' => NULL,
    'format' => NULL,
    'weight' => -1,
    'uuid' => 'bee1b089-f26c-4b88-a658-50c2517a287f',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
      1 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
    ),
  );
  $terms[] = array(
    'name' => 'None',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bfe2b4ca-b289-41bf-b611-0332d4a92048',
    'vocabulary_machine_name' => 'score',
  );
  $terms[] = array(
    'name' => 'Disproved',
    'description' => NULL,
    'format' => NULL,
    'weight' => -1,
    'uuid' => 'cbc87fac-aab3-425f-bc2c-9eb8c16e9e34',
    'vocabulary_machine_name' => 'claim_status',
  );
  $terms[] = array(
    'name' => 'Privacy',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'd7ab321e-034a-4aa3-943b-c59bc724225a',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
  );
  $terms[] = array(
    'name' => 'Code escrow agreement',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd9a491c5-2d89-4dd7-a814-8d7190443b51',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
      1 => '149346c9-9cff-4e7f-b5f1-100cd96f0f31',
    ),
  );
  $terms[] = array(
    'name' => 'Supporting',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'deb874a4-ca74-49ba-b18f-48f66411c2c3',
    'vocabulary_machine_name' => 'evidence_status',
  );
  $terms[] = array(
    'name' => 'Secure distribution',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'df9fb481-1f2f-40e9-a600-04794ec5e5ce',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '97085641-b2f6-436d-969a-0fd15f86d85a',
      1 => '97085641-b2f6-436d-969a-0fd15f86d85a',
    ),
  );
  $terms[] = array(
    'name' => 'Formal or informal jurisdictional liability to comply with government requests',
    'description' => NULL,
    'format' => NULL,
    'weight' => -1,
    'uuid' => 'e20011b1-88cd-4ec3-8b0b-edb97680afba',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
      1 => '9f3f200f-b0de-4005-adb1-c0544ebe8bc9',
    ),
  );
  $terms[] = array(
    'name' => 'Public issue tracker',
    'description' => NULL,
    'format' => NULL,
    'weight' => -3,
    'uuid' => 'e704a009-b7bd-4fc5-bb9a-29d602fa2679',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
      1 => '47f3dd80-c83a-4e94-ab0a-02e4062cab6a',
    ),
  );
  $terms[] = array(
    'name' => 'Some',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'e7e50066-3bed-4364-bfd6-cb128e3ac55c',
    'vocabulary_machine_name' => 'score',
  );
  $terms[] = array(
    'name' => 'Policy',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ebffbaaf-58c9-4d6d-8dd0-a0588234539c',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
  );
  $terms[] = array(
    'name' => 'Desktop Client Application',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'edd526e2-59e0-476f-b0a8-4663e00a2456',
    'vocabulary_machine_name' => 'entry_type',
  );
  $terms[] = array(
    'name' => 'Open Source License',
    'description' => '',
    'format' => 'plain_text',
    'weight' => -4,
    'uuid' => 'f5416e14-562d-466b-9d00-837ef5b3c3b7',
    'vocabulary_machine_name' => 'criteria',
    'field_claim_variable' => array(),
    'field_decision_matrix' => array(),
    'parent' => array(
      0 => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
      1 => 'bd0dfb65-6612-43a7-984b-d7658d50e54b',
    ),
  );
  $terms[] = array(
    'name' => 'Confirmed',
    'description' => NULL,
    'format' => NULL,
    'weight' => -2,
    'uuid' => 'ff600325-2379-47c2-9de0-6371c46cf8fa',
    'vocabulary_machine_name' => 'claim_status',
  );
  return $terms;
}
