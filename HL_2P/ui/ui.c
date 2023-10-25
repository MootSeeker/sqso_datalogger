// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: HL_2P

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_HomeScreen
void ui_HomeScreen_screen_init(void);
lv_obj_t *ui_HomeScreen;
void ui_event_PanelValues( lv_event_t * e);
lv_obj_t *ui_PanelValues;
lv_obj_t *ui_LbValue1;
lv_obj_t *ui_LbValue2;
lv_obj_t *ui_LbValue3;
lv_obj_t *ui_LbUnitValue1;
lv_obj_t *ui_LbUnitValue2;
lv_obj_t *ui_LbUnitValue3;
lv_obj_t *ui_LbTrendValue1;
lv_obj_t *ui_LbTrendValue2;
lv_obj_t *ui_LbTrendValue3;
lv_obj_t *ui_LbInfoText;
lv_obj_t *ui_LbProbeName;
lv_obj_t *ui_PanelTopHeader;
lv_obj_t *ui_LbTitleHome;
lv_obj_t *ui_LbTime;
lv_obj_t *ui_LbAmPm;
lv_obj_t *ui_LbDate;
lv_obj_t *ui_LbBatLevel;
lv_obj_t *ui_LbBleLogo;
lv_obj_t *ui_PanelButton;
void ui_event_BtnLog( lv_event_t * e);
lv_obj_t *ui_BtnLog;
void ui_event_BtnLog1( lv_event_t * e);
lv_obj_t *ui_BtnLog1;
void ui_event_BtnLog2( lv_event_t * e);
lv_obj_t *ui_BtnLog2;
lv_obj_t *ui_LbLog;
lv_obj_t *ui_LbSettings;
lv_obj_t *ui_LbPwr;


// SCREEN: ui_SettingsScreen
void ui_SettingsScreen_screen_init(void);
lv_obj_t *ui_SettingsScreen;
lv_obj_t *ui_Title1;
lv_obj_t *ui_PanelTopHeader1;
lv_obj_t *ui_LbTitleHome1;
lv_obj_t *ui_LbTime1;
lv_obj_t *ui_LbAmPm1;
lv_obj_t *ui_LbDate1;
lv_obj_t *ui_LbBatLevel1;
lv_obj_t *ui_LbBleLogo1;
lv_obj_t *ui_Panel_Content1;
lv_obj_t *ui_PanelSettings;
lv_obj_t *ui_PanelDeviceInformation;
lv_obj_t *ui_LbMenuDevInf;
lv_obj_t *ui_PanelDeviceSettings;
lv_obj_t *ui_LbMenuDevInf1;
void ui_event_PanelFwUpdate( lv_event_t * e);
lv_obj_t *ui_PanelFwUpdate;
void ui_event_LbMenuUpdate( lv_event_t * e);
lv_obj_t *ui_LbMenuUpdate;
void ui_event_PanelCleanMemory( lv_event_t * e);
lv_obj_t *ui_PanelCleanMemory;
lv_obj_t *ui_LbMenuClean;
lv_obj_t *ui_PanelButton1;
void ui_event_BtnBack( lv_event_t * e);
lv_obj_t *ui_BtnBack;
lv_obj_t *ui_LbBtnBack;


// SCREEN: ui_LogScreen
void ui_LogScreen_screen_init(void);
lv_obj_t *ui_LogScreen;
lv_obj_t *ui_Panel_Content2;
lv_obj_t *ui_Label3;
lv_obj_t *ui_Label4;
lv_obj_t *ui_Label5;
lv_obj_t *ui_Label6;
lv_obj_t *ui_Label7;
lv_obj_t *ui_Label8;
lv_obj_t *ui_PanelButton2;
void ui_event_BtnBack1( lv_event_t * e);
lv_obj_t *ui_BtnBack1;
lv_obj_t *ui_LbBtnBack1;
lv_obj_t *ui_PanelTopHeader2;
lv_obj_t *ui_LbTitleHome2;
lv_obj_t *ui_LbTime2;
lv_obj_t *ui_LbAmPm2;
lv_obj_t *ui_LbDate2;
lv_obj_t *ui_LbBatLevel2;
lv_obj_t *ui_LbBleLogo2;
lv_obj_t *ui_BtnGraph;
void ui_event_LbBtnGraph( lv_event_t * e);
lv_obj_t *ui_LbBtnGraph;
void ui_event_BtnStart( lv_event_t * e);
lv_obj_t *ui_BtnStart;
lv_obj_t *ui_LbBtnPlay;
void ui_event_BtnStop( lv_event_t * e);
lv_obj_t *ui_BtnStop;
lv_obj_t *ui_LbBtnPlay1;


// SCREEN: ui_FwUpdate
void ui_FwUpdate_screen_init(void);
lv_obj_t *ui_FwUpdate;
lv_obj_t *ui_Title3;
lv_obj_t *ui_Panel_Content3;
lv_obj_t *ui_Label1;
lv_obj_t *ui_Label2;
lv_obj_t *ui_Bar2;
lv_obj_t *ui_Image1;
lv_obj_t *ui_PanelButton3;
void ui_event_BtnBack2( lv_event_t * e);
lv_obj_t *ui_BtnBack2;
lv_obj_t *ui_LbBtnCancel;
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *ui_imgset_1385206223[1] = {&ui_img_1992300975};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_PanelValues( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT  ) {
lv_indev_wait_release(lv_indev_get_act());
      change_value_probe( e );
}
}
void ui_event_BtnLog( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_LogScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_LogScreen_screen_init);
}
}
void ui_event_BtnLog1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_SettingsScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_SettingsScreen_screen_init);
}
}
void ui_event_BtnLog2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      lv_btn_pwr( e );
}
}
void ui_event_PanelFwUpdate( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_FwUpdate, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_FwUpdate_screen_init);
}
}
void ui_event_LbMenuUpdate( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_FwUpdate, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_FwUpdate_screen_init);
}
}
void ui_event_PanelCleanMemory( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_HomeScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_HomeScreen_screen_init);
      clear_memory( e );
}
}
void ui_event_BtnBack( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_HomeScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_HomeScreen_screen_init);
}
}
void ui_event_BtnBack1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_HomeScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_HomeScreen_screen_init);
}
}
void ui_event_LbBtnGraph( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      showGraph( e );
}
}
void ui_event_BtnStart( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      start_log( e );
}
}
void ui_event_BtnStop( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      stop_Log( e );
}
}
void ui_event_BtnBack2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_SettingsScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_SettingsScreen_screen_init);
}
}

///////////////////// SCREENS ////////////////////

void ui_init( void )
{LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_HomeScreen_screen_init();
ui_SettingsScreen_screen_init();
ui_LogScreen_screen_init();
ui_FwUpdate_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_HomeScreen);
}
