<?php
/**
 * @file
 * pushtape_discography_democontent.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function pushtape_discography_democontent_content_defaults() {
  $content = array();

  $content['pushtape-discography-defaultcontent-1'] = (object) array(
    'exported_path' => 'content/demo-tape',
    'title' => 'The Demo Tape',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'album',
    'language' => 'und',
    'created' => '1340758909',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'pushtape-discography-defaultcontent-1',
    'body' => array(),
  );

  $content['pushtape-discography-defaultcontent-2'] = (object) array(
    'exported_path' => 'content/lonesome-night',
    'title' => 'A lonesome night',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'track',
    'language' => 'und',
    'created' => '1340758680',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'pushtape-discography-defaultcontent-2',
    'body' => array(),
    'field_album' => array(
      'und' => array(
        0 => array(
          'target_id' => '6',
        ),
      ),
    ),
    'field_artist_term' => array(
      'und' => array(
        0 => array(
          'tid' => '1',
        ),
      ),
    ),
    'field_license' => array(
      'und' => array(
        0 => array(
          'value' => 'cc_asa',
        ),
      ),
    ),
    'field_release_date' => array(
      'und' => array(
        0 => array(
          'value' => '2013',
          'format' => NULL,
          'safe_value' => '2013',
        ),
      ),
    ),
  );

  $content['pushtape-discography-defaultcontent-3'] = (object) array(
    'exported_path' => 'content/scared-light',
    'title' => 'scared of the light',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'track',
    'language' => 'und',
    'created' => '1340758680',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'pushtape-discography-defaultcontent-3',
    'body' => array(),
    'field_album' => array(
      'und' => array(
        0 => array(
          'target_id' => '6',
        ),
      ),
    ),
    'field_artist_term' => array(
      'und' => array(
        0 => array(
          'tid' => '1',
        ),
      ),
    ),
    'field_license' => array(
      'und' => array(
        0 => array(
          'value' => 'cc_asa',
        ),
      ),
    ),
  );

  $content['pushtape-discography-defaultcontent-4'] = (object) array(
    'exported_path' => 'content/trying-too-easy',
    'title' => 'trying too easy',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'track',
    'language' => 'und',
    'created' => '1340758680',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'pushtape-discography-defaultcontent-4',
    'body' => array(),
    'field_album' => array(
      'und' => array(
        0 => array(
          'target_id' => '6',
        ),
      ),
    ),
    'field_artist_term' => array(
      'und' => array(
        0 => array(
          'tid' => '1',
        ),
      ),
    ),
    'field_license' => array(
      'und' => array(
        0 => array(
          'value' => 'cc_asa',
        ),
      ),
    ),
  );

return $content;
}
