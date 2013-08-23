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
  $items['rules_create_entry'] = entity_import('rules_config', '{ "rules_create_entry" : {
      "LABEL" : "Create Entry",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "REQUIRES" : [ "rules", "views_rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "entry" : "entry" } } } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "list\\u003Cfield_collection_item\\u003E", "value" : [ "" ] },
            "PROVIDE" : { "variable_added" : { "entry_score_list" : "Entry Score List" } }
          }
        },
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
              { "entity_save" : { "data" : [ "index-created" ], "immediate" : 1 } },
              { "entity_create" : {
                  "USING" : {
                    "type" : "field_collection_item",
                    "param_field_name" : "field_entry_score",
                    "param_host_entity" : [ "node" ]
                  },
                  "PROVIDE" : { "entity_created" : { "entry_score_collection" : "Entry Score Collection" } }
                }
              },
              { "variable_add" : {
                  "USING" : { "type" : "field_collection_item", "value" : [ "" ] },
                  "PROVIDE" : { "variable_added" : { "entry_score_item" : "Entry Score Item" } }
                }
              },
              { "data_set" : {
                  "data" : [ "entry-score-collection:field-criteria" ],
                  "value" : [ "criteria" ]
                }
              },
              { "data_set" : {
                  "data" : [ "entry-score-collection:field-index-score" ],
                  "value" : "68"
                }
              },
              { "entity_save" : { "data" : [ "entry-score-collection" ], "immediate" : 1 } },
              { "list_add" : { "list" : [ "entry-score-list" ], "item" : [ "entry-score-collection" ] } },
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
                          { "entity_save" : { "data" : [ "claim-created" ], "immediate" : 1 } }
                        ]
                      }
                    }
                  ]
                }
              },
              { "component_rules_set_entry_score" : { "criteria" : [ "criteria" ], "score" : "89", "entry" : [ "node" ] } }
            ]
          }
        },
        { "data_set" : {
            "data" : [ "node:field-entry-score" ],
            "value" : [ "entry-score-list" ]
          }
        }
      ]
    }
  }');
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
                    { "data_set" : { "data" : [ "subindex-created:field-subindex-score" ], "value" : "68" } },
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
                          { "data_set" : {
                              "data" : [ "claim-created:field-claim-status" ],
                              "value" : { "value" : { "22" : "22" } }
                            }
                          },
                          { "data_set" : { "data" : [ "claim-created:field-claim-score" ], "value" : "0" } },
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
  $items['rules_set_entry_score'] = entity_import('rules_config', '{ "rules_set_entry_score" : {
      "LABEL" : "Set Entry Score",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "criteria" : { "label" : "Criteria", "type" : "taxonomy_term" },
        "score" : { "label" : "Score", "type" : "taxonomy_term" },
        "entry" : { "label" : "Entry", "type" : "node" }
      },
      "IF" : [
        { "node_is_of_type" : { "node" : [ "entry" ], "type" : { "value" : { "entry" : "entry" } } } },
        { "entity_has_field" : { "entity" : [ "entry" ], "field" : "field_entry_score" } }
      ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "entry:field-entry-score" ] },
            "ITEM" : { "current_entry_score" : "Current entry score" },
            "DO" : []
          }
        }
      ]
    }
  }');
  $items['rules_test_data_integrity'] = entity_import('rules_config', '{ "rules_test_data_integrity" : {
      "LABEL" : "Test Data Integrity",
      "PLUGIN" : "action set",
      "REQUIRES" : [ "views_rules" ],
      "ACTION SET" : [
        { "VIEW LOOP" : {
            "VIEW" : "all_entry_test",
            "DISPLAY" : "views_rules_1",
            "ROW VARIABLES" : [],
            "DO" : []
          }
        }
      ]
    }
  }');
  $items['rules_test_entry_index_subindex_claim'] = entity_import('rules_config', '{ "rules_test_entry_index_subindex_claim" : {
      "LABEL" : "Test Entry Index SubIndex Claim",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "REQUIRES" : [ "views_rules", "rules", "php" ],
      "ON" : [],
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "iterate_entries",
            "DISPLAY" : "views_rules_1",
            "ROW VARIABLES" : [],
            "DO" : [
              { "VIEW LOOP" : {
                  "VIEW" : "iterate_criteria",
                  "DISPLAY" : "views_rules_2",
                  "ROW VARIABLES" : [],
                  "DO" : [
                    { "VIEW LOOP" : {
                        "VIEW" : "iterate_entries",
                        "DISPLAY" : "views_rules_2",
                        "USING" : { "nid" : [ "nid:nid" ] },
                        "ROW VARIABLES" : [],
                        "DO" : [
                          { "entity_fetch" : {
                              "USING" : {
                                "type" : "node",
                                "id" : [ "index-nid:nid" ],
                                "revision_id" : [ "index-nid:vid" ]
                              },
                              "PROVIDE" : { "entity_fetched" : { "entry_index" : "Entry Index" } }
                            }
                          },
                          { "drupal_message" : { "message" : "\\u003C?php\\r\\n\\/\\/ For Entry $title -\\u003E $Index node is present (i.e. check $index_nid-\\u003Ecriteria==$index).\\r\\nif ([index_nid:criteria:tid]==[index:tid]) {\\r\\n   echo \\u0027Entry : [title:value] \\/ Index [entry-index:field-criteria] Present\\u0027;\\r\\n} else {\\r\\n   echo \\u0027\\u003Cstrong style=\\u0022color:red\\u0022\\u003EEntry : [title:value] \\/ Index [entry-index:field-criteria] Absent\\u0027;\\r\\n}\\r\\n?\\u003E" } }
                        ]
                      }
                    },
                    { "VIEW LOOP" : {
                        "VIEW" : "iterate_criteria",
                        "DISPLAY" : "views_rules_3",
                        "USING" : { "parent" : "[index:name]" },
                        "ROW VARIABLES" : [],
                        "DO" : [
                          { "VIEW LOOP" : {
                              "VIEW" : "iterate_criteria",
                              "DISPLAY" : "views_rules_4",
                              "USING" : { "subindex" : "[subindex:value]" },
                              "ROW VARIABLES" : { "claim" : { "claim" : "Claim" } },
                              "DO" : []
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
        }
      ]
    }
  }');
  $items['rules_update_claim_status'] = entity_import('rules_config', '{ "rules_update_claim_status" : {
      "LABEL" : "Update Claim Status",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "php", "rules_i18n" ],
      "ON" : [ "node_insert", "node_update" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "evidence" : "evidence" } }
          }
        }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : {
              "type" : "node",
              "id" : [ "node:field-evidence-claim:nid" ],
              "revision_id" : [ "node:field-evidence-claim:vid" ]
            },
            "PROVIDE" : { "entity_fetched" : { "claim" : "Claim" } }
          }
        },
        { "drupal_message" : { "message" : "\\u003C?php\\r\\n\\r\\n\\/\\/ UPDATE CLAIM STATUS\\r\\n\\/\\/ Should apply the flag rules to the evidences. I should probably move the Flags into Claim Status. I need to add Flags for SbIndex nodes?.\\r\\n\\/\\/ if evidence from Developer or Community\\r\\n\\/\\/    If Claim Status = Unsubstantiated \\u2192 Claim status = Evidence Status (Supporting \\u2192 Supported \\/ Negating \\u2192 Negated)\\r\\n\\/\\/    If Claim Status = Supported or Negated\\r\\n\\/\\/    if Claim Status == Evidence Status confirmation \\u2192 Do nothing * if Claim Status != Evidence Status \\u2192 Claim Status = Disputed * If Claim Status = Supported (Peer Reviewed) or Negated (Peer Reviewed) * if Claim Status == Evidence Status confirmation \\u2192 Do nothing\\r\\n\\/\\/    if Claim Status != Evidence Status \\u2192 Claim Status = Supported (Peer Reviewed \\/ Disputed) or Negated (Peer Reviewed \\/ Disputed)\\r\\n\\/\\/ If evidence from Peer Reviewer\\r\\n\\/\\/    Claim Status = Supported (Peer Reviewed) or Negated (Peer Reviewed)\\r\\n\\r\\n$ret=\\u0022\\u0022;\\r\\n$author = user_load($node-\\u003Euid);\\r\\n\\r\\n$claim_status = taxonomy_term_load($claim-\\u003Efield_claim_status[\\u0027und\\u0027][0][\\u0027tid\\u0027]);\\r\\n$evidence_status = taxonomy_term_load($node-\\u003Efield_evidence_status[\\u0027und\\u0027][0][\\u0027tid\\u0027]);\\r\\n\\r\\nif (!in_array(\\u0022peer-reviewer\\u0022, $author-\\u003Eroles)) {\\r\\n\\/\\/  echo dprint_r($author-\\u003Eroles, true);\\r\\n  switch ($claim_status-\\u003Ename) {\\r\\n    case \\u0022Unsubstantiated\\u0022:\\r\\n      $arr = taxonomy_get_term_by_name(\\u0022Sourced\\u0022, \\u0022claim_status\\u0022);\\r\\n       $sourced = array_shift($arr);\\r\\n\\/\\/     echo dprint_r($sourced,true);\\r\\n      $claim-\\u003Efield_claim_status[\\u0027und\\u0027][0][\\u0027tid\\u0027] = $sourced-\\u003Etid;\\r\\n      $claim-\\u003Efield_claim_score[\\u0027und\\u0027][0][\\u0027value\\u0027] = ($evidence_status-\\u003Ename == \\u0022Supporting\\u0022)?1:0;\\r\\n      $ret .= \\u0022Claim Status is now Sourced with Claim Score : \\u0022;\\r\\n      $ret .= ($claim-\\u003Efield_claim_score[\\u0027und\\u0027][0][\\u0027value\\u0027] == 1)?\\u0022Yes\\u0022:\\u0022No\\u0022;\\r\\n      break;\\r\\n    case \\u0022Sourced\\u0022:\\r\\n\\/\\/    echo dprint_r($evidence_status,true);\\r\\n\\/\\/    echo dprint_r($claim-\\u003Efield_claim_score,true);\\r\\n      if (($evidence_status-\\u003Ename == \\u0022Supporting\\u0022 \\u0026\\u0026 $claim-\\u003Efield_claim_score[\\u0027und\\u0027][0][\\u0027value\\u0027] == 1) || ($evidence_status-\\u003Ename == \\u0022Negating\\u0022 \\u0026\\u0026 $claim-\\u003Efield_claim_score[\\u0027und\\u0027][0][\\u0027value\\u0027] == 0)) { \\r\\n        $ret .= \\u0022Claim Status stays Sourced with same Claim Score : \\u0022;\\r\\n        $ret .= ($claim-\\u003Efield_claim_score[\\u0027und\\u0027][0][\\u0027value\\u0027] == 1)?\\u0022Yes\\u0022:\\u0022No\\u0022;\\r\\n      }\\r\\n      elseif (($evidence_status-\\u003Ename == \\u0022Supporting\\u0022 \\u0026\\u0026 $claim-\\u003Efield_claim_score[\\u0027und\\u0027][0][\\u0027value\\u0027] == 0) || ($evidence_status-\\u003Ename == \\u0022Negating\\u0022 \\u0026\\u0026 $claim-\\u003Efield_claim_score[\\u0027und\\u0027][0][\\u0027value\\u0027] == 1)) { \\r\\n          $arr = taxonomy_get_term_by_name(\\u0022Disputed\\u0022, \\u0022claim_status\\u0022);\\r\\n          $disputed = array_shift($arr);\\r\\n          $claim-\\u003Efield_claim_status[\\u0027und\\u0027][0][\\u0027tid\\u0027] = $disputed-\\u003Etid;\\r\\n          $claim-\\u003Efield_claim_score[\\u0027und\\u0027][0][\\u0027value\\u0027] = 0;\\r\\n          $ret .= \\u0022Claim Status is now Disputed with Claim Score : No\\u0022;\\r\\n      }\\r\\n      break;\\r\\n    case \\u0022Disputed\\u0022:\\r\\n      $ret .= \\u0022Claim Status stays disputed with same Claim Score\\u0022;\\r\\n    case \\u0022Peer Reviewed\\u0022:\\r\\n      $ret .= \\u0022Claim Status becomes Peer Reviewed and Disputed with same Claim Score : \\u0022;\\r\\n      $ret .= $claim-\\u003Efield_claim_score[\\u0027und\\u0027][0][\\u0027value\\u0027]?\\u0022Yes\\u0022:\\u0022No\\u0022;\\r\\n      break;\\r\\n  }\\r\\n} else {\\r\\n        $arr = taxonomy_get_term_by_name(\\u0022Peer Reviewed\\u0022, \\u0022claim_status\\u0022);\\r\\n        $peerreviewed = array_shift($arr);\\r\\n        $claim-\\u003Efield_claim_status[\\u0027und\\u0027][0][\\u0027tid\\u0027] = $peerreviewed-\\u003Etid;\\r\\n        $claim-\\u003Efield_claim_score[\\u0027und\\u0027][0][\\u0027value\\u0027] = ($evidence_status-\\u003Ename == \\u0022Supporting\\u0022)?1:0;\\r\\n        $ret .= \\u0022Claim Status is now Peer Reviewed with Claim Score : \\u0022;\\r\\n        $ret .= $claim-\\u003Efield_claim_score[\\u0027und\\u0027][0][\\u0027value\\u0027]?\\u0022Yes\\u0022:\\u0022No\\u0022;\\r\\n}\\r\\n\\r\\necho $ret;\\r\\n?\\u003E" } },
        { "entity_save" : { "data" : [ "claim" ], "immediate" : 1 } },
        { "redirect" : { "url" : "\\u003C?php \\r\\n\\/\\/echo dprint_r($claim-\\u003Efield_claim_subindex[\\u0027und\\u0027][0],true);\\r\\n$sub = node_load($claim-\\u003Efield_claim_subindex[\\u0027und\\u0027][0][\\u0027target_id\\u0027]);\\r\\n$ind = node_load($sub-\\u003Efield_subindex_index[\\u0027und\\u0027][0][\\u0027target_id\\u0027]);\\r\\nreturn \\u0027node\\/\\u0027.$ind-\\u003Efield_index_entry[\\u0027und\\u0027][0][\\u0027target_id\\u0027];\\r\\n?\\u003E" } }
      ]
    }
  }');
  $items['rules_update_entry_score'] = entity_import('rules_config', '{ "rules_update_entry_score" : {
      "LABEL" : "Update Entry Score",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Update" ],
      "REQUIRES" : [ "rules", "php", "rules_i18n", "views_rules" ],
      "ON" : [ "node_update", "node_insert" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "index" : "index" } } } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : {
              "type" : "node",
              "id" : [ "node:field-index-entry:nid" ],
              "revision_id" : [ "node:field-index-entry:vid" ]
            },
            "PROVIDE" : { "entity_fetched" : { "entry" : "Entry" } }
          }
        },
        { "drupal_message" : { "message" : "\\u003C?php\\r\\n$entry_wrapper = entity_metadata_wrapper(\\u0027node\\u0027, $entry);\\r\\n$entry_score = $entry_wrapper-\\u003Efield_entry_score-\\u003Evalue();\\r\\n\\/\\/echo dprint_r($entry_score,true);\\r\\n\\/\\/echo \\u0022Entry Score was : \\u003Cbr\\u003E\\u0022;\\r\\n$none_arr = taxonomy_get_term_by_name(\\u0022None\\u0022, \\u0022score\\u0022);\\r\\n$none = array_shift($none_arr);\\r\\nif ($entry_score) {\\r\\n  foreach ($entry_score as $item) {\\r\\n  \\/\\/  echo dprint_r($score_item,true);\\r\\n    $score_item = entity_metadata_wrapper(\\u0027field_collection_item\\u0027,$item);\\r\\n\\/\\/    echo $score_item-\\u003Efield_criteria-\\u003Ename-\\u003Evalue() . \\u0022 : \\u0022 . $score_item-\\u003Efield_index_score-\\u003Ename-\\u003Evalue() . \\u0022 \\/ \\u0022;\\r\\n    $score_item-\\u003Efield_index_score = $none-\\u003Etid;\\r\\n\\/\\/    echo \\u0022 reset to None \\u003Cbr\\u003E \\u0022;\\r\\n  }\\r\\n} else {\\r\\n  echo \\u0022Entry Score field collection is null. Creating new collection.\\u0022;\\r\\n  $vocab = taxonomy_vocabulary_machine_name_load(\\u0022criteria\\u0022);\\r\\n  $tree = taxonomy_get_tree($vocab-\\u003Evid, 0, 1);\\r\\n\\/\\/  echo dprint_r($tree,true);\\r\\n  foreach ($tree as $criteria) {\\r\\n    $item = entity_create(\\u0027field_collection_item\\u0027, array(\\u0027field_name\\u0027 =\\u003E \\u0027field_entry_score\\u0027));\\r\\n    $item-\\u003EsetHostEntity(\\u0027node\\u0027, $entry);\\r\\n    $score_item = entity_metadata_wrapper(\\u0027field_collection_item\\u0027, $item);\\r\\n    $score_item-\\u003Efield_criteria = $criteria-\\u003Etid;\\r\\n    $score_item-\\u003Efield_index_score = $none-\\u003Etid;\\r\\n    $score_item-\\u003Esave();\\r\\n\\/\\/    echo \\u0022New item \\u0022 . $score_item-\\u003Efield_criteria-\\u003Ename-\\u003Evalue() . \\u0022 : \\u0022 . $score_item-\\u003Efield_index_score-\\u003Ename-\\u003Evalue() . \\u0022\\u003Cbr\\u003E\\u0022;\\r\\n  }\\r\\n}\\r\\n?\\u003E" } },
        { "VIEW LOOP" : {
            "VIEW" : "iterate_entries",
            "DISPLAY" : "views_rules_2",
            "USING" : { "nid" : [ "entry:nid" ] },
            "ROW VARIABLES" : { "index" : { "index_instance" : "Index Instance" } },
            "DO" : [
              { "drupal_message" : { "message" : "\\u003C?php\\r\\n$index = node_load($index_instance-\\u003Enid);\\r\\nif ($index-\\u003Enid == $node-\\u003Enid) $index = $node;\\r\\n$index_wrapper = entity_metadata_wrapper(\\u0027node\\u0027, $index);\\r\\n$index_score = $index_wrapper-\\u003Efield_index_score;\\r\\n$entry_node = node_load($entry-\\u003Enid);\\r\\n$entry_wrapper = entity_metadata_wrapper(\\u0027node\\u0027, $entry_node);\\r\\n$entry_score = $entry_wrapper-\\u003Efield_entry_score-\\u003Evalue();\\r\\n\\/\\/echo $index-\\u003Etitle . \\u0022 Index Score \\u0022 . $index_score-\\u003Ename-\\u003Evalue() . \\u0022 (\\u0022 . $index_score-\\u003Etid-\\u003Evalue() . \\u0022)\\u0022;\\r\\nforeach ($entry_score as $item) {\\r\\n  $score_item = entity_metadata_wrapper(\\u0027field_collection_item\\u0027,$item);\\r\\n  if ($score_item-\\u003Efield_criteria-\\u003Ename-\\u003Evalue() == $index_wrapper-\\u003Etitle-\\u003Evalue()) {\\r\\n    if ($score_item-\\u003Efield_index_score-\\u003Ename-\\u003Evalue() != $index_score-\\u003Ename-\\u003Evalue()) {\\r\\n\\/\\/      echo \\u0022Updated \\u0022 . $score_item-\\u003Efield_criteria-\\u003Ename-\\u003Evalue() . \\u0022 : \\u0022 . $score_item-\\u003Efield_index_score-\\u003Ename-\\u003Evalue() . \\u0022 to \\u0022 . $index_score-\\u003Ename-\\u003Evalue() .  \\u0022\\u003Cbr\\u003E\\u0022;\\r\\n      $score_item-\\u003Efield_index_score = $index_score-\\u003Etid-\\u003Evalue();\\r\\n      $score_item-\\u003Esave();\\r\\n    }\\r\\n  } \\r\\n}\\r\\n?\\u003E" } }
            ]
          }
        },
        { "entity_save" : { "data" : [ "entry" ], "immediate" : 1 } }
      ]
    }
  }');
  $items['rules_update_index_score'] = entity_import('rules_config', '{ "rules_update_index_score" : {
      "LABEL" : "Update Index Score",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Update" ],
      "REQUIRES" : [ "rules", "php", "rules_i18n", "views_rules" ],
      "ON" : [ "node_update", "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "subindex" : "subindex" } }
          }
        }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : {
              "type" : "node",
              "id" : [ "node:field-subindex-index:nid" ],
              "revision_id" : [ "node:field-subindex-index:vid" ]
            },
            "PROVIDE" : { "entity_fetched" : { "index" : "Index" } }
          }
        },
        { "drupal_message" : { "message" : "\\u003C?php\\r\\n$index_wrapper = entity_metadata_wrapper(\\u0027node\\u0027, $index);\\r\\n$sum = $index_wrapper-\\u003Efield_index_sum-\\u003Evalue();\\r\\n$index_wrapper-\\u003Efield_index_sum = 0;\\r\\n\\/\\/echo \\u0022Index sum was : \\u0022 . $sum . \\u0022 \\/ reset to : \\u0022 . $index_wrapper-\\u003Efield_index_sum-\\u003Evalue() . \\u0022\\u003Cbr\\u003E\\u0022;\\r\\n?\\u003E" } },
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "0" },
            "PROVIDE" : { "variable_added" : { "subindex_number" : "Subindex Number" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\n$index_wrapper = entity_metadata_wrapper(\\u0022node\\u0022,node_load($index-\\u003Enid));\\r\\necho implode(\\u0022+\\u0022, $index_wrapper-\\u003Efield_index_entry-\\u003Efield_entry_type-\\u003Eraw());\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "entry_type" : "Entry Type" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "iterate_entries_for_scoring",
            "DISPLAY" : "views_rules_3",
            "USING" : { "nid" : [ "index:nid" ], "field_entry_type_tid" : [ "entry-type" ] },
            "ROW VARIABLES" : { "subindex" : { "subindex_instance" : "SubIndex Instance" } },
            "DO" : [
              { "drupal_message" : { "message" : "\\u003C?php\\r\\n$subindex = node_load($subindex_instance-\\u003Enid);\\r\\nif ($subindex-\\u003Enid == $node-\\u003Enid) $subindex = $node;\\r\\n$subindex_wrapper = entity_metadata_wrapper(\\u0027node\\u0027, $subindex);\\r\\n$subindex_score = $subindex_wrapper-\\u003Efield_subindex_score-\\u003Ename-\\u003Evalue();\\r\\n$index_wrapper = entity_metadata_wrapper(\\u0027node\\u0027, $index);\\r\\n$sum = $index_wrapper-\\u003Efield_index_sum-\\u003Evalue();\\r\\n$score = ($subindex_score == \\u0022All\\u0022)?1:0;\\r\\n\\/\\/echo $subindex-\\u003Etitle . \\u0022 SubIndex score is : \\u0022 . $subindex_score . \\u0022(\\u0022 . $score . \\u0022) \\u003Cbr\\u003E\\u0022;\\r\\n$index_wrapper-\\u003Efield_index_sum = $sum + $score;\\r\\n\\/\\/echo \\u0022Index Sum was : \\u0022 . $sum . \\u0022 and is now : \\u0022 . $index_wrapper-\\u003Efield_index_sum-\\u003Evalue();\\r\\n?\\u003E" } },
              { "data_set" : {
                  "data" : [ "subindex-number" ],
                  "value" : {
                    "select" : "subindex-number",
                    "php" : { "code" : "return $value + 1;" }
                  }
                }
              }
            ]
          }
        },
        { "drupal_message" : { "message" : "\\u003C?php\\r\\n$ret = \\u0022\\u0022;\\r\\n$index_wrapper = entity_metadata_wrapper(\\u0027node\\u0027, $index);\\r\\n$ret .= \\u0022Index Sum is \\u0022 . $index_wrapper-\\u003Efield_index_sum-\\u003Evalue() . \\u0022 \\/ SubIndex Number is \\u0022 . $subindex_number . \\u0022 \\/ \\u0022;\\r\\nif ($index_wrapper-\\u003Efield_index_sum-\\u003Evalue() \\u003E= $subindex_number -1 ) {\\r\\n    $all_arr = taxonomy_get_term_by_name(\\u0022All\\u0022, \\u0022score\\u0022);\\r\\n    $all = array_shift($all_arr);\\r\\n    $index_wrapper-\\u003Efield_index_score = $all-\\u003Etid;\\r\\n    $ret .= $index-\\u003Etitle .\\u0022 Index Score is now All\\u0022;\\r\\n} elseif ($index_wrapper-\\u003Efield_index_sum-\\u003Evalue() \\u003C= 1 ) {\\r\\n    $all_arr = taxonomy_get_term_by_name(\\u0022None\\u0022, \\u0022score\\u0022);\\r\\n    $all = array_shift($all_arr);\\r\\n    $index_wrapper-\\u003Efield_index_score = $all-\\u003Etid;\\r\\n    $ret .= $index-\\u003Etitle .\\u0022 Index Score is now None\\u0022;\\r\\n} else {\\r\\n    $all_arr = taxonomy_get_term_by_name(\\u0022Some\\u0022, \\u0022score\\u0022);\\r\\n    $all = array_shift($all_arr);\\r\\n    $index_wrapper-\\u003Efield_index_score = $all-\\u003Etid;\\r\\n    $ret .= $index-\\u003Etitle .\\u0022 Index Score is now Some\\u0022;\\r\\n}\\r\\necho $ret;\\r\\n?\\u003E" } },
        { "entity_save" : { "data" : [ "index" ], "immediate" : 1 } }
      ]
    }
  }');
  $items['rules_update_subindex_score'] = entity_import('rules_config', '{ "rules_update_subindex_score" : {
      "LABEL" : "Update SubIndex Score",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "php", "rules_i18n", "views_rules" ],
      "ON" : [ "node_insert", "node_update" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "claim" : "claim" } } } }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : {
              "type" : "node",
              "id" : [ "node:field-claim-subindex:nid" ],
              "revision_id" : [ "node:field-claim-subindex:vid" ]
            },
            "PROVIDE" : { "entity_fetched" : { "subindex" : "SubIndex" } }
          }
        },
        { "drupal_message" : { "message" : "\\u003C?php\\r\\n$subindex_wrapper = entity_metadata_wrapper(\\u0027node\\u0027, $subindex);\\r\\n$sum = $subindex_wrapper-\\u003Efield_subindex_sum-\\u003Evalue();\\r\\n$subindex_wrapper-\\u003Efield_subindex_sum = 0;\\r\\n\\/\\/echo \\u0022SubIndex Sum was : \\u0022 . $sum . \\u0022 \\/ reset to : \\u0022 . $subindex_wrapper-\\u003Efield_subindex_sum-\\u003Evalue() . \\u0022\\u003Cbr\\u003E\\u0022;\\r\\n\\/\\/echo \\u0022SubIndex Status was : (\\u0022 . implode(\\u0027,\\u0027,$subindex_wrapper-\\u003Efield_subindex_status-\\u003Eraw()) . \\u0022) \\/ reset to () \\u003Cbr\\u003E\\u0022;\\r\\n$subindex_wrapper-\\u003Efield_subindex_status = Array();\\r\\n?\\u003E" } },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "\\u003C?php\\r\\n$subindex_wrapper = entity_metadata_wrapper(\\u0022node\\u0022,node_load($subindex-\\u003Enid));\\r\\necho implode(\\u0022+\\u0022, $subindex_wrapper-\\u003Efield_subindex_index-\\u003Efield_index_entry-\\u003Efield_entry_type-\\u003Eraw());\\r\\n?\\u003E"
            },
            "PROVIDE" : { "variable_added" : { "entry_type" : "Entry Type" } }
          }
        },
        { "VIEW LOOP" : {
            "VIEW" : "iterate_entries_for_scoring",
            "DISPLAY" : "views_rules_4",
            "USING" : { "nid" : [ "subindex:nid" ], "field_entry_type_tid" : [ "entry-type" ] },
            "ROW VARIABLES" : { "claim_instance" : { "claim_instance" : "Claim Instance" } },
            "DO" : [
              { "drupal_message" : { "message" : "\\u003C?php\\r\\n$claim = node_load($claim_instance-\\u003Enid);\\r\\nif ($claim-\\u003Enid == $node-\\u003Enid) $claim = $node;\\r\\n$score = entity_metadata_wrapper(\\u0027node\\u0027, $claim);\\r\\n$value = $score-\\u003Efield_claim_score-\\u003Evalue();\\r\\n\\/\\/echo $claim-\\u003Etitle . \\u0022 Claim score is : \\u0022 . $value;\\r\\n$subindex_wrapper = entity_metadata_wrapper(\\u0027node\\u0027, $subindex);\\r\\n$sum = $subindex_wrapper-\\u003Efield_subindex_sum-\\u003Evalue();\\r\\n$subindex_wrapper-\\u003Efield_subindex_sum = $sum + $value;\\r\\n\\/\\/echo \\u0022Subindex Sum was : \\u0022 . $sum . \\u0022 and is now : \\u0022 . $subindex_wrapper-\\u003Efield_subindex_sum-\\u003Evalue(); \\r\\n?\\u003E" } },
              { "drupal_message" : { "message" : "\\u003C?php\\r\\n$ret = \\u0022\\u0022;\\r\\n$claim = node_load($claim_instance-\\u003Enid);\\r\\nif ($claim-\\u003Enid == $node-\\u003Enid) $claim = $node;\\r\\n$claim_wrapper = entity_metadata_wrapper(\\u0027node\\u0027, $claim);\\r\\n$claim_statuses = Array();\\r\\nforeach ($claim_wrapper-\\u003Efield_claim_status-\\u003Evalue() as $claim_status) {\\r\\n  $claim_statuses[] = $claim_status-\\u003Ename;\\r\\n}\\r\\nif (in_array(\\u0022Disputed\\u0022,$claim_statuses)) {\\r\\n \\/\\/ if subindex_status contains Disputed then nothing, if not add Disputed.\\r\\n  $subindex_wrapper = entity_metadata_wrapper(\\u0027node\\u0027, $subindex);\\r\\n  $values = $subindex_wrapper-\\u003Efield_subindex_status-\\u003Eraw();\\r\\n  $disputed_arr = taxonomy_get_term_by_name(\\u0022Disputed\\u0022, \\u0022subindex_status\\u0022);\\r\\n  $disputed = array_shift($disputed_arr);\\r\\n  if (!in_array($disputed-\\u003Etid, is_array($values)?$values:Array())) {\\r\\n    $subindex_wrapper-\\u003Efield_subindex_status[] = $disputed-\\u003Etid;\\r\\n    $ret .= $claim-\\u003Etitle . \\u0022 Claim is Disputed  \\/ Subindex \\u0022. $subindex_wrapper-\\u003Etitle-\\u003Evalue() . \\u0022 Status is now Disputed\\u0022;\\r\\n  }\\r\\n} elseif (in_array(\\u0022Outdated\\u0022,$claim_statuses)) {\\r\\n  $subindex_wrapper = entity_metadata_wrapper(\\u0027node\\u0027, $subindex);\\r\\n  $values = $subindex_wrapper-\\u003Efield_subindex_status-\\u003Eraw();\\r\\n  $outdated_arr = taxonomy_get_term_by_name(\\u0022Outdated\\u0022, \\u0022subindex_status\\u0022);\\r\\n  $outdated = array_shift($outdated_arr);\\r\\n  if (!in_array($outdated-\\u003Etid, is_array($values)?$values:Array())) {\\r\\n    $subindex_wrapper-\\u003Efield_subindex_status[] = $outdated-\\u003Etid;\\r\\n    $ret .=  $claim-\\u003Etitle . \\u0022 Claim is Outdated  \\/ Subindex \\u0022 . $subindex_wrapper-\\u003Etitle-\\u003Evalue() . \\u0022 Status is now Outdated\\u0022;\\r\\n  }\\r\\n} \\r\\necho $ret;\\r\\n?\\u003E" } }
            ]
          }
        },
        { "drupal_message" : { "message" : "\\u003C?php\\r\\n$ret = \\u0022\\u0022;\\r\\n$subindex_wrapper = entity_metadata_wrapper(\\u0027node\\u0027, $subindex);\\r\\n$ret .= $subindex-\\u003Etitle . \\u0022 SubIndex Sum is \\u0022 . $subindex_wrapper-\\u003Efield_subindex_sum-\\u003Evalue() . \\u0022 \\/ SubCriteria Threshold is \\u0022 . $subindex_wrapper-\\u003Efield_subcriteria-\\u003Efield_threshold-\\u003Evalue() . \\u0022 \\/ \\u0022;\\r\\nif ($subindex_wrapper-\\u003Efield_subindex_sum-\\u003Evalue() \\u003E= $subindex_wrapper-\\u003Efield_subcriteria-\\u003Efield_threshold-\\u003Evalue()) {\\r\\n    $all_arr = taxonomy_get_term_by_name(\\u0022All\\u0022, \\u0022score\\u0022);\\r\\n    $all = array_shift($all_arr);\\r\\n    $subindex_wrapper-\\u003Efield_subindex_score = $all-\\u003Etid;\\r\\n    $ret .= \\u0022Resulting Subindex Score is All\\u0022;\\r\\n} else {\\r\\n    $all_arr = taxonomy_get_term_by_name(\\u0022None\\u0022, \\u0022score\\u0022);\\r\\n    $all = array_shift($all_arr);\\r\\n    $subindex_wrapper-\\u003Efield_subindex_score = $all-\\u003Etid;\\r\\n    $ret .= \\u0022Resulting Subindex Score is None\\u0022;\\r\\n}\\r\\necho $ret;\\r\\n?\\u003E" } },
        { "entity_save" : { "data" : [ "subindex" ], "immediate" : 1 } }
      ]
    }
  }');
  return $items;
}
