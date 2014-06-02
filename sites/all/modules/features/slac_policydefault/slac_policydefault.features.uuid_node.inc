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
  'title' => '1.3 Information Security',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0d1a647d-384d-4b05-a4e7-a58c56feb867',
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
        'target_id' => 197,
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
  'subscriptions_notify' => TRUE,
  'date' => '2014-05-19 21:20:16 -0700',
  'author_uuid' => '5359c718-c7c8-4bf6-b60f-a5358f3c1eff',
);
  $nodes[] = array(
  'title' => '1.  Computing',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'dcb433e4-5644-4526-91d9-3b737c5493f9',
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
        'target_id' => 198,
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
  'subscriptions_notify' => TRUE,
  'date' => '2014-05-19 21:17:23 -0700',
  'author_uuid' => '5359c718-c7c8-4bf6-b60f-a5358f3c1eff',
);
  $nodes[] = array(
  'title' => 'Cyber',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b5d73456-1bd7-45d7-892b-e017583efcc0',
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
        'value' => '<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 13px; font-family: arial; line-height: normal; background: transparent;">Tincidunt tristique egestas tempor quis vel sed elit porta, tincidunt! Egestas! Scelerisque, tristique vel odio vut lorem, rhoncus arcu auctor sit pulvinar non ac! Urna risus arcu in. Dignissim pellentesque habitasse ultricies in ut! Auctor arcu amet sit tincidunt nec platea turpis mauris adipiscing tristique dis, sit hac, porta ac, urna montes ut dolor, habitasse, porttitor, adipiscing pellentesque phasellus porta nisi ut tristique tincidunt tincidunt, a auctor dolor pulvinar sociis! Sagittis sed, integer parturient ac enim platea augue non tristique, ut. Integer porttitor habitasse lectus vel! Cursus, sociis, tempor et amet turpis elementum pid sit mus, elementum vel tincidunt elementum cum non, pellentesque vel in facilisis non est quis nec tortor. Hac porta porta amet enim pellentesque? Urna, ultrices, in.</p>

<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 13px; font-family: arial; line-height: normal; background: transparent;">Dis rhoncus ultricies tristique mid? Aenean non? Lectus est tincidunt tristique vel, nec nunc? Urna montes mus, scelerisque augue velit, et porttitor phasellus, sed eros in magna parturient tortor parturient non amet lectus? Urna ultrices. Pulvinar urna vel nisi? Est. Turpis tristique ridiculus augue nisi tempor pulvinar, vel. In aenean mus, auctor odio tempor sed scelerisque auctor eu sagittis? Enim purus? Ut placerat? Nisi lectus pulvinar lundium lorem! Enim. Pid magnis cras tortor magna augue, montes placerat, arcu placerat tincidunt porta rhoncus proin? Placerat rhoncus magna dolor arcu, purus, nisi! Amet. Dolor? Mauris sit elit urna et porta, in nunc? Diam proin dapibus. Placerat. Tincidunt nunc vel scelerisque ultricies mus lectus? Porttitor auctor vel rhoncus tincidunt pid, enim nisi.[[{"fid":"45","view_mode":"crop_crop_square","fields":{"format":"crop_crop_square","field_file_image_alt_text[und][0][value]":"","field_file_image_title_text[und][0][value]":"","field_file_image_description[und][0][value]":"","thumbnails":"crop_crop_square","pp_lightbox":true,"pp_description":true},"type":"media","attributes":{"height":200,"width":200,"style":"width: 200px; height: 200px; float: right;","class":"media-element file-crop-crop-square"}}]]</p>

<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 13px; font-family: arial; line-height: normal; background: transparent;">Nec, sed urna! Diam nunc mattis! Nunc ultricies. Vut? Ut enim, cras! Et placerat natoque lacus non, integer penatibus elit auctor scelerisque, facilisis sed eu cras nisi penatibus in magnis pid aliquam augue porttitor in etiam et in mus! Urna sagittis augue ut pid? Nascetur! Habitasse ac, et, nisi dignissim cursus. Montes tortor, porta amet porta augue enim diam cras sit placerat ultrices! Lacus porttitor, porttitor proin! Phasellus! In, sit odio vut arcu, enim, rhoncus. Lacus sagittis! Aliquet, scelerisque elementum ac, adipiscing urna ut ut etiam adipiscing rhoncus vel, augue sit magna. Et proin adipiscing, etiam nunc montes porta dis magnis non est, scelerisque dolor pulvinar in, tristique, et! Ac a, lorem arcu ac nec sed porta massa amet.</p>

<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 13px; font-family: arial; line-height: normal; background: transparent;">Dignissim cum, integer ac magnis magnis elementum pellentesque tristique tempor adipiscing. Augue pid penatibus, duis ultrices sit, sed elementum lorem elit, phasellus et! Ut, porta porta ridiculus lacus sed, natoque a egestas augue elementum nunc tristique ac cum nec in porttitor, nascetur etiam scelerisque, et in integer integer velit! Augue mus, cum dignissim, nisi velit auctor porttitor pulvinar placerat. Vel! Pulvinar non enim mid, enim urna augue mauris lorem duis nascetur mid ac. Facilisis, nunc rhoncus lorem magna porta velit nunc? Aliquet elit amet? Scelerisque purus vel ac risus, montes tincidunt magna etiam ultricies elit nisi facilisis turpis, mauris, augue tincidunt? Aliquet natoque? Mid, facilisis, tincidunt etiam, parturient nascetur elementum rhoncus habitasse enim facilisis, in aliquam nascetur amet pid.</p>

<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 13px; font-family: arial; line-height: normal; background: transparent;">In scelerisque magna proin, elementum. Augue elit, turpis turpis ac platea, cursus ut turpis in diam ultrices dictumst phasellus purus tincidunt rhoncus egestas, dolor arcu sit, sit platea rhoncus placerat dictumst. Ultrices sed penatibus, turpis. Integer rhoncus ac dictumst placerat nec porttitor elementum et ut vel dis, nisi tincidunt! Cum. Nascetur, montes lacus dictumst montes pulvinar augue dis augue, sociis platea sed urna! Et est. Cum vel in mus! Amet sociis turpis et, porttitor sociis augue hac, aliquet. Magna! Arcu non, sed penatibus ac cras egestas ut? Parturient magnis? Ac tempor dis lundium ac, cum! Ultrices egestas porttitor porta augue tortor scelerisque hac et porta dis lorem arcu scelerisque platea! Urna augue lundium, elementum cras elementum et odio cursus.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => ' <p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 13px; font-family: arial; line-height: normal; background: transparent;">Tincidunt tristique egestas tempor quis vel sed elit porta, tincidunt! Egestas! Scelerisque, tristique vel odio vut lorem, rhoncus arcu auctor sit pulvinar non ac! Urna risus arcu in. Dignissim pellentesque habitasse ultricies in ut! Auctor arcu amet sit tincidunt nec platea turpis mauris adipiscing tristique dis, sit hac, porta ac, urna montes ut dolor, habitasse, porttitor, adipiscing pellentesque phasellus porta nisi ut tristique tincidunt tincidunt, a auctor dolor pulvinar sociis! Sagittis sed, integer parturient ac enim platea augue non tristique, ut. Integer porttitor habitasse lectus vel! Cursus, sociis, tempor et amet turpis elementum pid sit mus, elementum vel tincidunt elementum cum non, pellentesque vel in facilisis non est quis nec tortor. Hac porta porta amet enim pellentesque? Urna, ultrices, in.</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 13px; font-family: arial; line-height: normal; background: transparent;">Dis rhoncus ultricies tristique mid? Aenean non? Lectus est tincidunt tristique vel, nec nunc? Urna montes mus, scelerisque augue velit, et porttitor phasellus, sed eros in magna parturient tortor parturient non amet lectus? Urna ultrices. Pulvinar urna vel nisi? Est. Turpis tristique ridiculus augue nisi tempor pulvinar, vel. In aenean mus, auctor odio tempor sed scelerisque auctor eu sagittis? Enim purus? Ut placerat? Nisi lectus pulvinar lundium lorem! Enim. Pid magnis cras tortor magna augue, montes placerat, arcu placerat tincidunt porta rhoncus proin? Placerat rhoncus magna dolor arcu, purus, nisi! Amet. Dolor? Mauris sit elit urna et porta, in nunc? Diam proin dapibus. Placerat. Tincidunt nunc vel scelerisque ultricies mus lectus? Porttitor auctor vel rhoncus tincidunt pid, enim nisi.</p>
<div class="pp-image-style-description pp-image-style-description-right">
<div class="pp-image-style-description-content">
    <a href="http://default/sites/default/files/styles/lightbox_image_popup/public/bfastclub.jpg?itok=bAaRomV2" rel="lightbox[inline_image][&lt;p&gt;&lt;/p&gt;&lt;a href=&quot;/download/file/fid/45&quot; class=&quot;lightbox-download-link&quot;&gt;Download original image&lt;/a&gt;]"><img style="width: 200px; height: 200px; float: right;" typeof="foaf:Image" src="http://default/sites/default/files/styles/crop_square/public/bfastclub.jpg?itok=8Jej7mKb" width="200" height="200" alt="" title="" /></a>  </div>
<div class="pp-image-style-description-description">
      </div>
</div>

<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 13px; font-family: arial; line-height: normal; background: transparent;">Nec, sed urna! Diam nunc mattis! Nunc ultricies. Vut? Ut enim, cras! Et placerat natoque lacus non, integer penatibus elit auctor scelerisque, facilisis sed eu cras nisi penatibus in magnis pid aliquam augue porttitor in etiam et in mus! Urna sagittis augue ut pid? Nascetur! Habitasse ac, et, nisi dignissim cursus. Montes tortor, porta amet porta augue enim diam cras sit placerat ultrices! Lacus porttitor, porttitor proin! Phasellus! In, sit odio vut arcu, enim, rhoncus. Lacus sagittis! Aliquet, scelerisque elementum ac, adipiscing urna ut ut etiam adipiscing rhoncus vel, augue sit magna. Et proin adipiscing, etiam nunc montes porta dis magnis non est, scelerisque dolor pulvinar in, tristique, et! Ac a, lorem arcu ac nec sed porta massa amet.</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 13px; font-family: arial; line-height: normal; background: transparent;">Dignissim cum, integer ac magnis magnis elementum pellentesque tristique tempor adipiscing. Augue pid penatibus, duis ultrices sit, sed elementum lorem elit, phasellus et! Ut, porta porta ridiculus lacus sed, natoque a egestas augue elementum nunc tristique ac cum nec in porttitor, nascetur etiam scelerisque, et in integer integer velit! Augue mus, cum dignissim, nisi velit auctor porttitor pulvinar placerat. Vel! Pulvinar non enim mid, enim urna augue mauris lorem duis nascetur mid ac. Facilisis, nunc rhoncus lorem magna porta velit nunc? Aliquet elit amet? Scelerisque purus vel ac risus, montes tincidunt magna etiam ultricies elit nisi facilisis turpis, mauris, augue tincidunt? Aliquet natoque? Mid, facilisis, tincidunt etiam, parturient nascetur elementum rhoncus habitasse enim facilisis, in aliquam nascetur amet pid.</p>
<p style="margin-top: 0px; margin-bottom: 10px; outline: 0px; font-size: 13px; font-family: arial; line-height: normal; background: transparent;">In scelerisque magna proin, elementum. Augue elit, turpis turpis ac platea, cursus ut turpis in diam ultrices dictumst phasellus purus tincidunt rhoncus egestas, dolor arcu sit, sit platea rhoncus placerat dictumst. Ultrices sed penatibus, turpis. Integer rhoncus ac dictumst placerat nec porttitor elementum et ut vel dis, nisi tincidunt! Cum. Nascetur, montes lacus dictumst montes pulvinar augue dis augue, sociis platea sed urna! Et est. Cum vel in mus! Amet sociis turpis et, porttitor sociis augue hac, aliquet. Magna! Arcu non, sed penatibus ac cras egestas ut? Parturient magnis? Ac tempor dis lundium ac, cum! Ultrices egestas porttitor porta augue tortor scelerisque hac et porta dis lorem arcu scelerisque platea! Urna augue lundium, elementum cras elementum et odio cursus.</p>
 ',
        'safe_summary' => '  ',
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
  'subscriptions_notify' => TRUE,
  'date' => '2014-05-19 21:08:29 -0700',
  'author_uuid' => '5359c718-c7c8-4bf6-b60f-a5358f3c1eff',
);
  $nodes[] = array(
  'title' => '1.2 Computer and Network Usage Policy',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b0c024b8-9be1-4348-bf45-ccccfc596fa3',
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
        'target_id' => 197,
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
  'subscriptions_notify' => TRUE,
  'date' => '2014-05-19 21:19:23 -0700',
  'author_uuid' => '5359c718-c7c8-4bf6-b60f-a5358f3c1eff',
);
  $nodes[] = array(
  'title' => '1.1 Administrative Computing',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '9ce46e10-0376-44dd-acc5-6e433e24013f',
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
        'target_id' => 197,
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
  'subscriptions_notify' => TRUE,
  'date' => '2014-05-19 21:18:35 -0700',
  'author_uuid' => '5359c718-c7c8-4bf6-b60f-a5358f3c1eff',
);
  return $nodes;
}
