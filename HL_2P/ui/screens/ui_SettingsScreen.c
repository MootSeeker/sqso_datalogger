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


}
