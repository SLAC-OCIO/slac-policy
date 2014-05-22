<?php
/**
 * @file
 * slac_policydefault.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function slac_policydefault_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => '1.3 Information Security',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'a3597ed7-e0dd-45d3-8bcf-6c9618aa3a2f',
  'type' => 'subchapter',
  'language' => 'und',
  'created' => 1400559616,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '20613daf-97f6-4f0f-99f5-fdde76609b56',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'The purpose of this policy is to ensure the protection of Stanford\'s information resources from accidental or intentional unauthorized access or damage while also preserving and nurturing the open, information-sharing..',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>The purpose of this policy is to ensure the protection of Stanford\'s information resources from accidental or intentional unauthorized access or damage while also preserving and nurturing the open, information-sharing..</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_parent_chapter' => array(
    'und' => array(
      0 => array(
        'target_id' => 2,
      ),
    ),
  ),
  'field_subchapter_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Information Security',
        'format' => NULL,
        'safe_value' => 'Information Security',
      ),
    ),
  ),
  'field_subchapter_number' => array(
    'und' => array(
      0 => array(
        'value' => 3,
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-05-20 04:20:16 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '1.  Computing',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b3048f68-cc09-487c-8120-f62d8e3d4b9a',
  'type' => 'chapter',
  'language' => 'und',
  'created' => 1400559443,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9f4ced8c-cde8-4938-b7bf-39bd41324057',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'This chapter covers computing and networking policies and procedures relating to usage, security, identification, and Stanford domains.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>This chapter covers computing and networking policies and procedures relating to usage, security, identification, and Stanford domains.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_chapter_handbook' => array(
    'und' => array(
      0 => array(
        'target_id' => 1,
      ),
    ),
  ),
  'field_chapter_image' => array(),
  'field_chapter_number' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'field_chapter_title' => array(
    'und' => array(
      0 => array(
        'value' => ' Computing',
        'format' => NULL,
        'safe_value' => ' Computing',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-05-20 04:17:23 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Cyber',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'be9b10d0-643f-4ae9-9520-66a689d4d3b1',
  'type' => 'handbook',
  'language' => 'und',
  'created' => 1400558909,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b5620586-0622-4678-8133-8ccbbefa9340',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'SLAC\'s Cyber Policy',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>SLAC\'s Cyber Policy</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-05-20 04:08:29 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '1.2 Computer and Network Usage Policy',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '495713a4-0aa8-4ed0-a3a5-b50b523156f3',
  'type' => 'subchapter',
  'language' => 'und',
  'created' => 1400559563,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f4f87971-711a-4578-b70d-5975fd1ebadb',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'This policy covers the appropriate use of all information resources including computers, networks, and the information contained therein.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>This policy covers the appropriate use of all information resources including computers, networks, and the information contained therein.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_parent_chapter' => array(
    'und' => array(
      0 => array(
        'target_id' => 2,
      ),
    ),
  ),
  'field_subchapter_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Computer and Network Usage Policy',
        'format' => NULL,
        'safe_value' => 'Computer and Network Usage Policy',
      ),
    ),
  ),
  'field_subchapter_number' => array(
    'und' => array(
      0 => array(
        'value' => 2,
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-05-20 04:19:23 +0000',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '1.1 Administrative Computing',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b17e8198-e007-4705-819a-a83489e131fa',
  'type' => 'subchapter',
  'language' => 'und',
  'created' => 1400559515,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fb6d2897-c31d-45dc-9f8c-014ff45d88d9',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'This Guide Memo describes the policy that governs the Administrative Computing Systems at Stanford University and identifies Administrative Computing System ownership, development and management responsibilities. This policy...',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>This Guide Memo describes the policy that governs the Administrative Computing Systems at Stanford University and identifies Administrative Computing System ownership, development and management responsibilities. This policy...</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_parent_chapter' => array(
    'und' => array(
      0 => array(
        'target_id' => 2,
      ),
    ),
  ),
  'field_subchapter_name' => array(
    'und' => array(
      0 => array(
        'value' => 'Administrative Computing',
        'format' => NULL,
        'safe_value' => 'Administrative Computing',
      ),
    ),
  ),
  'field_subchapter_number' => array(
    'und' => array(
      0 => array(
        'value' => 1,
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-05-20 04:18:35 +0000',
);
  return $nodes;
}
