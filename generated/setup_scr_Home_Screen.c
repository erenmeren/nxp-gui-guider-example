/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_Home_Screen(lv_ui *ui){

	//Write codes Home_Screen
	ui->Home_Screen = lv_obj_create(NULL, NULL);

	//Write codes Home_Screen_main_container
	ui->Home_Screen_main_container = lv_cont_create(ui->Home_Screen, NULL);

	//Write style LV_CONT_PART_MAIN for Home_Screen_main_container
	static lv_style_t style_Home_Screen_main_container_main;
	lv_style_reset(&style_Home_Screen_main_container_main);

	//Write style state: LV_STATE_DEFAULT for style_Home_Screen_main_container_main
	lv_style_set_radius(&style_Home_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Home_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_color(&style_Home_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_dir(&style_Home_Screen_main_container_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Home_Screen_main_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Home_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_Home_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Home_Screen_main_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_Home_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Home_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Home_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Home_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Home_Screen_main_container, LV_CONT_PART_MAIN, &style_Home_Screen_main_container_main);
	lv_obj_set_pos(ui->Home_Screen_main_container, 0, 0);
	lv_obj_set_size(ui->Home_Screen_main_container, 320, 240);
	lv_obj_set_click(ui->Home_Screen_main_container, false);

	//Write codes Home_Screen_menu_icon
	ui->Home_Screen_menu_icon = lv_img_create(ui->Home_Screen_main_container, NULL);

	//Write style LV_IMG_PART_MAIN for Home_Screen_menu_icon
	static lv_style_t style_Home_Screen_menu_icon_main;
	lv_style_reset(&style_Home_Screen_menu_icon_main);

	//Write style state: LV_STATE_DEFAULT for style_Home_Screen_menu_icon_main
	lv_style_set_image_recolor(&style_Home_Screen_menu_icon_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Home_Screen_menu_icon_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Home_Screen_menu_icon_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Home_Screen_menu_icon, LV_IMG_PART_MAIN, &style_Home_Screen_menu_icon_main);
	lv_obj_set_pos(ui->Home_Screen_menu_icon, 142, 218);
	lv_obj_set_size(ui->Home_Screen_menu_icon, 36, 22);
	lv_obj_set_click(ui->Home_Screen_menu_icon, true);
	lv_img_set_src(ui->Home_Screen_menu_icon,&_Icon_Swipe_alpha_36x22);
	lv_img_set_pivot(ui->Home_Screen_menu_icon, 0,0);
	lv_img_set_angle(ui->Home_Screen_menu_icon, 0);

	//Write codes Home_Screen_full_battery_icon
	ui->Home_Screen_full_battery_icon = lv_img_create(ui->Home_Screen_main_container, NULL);

	//Write style LV_IMG_PART_MAIN for Home_Screen_full_battery_icon
	static lv_style_t style_Home_Screen_full_battery_icon_main;
	lv_style_reset(&style_Home_Screen_full_battery_icon_main);

	//Write style state: LV_STATE_DEFAULT for style_Home_Screen_full_battery_icon_main
	lv_style_set_image_recolor(&style_Home_Screen_full_battery_icon_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Home_Screen_full_battery_icon_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Home_Screen_full_battery_icon_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Home_Screen_full_battery_icon, LV_IMG_PART_MAIN, &style_Home_Screen_full_battery_icon_main);
	lv_obj_set_pos(ui->Home_Screen_full_battery_icon, 279, 11);
	lv_obj_set_size(ui->Home_Screen_full_battery_icon, 21, 12);
	lv_obj_set_click(ui->Home_Screen_full_battery_icon, true);
	lv_img_set_src(ui->Home_Screen_full_battery_icon,&_Battery_alpha_21x12);
	lv_img_set_pivot(ui->Home_Screen_full_battery_icon, 0,0);
	lv_img_set_angle(ui->Home_Screen_full_battery_icon, 0);

	//Write codes Home_Screen_full_wifi_icon
	ui->Home_Screen_full_wifi_icon = lv_img_create(ui->Home_Screen_main_container, NULL);

	//Write style LV_IMG_PART_MAIN for Home_Screen_full_wifi_icon
	static lv_style_t style_Home_Screen_full_wifi_icon_main;
	lv_style_reset(&style_Home_Screen_full_wifi_icon_main);

	//Write style state: LV_STATE_DEFAULT for style_Home_Screen_full_wifi_icon_main
	lv_style_set_image_recolor(&style_Home_Screen_full_wifi_icon_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Home_Screen_full_wifi_icon_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Home_Screen_full_wifi_icon_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Home_Screen_full_wifi_icon, LV_IMG_PART_MAIN, &style_Home_Screen_full_wifi_icon_main);
	lv_obj_set_pos(ui->Home_Screen_full_wifi_icon, 260, 11);
	lv_obj_set_size(ui->Home_Screen_full_wifi_icon, 13, 12);
	lv_obj_set_click(ui->Home_Screen_full_wifi_icon, true);
	lv_img_set_src(ui->Home_Screen_full_wifi_icon,&_WiFiSignal_alpha_13x12);
	lv_img_set_pivot(ui->Home_Screen_full_wifi_icon, 0,0);
	lv_img_set_angle(ui->Home_Screen_full_wifi_icon, 0);

	//Write codes Home_Screen_info_label
	ui->Home_Screen_info_label = lv_label_create(ui->Home_Screen_main_container, NULL);
	lv_label_set_text(ui->Home_Screen_info_label, "Ready");
	lv_label_set_long_mode(ui->Home_Screen_info_label, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Home_Screen_info_label, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Home_Screen_info_label
	static lv_style_t style_Home_Screen_info_label_main;
	lv_style_reset(&style_Home_Screen_info_label_main);

	//Write style state: LV_STATE_DEFAULT for style_Home_Screen_info_label_main
	lv_style_set_radius(&style_Home_Screen_info_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Home_Screen_info_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Home_Screen_info_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Home_Screen_info_label_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Home_Screen_info_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Home_Screen_info_label_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Home_Screen_info_label_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_10);
	lv_style_set_text_letter_space(&style_Home_Screen_info_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Home_Screen_info_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Home_Screen_info_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Home_Screen_info_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Home_Screen_info_label_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Home_Screen_info_label, LV_LABEL_PART_MAIN, &style_Home_Screen_info_label_main);
	lv_obj_set_pos(ui->Home_Screen_info_label, 0, 202);
	lv_obj_set_size(ui->Home_Screen_info_label, 320, 0);

	//Write codes Home_Screen_time_label
	ui->Home_Screen_time_label = lv_label_create(ui->Home_Screen_main_container, NULL);
	lv_label_set_text(ui->Home_Screen_time_label, "9:41 ");
	lv_label_set_long_mode(ui->Home_Screen_time_label, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Home_Screen_time_label, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Home_Screen_time_label
	static lv_style_t style_Home_Screen_time_label_main;
	lv_style_reset(&style_Home_Screen_time_label_main);

	//Write style state: LV_STATE_DEFAULT for style_Home_Screen_time_label_main
	lv_style_set_radius(&style_Home_Screen_time_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Home_Screen_time_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Home_Screen_time_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Home_Screen_time_label_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Home_Screen_time_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Home_Screen_time_label_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Home_Screen_time_label_main, LV_STATE_DEFAULT, &lv_font_Prompt_SemiBold_10);
	lv_style_set_text_letter_space(&style_Home_Screen_time_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Home_Screen_time_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Home_Screen_time_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Home_Screen_time_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Home_Screen_time_label_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Home_Screen_time_label, LV_LABEL_PART_MAIN, &style_Home_Screen_time_label_main);
	lv_obj_set_pos(ui->Home_Screen_time_label, 20, 11);
	lv_obj_set_size(ui->Home_Screen_time_label, 25, 0);

	//Write codes Home_Screen_logo
	ui->Home_Screen_logo = lv_img_create(ui->Home_Screen_main_container, NULL);

	//Write style LV_IMG_PART_MAIN for Home_Screen_logo
	static lv_style_t style_Home_Screen_logo_main;
	lv_style_reset(&style_Home_Screen_logo_main);

	//Write style state: LV_STATE_DEFAULT for style_Home_Screen_logo_main
	lv_style_set_image_recolor(&style_Home_Screen_logo_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Home_Screen_logo_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Home_Screen_logo_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Home_Screen_logo, LV_IMG_PART_MAIN, &style_Home_Screen_logo_main);
	lv_obj_set_pos(ui->Home_Screen_logo, 128.5, 12);
	lv_obj_set_size(ui->Home_Screen_logo, 63, 11);
	lv_obj_set_click(ui->Home_Screen_logo, true);
	lv_img_set_src(ui->Home_Screen_logo,&_Logo_alpha_63x11);
	lv_img_set_pivot(ui->Home_Screen_logo, 0,0);
	lv_img_set_angle(ui->Home_Screen_logo, 0);
	lv_cont_set_layout(ui->Home_Screen_main_container, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->Home_Screen_main_container, LV_FIT_NONE);

	//Write codes Home_Screen_qr_container
	ui->Home_Screen_qr_container = lv_cont_create(ui->Home_Screen, NULL);

	//Write style LV_CONT_PART_MAIN for Home_Screen_qr_container
	static lv_style_t style_Home_Screen_qr_container_main;
	lv_style_reset(&style_Home_Screen_qr_container_main);

	//Write style state: LV_STATE_DEFAULT for style_Home_Screen_qr_container_main
	lv_style_set_radius(&style_Home_Screen_qr_container_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Home_Screen_qr_container_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Home_Screen_qr_container_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Home_Screen_qr_container_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Home_Screen_qr_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Home_Screen_qr_container_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_Home_Screen_qr_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Home_Screen_qr_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_Home_Screen_qr_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Home_Screen_qr_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Home_Screen_qr_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Home_Screen_qr_container_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Home_Screen_qr_container, LV_CONT_PART_MAIN, &style_Home_Screen_qr_container_main);
	lv_obj_set_pos(ui->Home_Screen_qr_container, 88, 44);
	lv_obj_set_size(ui->Home_Screen_qr_container, 144, 145);
	lv_obj_set_click(ui->Home_Screen_qr_container, false);
	lv_cont_set_layout(ui->Home_Screen_qr_container, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->Home_Screen_qr_container, LV_FIT_NONE);

	//Init events for screen
	events_init_Home_Screen(ui);
}