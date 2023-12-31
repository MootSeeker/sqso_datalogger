// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: HL_2P

#include "../ui.h"

void ui_SettingsScreen_screen_init(void)
{
ui_SettingsScreen = lv_obj_create(NULL);
lv_obj_clear_flag( ui_SettingsScreen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Title1 = lv_label_create(ui_SettingsScreen);
lv_obj_set_width( ui_Title1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Title1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Title1, 0 );
lv_obj_set_y( ui_Title1, -220 );
lv_obj_set_align( ui_Title1, LV_ALIGN_CENTER );
lv_label_set_text(ui_Title1,"Settings");

ui_PanelTopHeader1 = lv_obj_create(ui_SettingsScreen);
lv_obj_set_width( ui_PanelTopHeader1, 320);
lv_obj_set_height( ui_PanelTopHeader1, 40);
lv_obj_clear_flag( ui_PanelTopHeader1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_PanelTopHeader1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_PanelTopHeader1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_PanelTopHeader1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LbTitleHome1 = lv_label_create(ui_PanelTopHeader1);
lv_obj_set_width( ui_LbTitleHome1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LbTitleHome1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_LbTitleHome1, LV_ALIGN_CENTER );
lv_label_set_text(ui_LbTitleHome1,"HL-2P");

ui_LbTime1 = lv_label_create(ui_PanelTopHeader1);
lv_obj_set_width( ui_LbTime1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LbTime1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_LbTime1, -138 );
lv_obj_set_y( ui_LbTime1, -9 );
lv_obj_set_align( ui_LbTime1, LV_ALIGN_CENTER );
lv_label_set_text(ui_LbTime1,"10:15");

ui_LbAmPm1 = lv_label_create(ui_PanelTopHeader1);
lv_obj_set_width( ui_LbAmPm1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LbAmPm1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_LbAmPm1, -109 );
lv_obj_set_y( ui_LbAmPm1, -9 );
lv_obj_set_align( ui_LbAmPm1, LV_ALIGN_CENTER );
lv_label_set_text(ui_LbAmPm1,"AM");

ui_LbDate1 = lv_label_create(ui_PanelTopHeader1);
lv_obj_set_width( ui_LbDate1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LbDate1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_LbDate1, -126 );
lv_obj_set_y( ui_LbDate1, 8 );
lv_obj_set_align( ui_LbDate1, LV_ALIGN_CENTER );
lv_label_set_text(ui_LbDate1,"07/10/23");

ui_LbBatLevel1 = lv_label_create(ui_PanelTopHeader1);
lv_obj_set_width( ui_LbBatLevel1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LbBatLevel1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_LbBatLevel1, 130 );
lv_obj_set_y( ui_LbBatLevel1, 0 );
lv_obj_set_align( ui_LbBatLevel1, LV_ALIGN_CENTER );
lv_label_set_text(ui_LbBatLevel1,"BAT");

ui_LbBleLogo1 = lv_label_create(ui_PanelTopHeader1);
lv_obj_set_width( ui_LbBleLogo1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LbBleLogo1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_LbBleLogo1, 90 );
lv_obj_set_y( ui_LbBleLogo1, 0 );
lv_obj_set_align( ui_LbBleLogo1, LV_ALIGN_CENTER );
lv_label_set_text(ui_LbBleLogo1,"BLE");

ui_Panel_Content1 = lv_obj_create(ui_SettingsScreen);
lv_obj_set_width( ui_Panel_Content1, 320);
lv_obj_set_height( ui_Panel_Content1, 440);
lv_obj_set_x( ui_Panel_Content1, 0 );
lv_obj_set_y( ui_Panel_Content1, 20 );
lv_obj_set_align( ui_Panel_Content1, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_Panel_Content1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Panel_Content1, lv_color_hex(0xF8F8F9), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Panel_Content1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_color(ui_Panel_Content1, lv_color_hex(0xDCE5ED), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_main_stop(ui_Panel_Content1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_stop(ui_Panel_Content1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_dir(ui_Panel_Content1, LV_GRAD_DIR_VER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Panel_Content1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_PanelSettings = lv_obj_create(ui_SettingsScreen);
lv_obj_set_width( ui_PanelSettings, 300);
lv_obj_set_height( ui_PanelSettings, 340);
lv_obj_set_x( ui_PanelSettings, 10 );
lv_obj_set_y( ui_PanelSettings, -90 );
lv_obj_set_align( ui_PanelSettings, LV_ALIGN_BOTTOM_LEFT );
lv_obj_clear_flag( ui_PanelSettings, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_PanelDeviceInformation = lv_obj_create(ui_PanelSettings);
lv_obj_set_width( ui_PanelDeviceInformation, 260);
lv_obj_set_height( ui_PanelDeviceInformation, 50);
lv_obj_set_x( ui_PanelDeviceInformation, 0 );
lv_obj_set_y( ui_PanelDeviceInformation, -260 );
lv_obj_set_align( ui_PanelDeviceInformation, LV_ALIGN_BOTTOM_MID );
lv_obj_clear_flag( ui_PanelDeviceInformation, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_PanelDeviceInformation, lv_color_hex(0x525252), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_PanelDeviceInformation, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LbMenuDevInf = lv_label_create(ui_PanelDeviceInformation);
lv_obj_set_width( ui_LbMenuDevInf, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LbMenuDevInf, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_LbMenuDevInf, LV_ALIGN_CENTER );
lv_label_set_text(ui_LbMenuDevInf,"Device Information");

ui_PanelDeviceSettings = lv_obj_create(ui_PanelSettings);
lv_obj_set_width( ui_PanelDeviceSettings, 260);
lv_obj_set_height( ui_PanelDeviceSettings, 50);
lv_obj_set_x( ui_PanelDeviceSettings, 0 );
lv_obj_set_y( ui_PanelDeviceSettings, -200 );
lv_obj_set_align( ui_PanelDeviceSettings, LV_ALIGN_BOTTOM_MID );
lv_obj_clear_flag( ui_PanelDeviceSettings, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_PanelDeviceSettings, lv_color_hex(0x525252), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_PanelDeviceSettings, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LbMenuDevInf1 = lv_label_create(ui_PanelDeviceSettings);
lv_obj_set_width( ui_LbMenuDevInf1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LbMenuDevInf1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_LbMenuDevInf1, LV_ALIGN_CENTER );
lv_label_set_text(ui_LbMenuDevInf1,"Device Settings");

ui_PanelFwUpdate = lv_obj_create(ui_PanelSettings);
lv_obj_set_width( ui_PanelFwUpdate, 260);
lv_obj_set_height( ui_PanelFwUpdate, 50);
lv_obj_set_x( ui_PanelFwUpdate, 0 );
lv_obj_set_y( ui_PanelFwUpdate, -60 );
lv_obj_set_align( ui_PanelFwUpdate, LV_ALIGN_BOTTOM_MID );
lv_obj_clear_flag( ui_PanelFwUpdate, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_PanelFwUpdate, lv_color_hex(0x525252), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_PanelFwUpdate, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LbMenuUpdate = lv_label_create(ui_PanelFwUpdate);
lv_obj_set_width( ui_LbMenuUpdate, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LbMenuUpdate, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_LbMenuUpdate, LV_ALIGN_CENTER );
lv_label_set_text(ui_LbMenuUpdate,"Firmware Update Screen");

ui_PanelCleanMemory = lv_obj_create(ui_PanelSettings);
lv_obj_set_width( ui_PanelCleanMemory, 260);
lv_obj_set_height( ui_PanelCleanMemory, 50);
lv_obj_set_align( ui_PanelCleanMemory, LV_ALIGN_BOTTOM_MID );
lv_obj_clear_flag( ui_PanelCleanMemory, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_PanelCleanMemory, lv_color_hex(0x525252), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_PanelCleanMemory, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LbMenuClean = lv_label_create(ui_PanelCleanMemory);
lv_obj_set_width( ui_LbMenuClean, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LbMenuClean, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_LbMenuClean, LV_ALIGN_CENTER );
lv_label_set_text(ui_LbMenuClean,"Clean Memory");

ui_PanelButton1 = lv_obj_create(ui_SettingsScreen);
lv_obj_set_width( ui_PanelButton1, 300);
lv_obj_set_height( ui_PanelButton1, 70);
lv_obj_set_x( ui_PanelButton1, 10 );
lv_obj_set_y( ui_PanelButton1, -10 );
lv_obj_set_align( ui_PanelButton1, LV_ALIGN_BOTTOM_LEFT );
lv_obj_clear_flag( ui_PanelButton1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_BtnBack = lv_btn_create(ui_PanelButton1);
lv_obj_set_width( ui_BtnBack, 270);
lv_obj_set_height( ui_BtnBack, 40);
lv_obj_set_align( ui_BtnBack, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_BtnBack, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_BtnBack, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_LbBtnBack = lv_label_create(ui_PanelButton1);
lv_obj_set_width( ui_LbBtnBack, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LbBtnBack, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_LbBtnBack, LV_ALIGN_CENTER );
lv_label_set_text(ui_LbBtnBack,"Back");

lv_obj_add_event_cb(ui_LbMenuUpdate, ui_event_LbMenuUpdate, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_PanelFwUpdate, ui_event_PanelFwUpdate, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_PanelCleanMemory, ui_event_PanelCleanMemory, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_BtnBack, ui_event_BtnBack, LV_EVENT_ALL, NULL);

}
