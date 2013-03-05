<?php
/**
 * @file
 * lullablog.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function lullablog_user_default_roles() {
  $roles = array();

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => '5',
  );

  return $roles;
}
