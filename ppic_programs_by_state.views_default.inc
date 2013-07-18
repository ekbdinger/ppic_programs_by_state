<?php
/**
 * @file
 * ppic_programs_by_state.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ppic_programs_by_state_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ppic_state_test2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PPIC state test2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Available Programs by State';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_ppic_state',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>Start searching now or browse through the list</h3>
<p>&nbsp;</p>';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '&nbsp; &nbsp;&nbsp; &nbsp;&nbsp;[title]
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_ppic_state']['id'] = 'field_ppic_state';
  $handler->display->display_options['fields']['field_ppic_state']['table'] = 'field_data_field_ppic_state';
  $handler->display->display_options['fields']['field_ppic_state']['field'] = 'field_ppic_state';
  $handler->display->display_options['fields']['field_ppic_state']['label'] = '';
  $handler->display->display_options['fields']['field_ppic_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ppic_state']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ppic_state']['alter']['text'] = '<h2>[field_ppic_state]</h2>';
  $handler->display->display_options['fields']['field_ppic_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ppic_state']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ppic_state']['delta_offset'] = '0';
  /* Field: Content: Specialty */
  $handler->display->display_options['fields']['field_ppic_specialty']['id'] = 'field_ppic_specialty';
  $handler->display->display_options['fields']['field_ppic_specialty']['table'] = 'field_data_field_ppic_specialty';
  $handler->display->display_options['fields']['field_ppic_specialty']['field'] = 'field_ppic_specialty';
  $handler->display->display_options['fields']['field_ppic_specialty']['label'] = '';
  $handler->display->display_options['fields']['field_ppic_specialty']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ppic_specialty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ppic_specialty']['delta_offset'] = '0';
  /* Sort criterion: Content: State (field_ppic_state) */
  $handler->display->display_options['sorts']['field_ppic_state_value']['id'] = 'field_ppic_state_value';
  $handler->display->display_options['sorts']['field_ppic_state_value']['table'] = 'field_data_field_ppic_state';
  $handler->display->display_options['sorts']['field_ppic_state_value']['field'] = 'field_ppic_state_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ppic_program' => 'ppic_program',
  );
  /* Filter criterion: Content: State (field_ppic_state) */
  $handler->display->display_options['filters']['field_ppic_state_value']['id'] = 'field_ppic_state_value';
  $handler->display->display_options['filters']['field_ppic_state_value']['table'] = 'field_data_field_ppic_state';
  $handler->display->display_options['filters']['field_ppic_state_value']['field'] = 'field_ppic_state_value';
  $handler->display->display_options['filters']['field_ppic_state_value']['value'] = array(
    'all' => 'all',
    'Nat' => 'Nat',
    'AL' => 'AL',
    'AK' => 'AK',
    'AZ' => 'AZ',
    'AR' => 'AR',
    'CA' => 'CA',
    'CO' => 'CO',
    'CT' => 'CT',
    'DE' => 'DE',
    'DC' => 'DC',
    'FL' => 'FL',
    'GA' => 'GA',
    'HI' => 'HI',
    'ID' => 'ID',
    'IL' => 'IL',
    'IN' => 'IN',
    'IA' => 'IA',
    'KS' => 'KS',
    'KY' => 'KY',
    'LA' => 'LA',
    'ME' => 'ME',
    'MD' => 'MD',
    'MA' => 'MA',
    'MI' => 'MI',
    'MN' => 'MN',
    'MS' => 'MS',
    'MO' => 'MO',
    'MT' => 'MT',
    'NE' => 'NE',
    'NV' => 'NV',
    'NH' => 'NH',
    'NJ' => 'NJ',
    'NM' => 'NM',
    'NY' => 'NY',
    'NC' => 'NC',
    'ND' => 'ND',
    'OH' => 'OH',
    'OK' => 'OK',
    'OR' => 'OR',
    'PA' => 'PA',
    'RI' => 'RI',
    'SC' => 'SC',
    'SD' => 'SD',
    'TN' => 'TN',
    'TX' => 'TX',
    'UT' => 'UT',
    'VT' => 'VT',
    'VA' => 'VA',
    'WA' => 'WA',
    'WV' => 'WV',
    'WI' => 'WI',
    'WY' => 'WY',
  );
  $handler->display->display_options['filters']['field_ppic_state_value']['expose']['operator_id'] = 'field_ppic_state_value_op';
  $handler->display->display_options['filters']['field_ppic_state_value']['expose']['label'] = 'State (field_ppic_state)';
  $handler->display->display_options['filters']['field_ppic_state_value']['expose']['operator'] = 'field_ppic_state_value_op';
  $handler->display->display_options['filters']['field_ppic_state_value']['expose']['identifier'] = 'field_ppic_state_value';
  $handler->display->display_options['filters']['field_ppic_state_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_ppic_state_value']['group_info']['label'] = 'State (field_ppic_state)';
  $handler->display->display_options['filters']['field_ppic_state_value']['group_info']['identifier'] = 'field_ppic_state_value';
  $handler->display->display_options['filters']['field_ppic_state_value']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_ppic_state_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
    2 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
    3 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
  );
  /* Filter criterion: Content: Specialty (field_ppic_specialty) */
  $handler->display->display_options['filters']['field_ppic_specialty_value']['id'] = 'field_ppic_specialty_value';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['table'] = 'field_data_field_ppic_specialty';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['field'] = 'field_ppic_specialty_value';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ppic_specialty_value']['expose']['operator_id'] = 'field_ppic_specialty_value_op';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['expose']['label'] = 'Specialty';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['expose']['operator'] = 'field_ppic_specialty_value_op';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['expose']['identifier'] = 'field_ppic_specialty_value';
  $handler->display->display_options['filters']['field_ppic_specialty_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => 0,
    1 => 0,
    23 => 0,
    21 => 0,
    36 => 0,
    43 => 0,
    39 => 0,
    25 => 0,
    46 => 0,
    9 => 0,
    31 => 0,
    19 => 0,
    14 => 0,
    15 => 0,
    13 => 0,
    5 => 0,
    22 => 0,
    12 => 0,
    30 => 0,
    38 => 0,
    11 => 0,
    42 => 0,
    40 => 0,
    29 => 0,
    32 => 0,
    35 => 0,
    41 => 0,
    28 => 0,
    16 => 0,
    45 => 0,
    27 => 0,
    24 => 0,
    37 => 0,
    26 => 0,
    34 => 0,
    18 => 0,
    17 => 0,
    33 => 0,
    44 => 0,
    20 => 0,
    7 => 0,
    8 => 0,
    47 => 0,
    48 => 0,
    49 => 0,
    50 => 0,
    51 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'ppic-state-test2';
  $export['ppic_state_test2'] = $view;

  return $export;
}
