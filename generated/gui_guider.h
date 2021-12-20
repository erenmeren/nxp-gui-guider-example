/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"
#include "guider_fonts.h"

typedef struct
{
	lv_obj_t *Splash_Screen;
	lv_obj_t *Splash_Screen_main_container;
	lv_obj_t *Splash_Screen_progress_bar_label;
	lv_obj_t *Splash_Screen_welcome_label;
	lv_obj_t *Splash_Screen_logo;
	lv_obj_t *Splash_Screen_progress_bar;
	lv_obj_t *AccessPoint_Screen;
	lv_obj_t *AccessPoint_Screen_main_container;
	lv_obj_t *AccessPoint_Screen_ssid_password_label;
	lv_obj_t *AccessPoint_Screen_ssid_name_label;
	lv_obj_t *AccessPoint_Screen_label_2;
	lv_obj_t *AccessPoint_Screen_label_1;
	lv_obj_t *AccessPoint_Screen_logo;
	lv_obj_t *AccessPoint_Screen_qr_container;
	lv_obj_t *WifiPage_Screen;
	lv_obj_t *WifiPage_Screen_main_container;
	lv_obj_t *WifiPage_Screen_label_5;
	lv_obj_t *WifiPage_Screen_label_4;
	lv_obj_t *WifiPage_Screen_label_3;
	lv_obj_t *WifiPage_Screen_logo;
	lv_obj_t *WifiPage_Screen_qr_container;
	lv_obj_t *Activation_Screen;
	lv_obj_t *Activation_Screen_main_container;
	lv_obj_t *Activation_Screen_img_3;
	lv_obj_t *Activation_Screen_img_2;
	lv_obj_t *Activation_Screen_img_1;
	lv_obj_t *Activation_Screen_label_5;
	lv_obj_t *Activation_Screen_label_4;
	lv_obj_t *Activation_Screen_label_3;
	lv_obj_t *Activation_Screen_spinner;
	lv_obj_t *Activation_Screen_send_activation_email_btn;
	lv_obj_t *Activation_Screen_send_activation_email_btn_label;
	lv_obj_t *Activation_Screen_logo;
	lv_obj_t *Activation_Screen_cont_1;
	lv_obj_t *Activation_Screen_label_2;
	lv_obj_t *Activation_Screen_label_1;
	lv_obj_t *Home_Screen;
	lv_obj_t *Home_Screen_main_container;
	lv_obj_t *Home_Screen_menu_icon;
	lv_obj_t *Home_Screen_full_battery_icon;
	lv_obj_t *Home_Screen_full_wifi_icon;
	lv_obj_t *Home_Screen_info_label;
	lv_obj_t *Home_Screen_time_label;
	lv_obj_t *Home_Screen_logo;
	lv_obj_t *Home_Screen_qr_container;
	lv_obj_t *Loading_Screen;
	lv_obj_t *Loading_Screen_main_container;
	lv_obj_t *Loading_Screen_label_1;
	lv_obj_t *Loading_Screen_logo;
	lv_obj_t *Loading_Screen_img_1;
	lv_obj_t *Receipt_Screen;
	lv_obj_t *Receipt_Screen_main_container;
	lv_obj_t *Receipt_Screen_img_1;
	lv_obj_t *Receipt_Screen_timer_label;
	lv_obj_t *Receipt_Screen_label_1;
	lv_obj_t *Receipt_Screen_logo;
	lv_obj_t *Receipt_Screen_qr_container;
	lv_obj_t *Thanks_Screen;
	lv_obj_t *Thanks_Screen_main_container;
	lv_obj_t *Thanks_Screen_label_1;
	lv_obj_t *Thanks_Screen_logo;
	lv_obj_t *Thanks_Screen_tree_container;
	lv_obj_t *Thanks_Screen_tree_img;
	lv_obj_t *Thanks_Screen_tree_unit_label;
	lv_obj_t *Thanks_Screen_label_2;
	lv_obj_t *Thanks_Screen_co2_container;
	lv_obj_t *Thanks_Screen_co2_img;
	lv_obj_t *Thanks_Screen_co2_unit_label;
	lv_obj_t *Thanks_Screen_label_4;
	lv_obj_t *Thanks_Screen_water_container;
	lv_obj_t *Thanks_Screen_water_img;
	lv_obj_t *Thanks_Screen_water_unit_label;
	lv_obj_t *Thanks_Screen_label_6;
	lv_obj_t *Password_Screen;
	lv_obj_t *Password_Screen_main_container;
	lv_obj_t *Password_Screen_btn_12;
	lv_obj_t *Password_Screen_btn_12_label;
	lv_obj_t *Password_Screen_back_btn;
	lv_obj_t *Password_Screen_back_btn_label;
	lv_obj_t *Password_Screen_label_1;
	lv_obj_t *Password_Screen_btn_10;
	lv_obj_t *Password_Screen_btn_10_label;
	lv_obj_t *Password_Screen_btn_9;
	lv_obj_t *Password_Screen_btn_9_label;
	lv_obj_t *Password_Screen_btn_8;
	lv_obj_t *Password_Screen_btn_8_label;
	lv_obj_t *Password_Screen_btn_7;
	lv_obj_t *Password_Screen_btn_7_label;
	lv_obj_t *Password_Screen_btn_6;
	lv_obj_t *Password_Screen_btn_6_label;
	lv_obj_t *Password_Screen_btn_5;
	lv_obj_t *Password_Screen_btn_5_label;
	lv_obj_t *Password_Screen_btn_4;
	lv_obj_t *Password_Screen_btn_4_label;
	lv_obj_t *Password_Screen_btn_3;
	lv_obj_t *Password_Screen_btn_3_label;
	lv_obj_t *Password_Screen_btn_2;
	lv_obj_t *Password_Screen_btn_2_label;
	lv_obj_t *Password_Screen_btn_1;
	lv_obj_t *Password_Screen_btn_1_label;
	lv_obj_t *Password_Screen_logo;
	lv_obj_t *Password_Screen_led_1;
	lv_obj_t *Password_Screen_led_2;
	lv_obj_t *Password_Screen_led_3;
	lv_obj_t *Password_Screen_led_4;
	lv_obj_t *Settings_Screen;
	lv_obj_t *Settings_Screen_main_container;
	lv_obj_t *Settings_Screen_back_btn;
	lv_obj_t *Settings_Screen_back_btn_label;
	lv_obj_t *Settings_Screen_btn_4;
	lv_obj_t *Settings_Screen_btn_4_label;
	lv_obj_t *Settings_Screen_btn_3;
	lv_obj_t *Settings_Screen_btn_3_label;
	lv_obj_t *Settings_Screen_btn_2;
	lv_obj_t *Settings_Screen_btn_2_label;
	lv_obj_t *Settings_Screen_btn_1;
	lv_obj_t *Settings_Screen_btn_1_label;
	lv_obj_t *Settings_Screen_logo;
	lv_obj_t *Connectivity_Screen;
	lv_obj_t *Connectivity_Screen_main_container;
	lv_obj_t *Connectivity_Screen_btn_1;
	lv_obj_t *Connectivity_Screen_btn_1_label;
	lv_obj_t *Connectivity_Screen_label_6;
	lv_obj_t *Connectivity_Screen_label_5;
	lv_obj_t *Connectivity_Screen_label_4;
	lv_obj_t *Connectivity_Screen_label_3;
	lv_obj_t *Connectivity_Screen_label_2;
	lv_obj_t *Connectivity_Screen_label_1;
	lv_obj_t *Connectivity_Screen_logo;
	lv_obj_t *WiFiReset_Screen;
	lv_obj_t *WiFiReset_Screen_main_container;
	lv_obj_t *WiFiReset_Screen_btn_2;
	lv_obj_t *WiFiReset_Screen_btn_2_label;
	lv_obj_t *WiFiReset_Screen_btn_1;
	lv_obj_t *WiFiReset_Screen_btn_1_label;
	lv_obj_t *WiFiReset_Screen_label_3;
	lv_obj_t *WiFiReset_Screen_label_2;
	lv_obj_t *WiFiReset_Screen_label_1;
	lv_obj_t *WiFiReset_Screen_logo;
	lv_obj_t *FactoryReset_Screen;
	lv_obj_t *FactoryReset_Screen_main_container;
	lv_obj_t *FactoryReset_Screen_btn_2;
	lv_obj_t *FactoryReset_Screen_btn_2_label;
	lv_obj_t *FactoryReset_Screen_btn_1;
	lv_obj_t *FactoryReset_Screen_btn_1_label;
	lv_obj_t *FactoryReset_Screen_label_3;
	lv_obj_t *FactoryReset_Screen_label_2;
	lv_obj_t *FactoryReset_Screen_label_1;
	lv_obj_t *FactoryReset_Screen_logo;
	lv_obj_t *About_Screen;
	lv_obj_t *About_Screen_main_container;
	lv_obj_t *About_Screen_label_4;
	lv_obj_t *About_Screen_btn_1;
	lv_obj_t *About_Screen_btn_1_label;
	lv_obj_t *About_Screen_label_3;
	lv_obj_t *About_Screen_label_2;
	lv_obj_t *About_Screen_label_1;
	lv_obj_t *About_Screen_logo;
}lv_ui;

