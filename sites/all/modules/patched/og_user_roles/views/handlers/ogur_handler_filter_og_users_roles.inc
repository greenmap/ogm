<?php
// $Id: ogur_handler_filter_og_users_roles.inc,v 1.1.2.1 2009/01/30 07:32:44 somebodysysop Exp $
/**
 * Filter handler for og users roles
 */
class ogur_handler_filter_og_users_roles extends views_handler_filter_many_to_one {
  function get_value_options() {
    $this->value_options = user_roles(TRUE);
    unset($this->value_options[DRUPAL_AUTHENTICATED_RID]);
  }
}