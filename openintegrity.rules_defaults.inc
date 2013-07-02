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
      "REQUIRES" : [ "rules", "views_rules", "devel" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "entry" : "entry" } } } }
      ],
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "create_entry_index_subindex_claim",
            "DISPLAY" : "views_rules_2",
            "ROW VARIABLES" : { "index" : { "index" : "Index" } },
            "DO" : [
              { "entity_create" : {
                  "USING" : {
                    "type" : "node",
                    "param_type" : "index",
                    "param_title" : "[node:title] \\u003E [index:name]",
                    "param_author" : [ "node:author" ]
                  },
                  "PROVIDE" : { "entity_created" : { "index_created" : "Created Index" } }
                }
              },
              { "data_set" : { "data" : [ "index-created:field-criteria" ], "value" : [ "index" ] } },
              { "data_set" : { "data" : [ "index-created:field-index-entry" ], "value" : [ "node" ] } },
              { "entity_save" : { "data" : [ "index-created" ], "immediate" : 1 } },
              { "VIEW LOOP" : {
                  "VIEW" : "create_entry_index_subindex_claim",
                  "DISPLAY" : "views_rules_3",
                  "USING" : { "parent" : "[index:name]" },
                  "ROW VARIABLES" : { "subindex" : { "subindex" : "SubIndex" } },
                  "DO" : [
                    { "entity_create" : {
                        "USING" : {
                          "type" : "node",
                          "param_type" : "subindex",
                          "param_title" : "[node:title] \\u003E [index:name] \\u003E [subindex:name]",
                          "param_author" : [ "node:author" ]
                        },
                        "PROVIDE" : { "entity_created" : { "subindex_created" : "Created SubIndex" } }
                      }
                    },
                    { "data_set" : {
                        "data" : [ "subindex-created:field-subcriteria" ],
                        "value" : [ "subindex" ]
                      }
                    },
                    { "data_set" : {
                        "data" : [ "subindex-created:field-subindex-index" ],
                        "value" : [ "index-created" ]
                      }
                    },
                    { "entity_save" : { "data" : [ "subindex-created" ], "immediate" : 1 } },
                    { "VIEW LOOP" : {
                        "VIEW" : "create_entry_index_subindex_claim",
                        "DISPLAY" : "views_rules_4",
                        "USING" : { "index" : "[index:name]", "subindex" : "[subindex:name]" },
                        "ROW VARIABLES" : { "claim" : { "claim" : "Claim" } },
                        "DO" : [
                          { "entity_create" : {
                              "USING" : {
                                "type" : "node",
                                "param_type" : "claim",
                                "param_title" : "[node:title] \\u003E [index:name] \\u003E [subindex:name] \\u003E [claim:name]",
                                "param_author" : [ "node:author" ]
                              },
                              "PROVIDE" : { "entity_created" : { "claim_created" : "Created Claim" } }
                            }
                          },
                          { "data_set" : { "data" : [ "claim-created:field-claim-type" ], "value" : [ "claim" ] } },
                          { "data_set" : {
                              "data" : [ "claim-created:field-claim-subindex" ],
                              "value" : [ "subindex-created" ]
                            }
                          },
                          { "devel_debug" : { "value" : [ "claim" ] } },
                          { "devel_debug" : { "value" : [ "claim-created" ] } },
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
