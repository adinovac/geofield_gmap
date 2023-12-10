<?php

/**
 * @file
 * Admin pages for Geofield Gmap.
 */

/**
 * Form builder; Geofield Gmap admin settings form.
 *
 * @ingroup forms
 * @see system_settings_form()
 */
function geofield_gmap_admin_settings($form, &$form_state) {

  $form['#config'] = 'geofield_gmap.settings';
  $form['geofield_gmap_google_api_key'] = array(
    '#type' => 'textfield',
    '#title' => t("Google Api Key"),
    '#default_value' => config_get('geofield_gmap.settings', 'geofield_gmap_google_api_key'),
  );

  return system_settings_form($form);

}
