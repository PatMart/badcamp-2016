<?php
/**
 * @file
 * badcamp_jobs_board_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function badcamp_jobs_board_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'jobs';
  $page->task = 'page';
  $page->admin_title = 'Jobs Board';
  $page->admin_description = '';
  $page->path = 'jobs';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Job Board',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_jobs_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'jobs';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(),
    ),
  );
  $display = new panels_display();
  $display->layout = 'badcamp2016_1col';
  $display->layout_settings = array(
    'suppress_page_title' => 1,
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'content' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Job Opportunities';
  $display->uuid = '2592c79e-3d90-4aed-98d0-00ff16f35000';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d793ccd7-0ed9-4ef0-b779-63e6f794c1fe';
    $pane->panel = 'content';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Add Job Link',
      'title' => '',
      'body' => '<p><a href="/node/add/job-posting" class="secondary button">Add Job --</a></p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd793ccd7-0ed9-4ef0-b779-63e6f794c1fe';
    $display->content['new-d793ccd7-0ed9-4ef0-b779-63e6f794c1fe'] = $pane;
    $display->panels['content'][0] = 'new-d793ccd7-0ed9-4ef0-b779-63e6f794c1fe';
    $pane = new stdClass();
    $pane->pid = 'new-d5db0382-84b3-4ae1-a22c-0dfd17876e6a';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'jobs-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'badcamp-default',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd5db0382-84b3-4ae1-a22c-0dfd17876e6a';
    $display->content['new-d5db0382-84b3-4ae1-a22c-0dfd17876e6a'] = $pane;
    $display->panels['content'][1] = 'new-d5db0382-84b3-4ae1-a22c-0dfd17876e6a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['jobs'] = $page;

  return $pages;

}
