<?php
/**
 * @file
 * openintegrity.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function openintegrity_default_rules_configuration() {
  $items = array();
  $items['rules_create_entry_index_subindex_claim'] = entity_import('rules_config', '{ "rules_create_entry_index_subindex_claim" : {
      "LABEL" : "Create Entry Index SubIndex Claim",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "views_rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "entry" : "entry" } } } }
      ],
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "iterate_criteria",
            "DISPLAY" : "views_rules_2",
            "ROW VARIABLES" : { "criteria" : { "criteria" : "Criteria" } },
            "DO" : [
              { "entity_create" : {
                  "USING" : {
                    "type" : "node",
                    "param_type" : "index",
                    "param_title" : "[criteria:name]",
                    "param_author" : [ "node:author" ]
                  },
                  "PROVIDE" : { "entity_created" : { "index_created" : "Created Index" } }
                }
              },
              { "data_set" : { "data" : [ "index-created:field-criteria" ], "value" : [ "criteria" ] } },
              { "data_set" : { "data" : [ "index-created:field-index-entry" ], "value" : [ "node" ] } },
              { "data_set" : { "data" : [ "index-created:field-index-score" ], "value" : "68" } },
              { "entity_save" : { "data" : [ "index-created" ], "immediate" : 1 } },
              { "VIEW LOOP" : {
                  "VIEW" : "iterate_criteria",
                  "DISPLAY" : "views_rules_3",
                  "USING" : { "parent" : [ "criteria:tid" ] },
                  "ROW VARIABLES" : { "subcriteria" : { "subcriteria" : "SubCriteria" } },
                  "DO" : [
                    { "entity_create" : {
                        "USING" : {
                          "type" : "node",
                          "param_type" : "subindex",
                          "param_title" : "[subcriteria:name]",
                          "param_author" : [ "node:author" ]
                        },
                        "PROVIDE" : { "entity_created" : { "subindex_created" : "Created SubIndex" } }
                      }
                    },
                    { "data_set" : {
                        "data" : [ "subindex-created:field-subcriteria" ],
                        "value" : [ "subcriteria" ]
                      }
                    },
                    { "data_set" : {
                        "data" : [ "subindex-created:field-subindex-index" ],
                        "value" : [ "index-created" ]
                      }
                    },
                    { "data_set" : {
                        "data" : [ "subindex-created:field-subindex-summary-score" ],
                        "value" : "68"
                      }
                    },
                    { "data_set" : {
                        "data" : [ "subindex-created:field-subindex-developer-score" ],
                        "value" : "68"
                      }
                    },
                    { "data_set" : {
                        "data" : [ "subindex-created:field-subindex-community-score" ],
                        "value" : "68"
                      }
                    },
                    { "data_set" : {
                        "data" : [ "subindex-created:field-subindex-peer-review-score" ],
                        "value" : "68"
                      }
                    },
                    { "entity_save" : { "data" : [ "subindex-created" ], "immediate" : 1 } },
                    { "VIEW LOOP" : {
                        "VIEW" : "iterate_criteria",
                        "DISPLAY" : "views_rules_4",
                        "USING" : { "subindex" : [ "subcriteria:tid" ] },
                        "ROW VARIABLES" : { "claim" : { "claim" : "Claim" } },
                        "DO" : [
                          { "entity_create" : {
                              "USING" : {
                                "type" : "node",
                                "param_type" : "claim",
                                "param_title" : "[claim:name]",
                                "param_author" : [ "node:author" ]
                              },
                              "PROVIDE" : { "entity_created" : { "claim_created" : "Created Claim Instance" } }
                            }
                          },
                          { "data_set" : { "data" : [ "claim-created:field-claim-type" ], "value" : [ "claim" ] } },
                          { "data_set" : {
                              "data" : [ "claim-created:field-claim-subindex" ],
                              "value" : [ "subindex-created" ]
                            }
                          },
                          { "data_set" : { "data" : [ "claim-created:field-claim-status" ], "value" : "22" } },
                          { "entity_save" : { "data" : [ "claim-created" ], "immediate" : 1 } }
                        ]
                      }
                    }
                  ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_create_index_subindex_claim'] = entity_import('rules_config', '{ "rules_create_index_subindex_claim" : {
      "LABEL" : "Create Index SubIndex Claim",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "term" : { "label" : "Term", "type" : "taxonomy_term" },
        "type" : { "label" : "Type", "type" : "text" }
      },
      "IF" : [ { "data_is" : { "data" : [ "type" ], "value" : "Index" } } ],
      "DO" : []
    }
  }');
  return $items;
}
