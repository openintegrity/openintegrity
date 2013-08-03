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
      "REQUIRES" : [ "views_rules", "rules" ],
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
      "REQUIRES" : [ "rules" ],
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
        { "drupal_message" : { "message" : "\\u003C?php\\r\\n\\/\\/ Active assert and make it quiet\\r\\nassert_options(ASSERT_ACTIVE, 1);\\r\\nassert_options(ASSERT_WARNING, 0);\\r\\nassert_options(ASSERT_QUIET_EVAL, 1);\\r\\n\\r\\n\\/\\/ Create a handler function\\r\\nfunction my_assert_handler($file, $line, $code)\\r\\n{\\r\\n    echo \\u0022\\u003Chr\\u003EAssertion Failed:\\r\\n        File \\u0027$file\\u0027\\u003Cbr \\/\\u003E\\r\\n        Line \\u0027$line\\u0027\\u003Cbr \\/\\u003E\\r\\n        Code \\u0027$code\\u0027\\u003Cbr \\/\\u003E\\u003Chr \\/\\u003E\\u0022;\\r\\n}\\r\\n\\r\\n\\/\\/ Set up the callback\\r\\nassert_options(ASSERT_CALLBACK, \\u0027my_assert_handler\\u0027);\\r\\n\\r\\n\\/\\/ UPDATE CLAIM STATUS\\r\\n\\/\\/ Should apply the flag rules to the evidences. I should probably move the Flags into Claim Status. I need to add Flags for SbIndex nodes?.\\r\\n\\r\\n\\/*\\r\\n$term = taxonomy_term_load($claim-\\u003Efield_claim_criteria);\\r\\necho $term-\\u003Etitle;\\r\\n$tabledata = tablefield_rationalize_table($term-\\u003Efield_decision_matrix[\\u0027und\\u0027][0][\\u0027tablefield\\u0027]);\\r\\n$nb_claims = count($tabledata[0]) - 1;\\r\\n\\/\\/ echo \\u0027nb_claims\\u0027 . $nb_claims . \\u0027\\u003Cbr\\/\\u003E\\u0027;\\r\\n$input = Array();\\r\\n\\/\\/ calculate all possible combinations\\r\\nfor($i = 0; $i \\u003C pow(2,$nb_claims); $i++) {\\r\\n  $inputs[] = str_split(str_pad(decbin($i), $nb_claims,\\u00220\\u0022, STR_PAD_LEFT));\\r\\n}\\r\\n\\/\\/ building the function that wil give the score as output.\\r\\n\\r\\nforeach ($inputs as $input) { \\r\\n  $matchedscores = Array();\\r\\n  $matchedrows = Array();\\r\\n  foreach ($tabledata as $row) {\\r\\n    $score = array_shift($row);\\r\\n    if ($row == $input) { \\/\\/ first, find exact match. \\r\\n\\/\\/      echo \\u0027Exact match: \\u0027 . join($input) . \\u0027 \\/ Score : \\u0027 . $score . \\u0022\\u003Cbr\\/\\u003E\\u0022;\\r\\n    } else { \\/\\/ second, find match replacing numbers by asterisks. if there are several possible interpretation give an error.\\r\\n      $row_str = join($row);\\r\\n      $match = str_replace(array(\\u0027*\\u0027), array(\\u0027[0-1]\\u0027), $row_str);\\r\\n      if(preg_match(\\u0027#\\u0027.$match.\\u0027#\\u0027,join($input),$matches)) {\\r\\n\\/\\/        echo \\u0027Match : \\u0027 . join($row) . \\u0022\\u003Cbr\\/\\u003E\\u0022;\\r\\n\\/\\/        echo dprint_r($matches,true);\\r\\n          assert(\\u0027count($matches) ==1 \\/* One input should match only one row at a time *\\/\\u0027);\\r\\n          $matchedscores[] = $score;\\r\\n          $matchedrows[] = Array(\\u0027criteria\\u0027 =\\u003E $row_str, \\u0027score\\u0027 =\\u003E $score);\\r\\n      }\\r\\n    }\\r\\n  }  \\r\\n  if (count($matchedscores) \\u003E 1) { \\/\\/ more than one match in the wildcard score decision matrix rows.\\r\\n    \\/\\/ do they all have the same score output?\\r\\n    if (count(array_count_values($matchedscores)) \\u003E1 ) {\\r\\n      echo \\u0027Input : \\u0027 . join($input) . \\u0027 matched several criteria with different output scores. The lower score will be retained.\\u003Cbr\\/\\u003E\\u003Cul\\u003E\\u0027;\\r\\n      foreach ($matchedrows as $value) {\\r\\n        echo \\u0027\\u003Cli\\u003E\\u0027 . join($input) . \\u0027 matched \\u0027 . $value[\\u0027criteria\\u0027] . \\u0027 with score \\u0027 . $value[\\u0027score\\u0027] . \\u0027\\u003C\\/li\\u003E\\u0027;\\r\\n      }\\r\\n      echo \\u0027\\u003C\\/ul\\u003E\\u0027;\\r\\n    }\\r\\n  }\\r\\n}\\r\\n*\\/\\r\\n?\\u003E" } }
      ]
    }
  }');
  $items['rules_update_entry_score'] = entity_import('rules_config', '{ "rules_update_entry_score" : {
      "LABEL" : "Update Entry Score",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Update" ],
      "REQUIRES" : [ "rules" ],
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
        { "drupal_message" : { "message" : "\\u003C?php\\r\\nif (isset($entry-\\u003Efield_entry_score[\\u0027und\\u0027])) {\\r\\n  foreach ($entry-\\u003Efield_entry_score[\\u0027und\\u0027] as $item) {\\r\\n     $fc_item = field_collection_item_load($item[\\u0027value\\u0027]);\\r\\n     if ($fc_item-\\u003Efield_criteria[\\u0027und\\u0027][0][\\u0027tid\\u0027] == $node-\\u003Efield_criteria[\\u0027und\\u0027][0][\\u0027tid\\u0027]) {\\r\\n       $term_before = taxonomy_term_load($fc_item-\\u003Efield_index_score[\\u0027und\\u0027][0][\\u0027tid\\u0027]);\\r\\n       $term_after = taxonomy_term_load($node-\\u003Efield_index_score[\\u0027und\\u0027][0][\\u0027tid\\u0027]);\\r\\n       echo \\u0027Updating parent entry [entry:title] \\/ [node:field-criteria] (\\u0027 . $term_before-\\u003Ename . \\u0027 -\\u003E \\u0027 . $term_after-\\u003Ename . \\u0027)\\u0027;\\r\\n       $fc_item-\\u003Efield_index_score[\\u0027und\\u0027][0][\\u0027tid\\u0027] = $node-\\u003Efield_index_score[\\u0027und\\u0027][0][\\u0027tid\\u0027];\\r\\n       $fc_item-\\u003Esave(true);\\r\\n       echo \\u0027 ... Done.\\u0027; \\r\\n     }\\r\\n  }\\r\\n} \\r\\nelse {\\r\\n  echo \\u0022field_entry_score not available...\\u0022;\\r\\n}\\r\\n?\\u003E" } }
      ]
    }
  }');
  $items['rules_update_index_score'] = entity_import('rules_config', '{ "rules_update_index_score" : {
      "LABEL" : "Update Index Score",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "Update" ],
      "REQUIRES" : [ "rules" ],
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
        { "drupal_message" : { "message" : "\\u003C?php\\r\\n\\/\\/ If all subindex or all but one -\\u003E Index = All...\\r\\n\\r\\n\\/* From Update Entry Score \\r\\nif (isset($entry-\\u003Efield_entry_score[\\u0027und\\u0027])) {\\r\\n  foreach ($entry-\\u003Efield_entry_score[\\u0027und\\u0027] as $item) {\\r\\n     $fc_item = field_collection_item_load($item[\\u0027value\\u0027]);\\r\\n     if ($fc_item-\\u003Efield_criteria[\\u0027und\\u0027][0][\\u0027tid\\u0027] == $node-\\u003Efield_criteria[\\u0027und\\u0027][0][\\u0027tid\\u0027]) {\\r\\n       $term_before = taxonomy_term_load($fc_item-\\u003Efield_index_score[\\u0027und\\u0027][0][\\u0027tid\\u0027]);\\r\\n       $term_after = taxonomy_term_load($node-\\u003Efield_index_score[\\u0027und\\u0027][0][\\u0027tid\\u0027]);\\r\\n       echo \\u0027Updating parent index [entry:title] \\/ [node:field-criteria] (\\u0027 . $term_before-\\u003Ename . \\u0027 -\\u003E \\u0027 . $term_after-\\u003Ename . \\u0027)\\u0027;\\r\\n       $fc_item-\\u003Efield_index_score[\\u0027und\\u0027][0][\\u0027tid\\u0027] = $node-\\u003Efield_index_score[\\u0027und\\u0027][0][\\u0027tid\\u0027];\\r\\n       $fc_item-\\u003Esave(true);\\r\\n       echo \\u0027 ... Done.\\u0027; \\r\\n     }\\r\\n  }\\r\\n} \\r\\nelse {\\r\\n  echo \\u0022field_entry_score not available...\\u0022;\\r\\n} *\\/\\r\\n?\\u003E" } }
      ]
    }
  }');
  $items['rules_update_subindex_score'] = entity_import('rules_config', '{ "rules_update_subindex_score" : {
      "LABEL" : "Update SubIndex Score",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
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
        { "drupal_message" : { "message" : "\\u003C?php\\r\\n\\/\\/ Active assert and make it quiet\\r\\nassert_options(ASSERT_ACTIVE, 1);\\r\\nassert_options(ASSERT_WARNING, 0);\\r\\nassert_options(ASSERT_QUIET_EVAL, 1);\\r\\n\\r\\n\\/\\/ Create a handler function\\r\\nfunction my_assert_handler($file, $line, $code)\\r\\n{\\r\\n    echo \\u0022\\u003Chr\\u003EAssertion Failed:\\r\\n        File \\u0027$file\\u0027\\u003Cbr \\/\\u003E\\r\\n        Line \\u0027$line\\u0027\\u003Cbr \\/\\u003E\\r\\n        Code \\u0027$code\\u0027\\u003Cbr \\/\\u003E\\u003Chr \\/\\u003E\\u0022;\\r\\n}\\r\\n\\r\\n\\/\\/ Set up the callback\\r\\nassert_options(ASSERT_CALLBACK, \\u0027my_assert_handler\\u0027);\\r\\n\\r\\n$term = taxonomy_term_load($claim-\\u003Efield_claim_criteria);\\r\\necho $term-\\u003Etitle;\\r\\n$tabledata = tablefield_rationalize_table($term-\\u003Efield_decision_matrix[\\u0027und\\u0027][0][\\u0027tablefield\\u0027]);\\r\\n$nb_claims = count($tabledata[0]) - 1;\\r\\n\\/\\/ echo \\u0027nb_claims\\u0027 . $nb_claims . \\u0027\\u003Cbr\\/\\u003E\\u0027;\\r\\n\\/\\/ build the $input variable by checking the variables of all neighboring claims... Should I rewrite the matrix header with the claim name rather than the CODE?\\r\\n\\r\\n\\/\\/ building the function that wil give the score as output.\\r\\n\\r\\nforeach ($tabledata as $row) {\\r\\n  $score = array_shift($row);\\r\\n  if ($row == $input) { \\/\\/ first, find exact match. \\r\\n\\/\\/      echo \\u0027Exact match: \\u0027 . join($input) . \\u0027 \\/ Score : \\u0027 . $score . \\u0022\\u003Cbr\\/\\u003E\\u0022;\\r\\n  } else { \\/\\/ second, find match replacing numbers by asterisks. if there are several possible interpretation give an error.\\r\\n    $row_str = join($row);\\r\\n    $match = str_replace(array(\\u0027*\\u0027), array(\\u0027[0-1]\\u0027), $row_str);\\r\\n    if(preg_match(\\u0027#\\u0027.$match.\\u0027#\\u0027,join($input),$matches)) {\\r\\n\\/\\/        echo \\u0027Match : \\u0027 . join($row) . \\u0022\\u003Cbr\\/\\u003E\\u0022;\\r\\n\\/\\/        echo dprint_r($matches,true);\\r\\n        assert(\\u0027count($matches) ==1 \\/* One input should match only one row at a time *\\/\\u0027);\\r\\n        $matchedscores[] = $score;\\r\\n        $matchedrows[] = Array(\\u0027criteria\\u0027 =\\u003E $row_str, \\u0027score\\u0027 =\\u003E $score);\\r\\n    }\\r\\n  }\\r\\n}  \\r\\nif (count($matchedscores) \\u003E 1) { \\/\\/ more than one match in the wildcard score decision matrix rows.\\r\\n  \\/\\/ do they all have the same score output? If so then take the smallest possible score!\\r\\n  if (count(array_count_values($matchedscores)) \\u003E1 ) {\\r\\n    echo \\u0027Input : \\u0027 . join($input) . \\u0027 matched several criteria with different output scores. The lower score will be retained.\\u003Cbr\\/\\u003E\\u003Cul\\u003E\\u0027;\\r\\n    foreach ($matchedrows as $value) {\\r\\n      echo \\u0027\\u003Cli\\u003E\\u0027 . join($input) . \\u0027 matched \\u0027 . $value[\\u0027criteria\\u0027] . \\u0027 with score \\u0027 . $value[\\u0027score\\u0027] . \\u0027\\u003C\\/li\\u003E\\u0027;\\r\\n    }\\r\\n    echo \\u0027\\u003C\\/ul\\u003E\\u0027;\\r\\n  }\\r\\n}\\r\\n}\\r\\n\\r\\n?\\u003E" } }
      ]
    }
  }');
  return $items;
}