void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_Splash_Screen(lv_ui *ui);
void setup_scr_AccessPoint_Screen(lv_ui *ui);
void setup_scr_WifiPage_Screen(lv_ui *ui);
void setup_scr_Activation_Screen(lv_ui *ui);
void setup_scr_Home_Screen(lv_ui *ui);
void setup_scr_Loading_Screen(lv_ui *ui);
void setup_scr_Receipt_Screen(lv_ui *ui);
void setup_scr_Thanks_Screen(lv_ui *ui);
void setup_scr_Password_Screen(lv_ui *ui);
void setup_scr_Settings_Screen(lv_ui *ui);
void setup_scr_Connectivity_Screen(lv_ui *ui);
void setup_scr_WiFiReset_Screen(lv_ui *ui);
void setup_scr_FactoryReset_Screen(lv_ui *ui);
void setup_scr_About_Screen(lv_ui *ui);
LV_IMG_DECLARE(_Tree_alpha_45x45);
LV_IMG_DECLARE(_CO_alpha_45x45);
LV_IMG_DECLARE(_Water_alpha_45x45);
LV_IMG_DECLARE(_Icon_Swipe_alpha_36x22);
LV_IMG_DECLARE(_NFCLogo_alpha_64x54);
LV_IMG_DECLARE(_Battery_alpha_21x12);
LV_IMG_DECLARE(_WiFiSignal_alpha_13x12);
LV_IMG_DECLARE(_Printing_alpha_177x161);
LV_IMG_DECLARE(_checkblack_alpha_23x23);
LV_IMG_DECLARE(_Logo_alpha_63x11);

#ifdef __cplusplus
}
#endif
#endif