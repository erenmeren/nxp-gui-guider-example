/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_AccessPoint_Screen(lv_ui *ui){

	//Write codes AccessPoint_Screen
	ui->AccessPoint_Screen = lv_obj_create(NULL, NULL);
	lv_anim_path_t lv_anim_path_AccessPoint_Screen_main_container = {.cb = lv_anim_path_ease_in_out};

	//Write codes AccessPoint_Screen_main_container
	ui->AccessPoint_Screen_main_container = lv_cont_create(ui->AccessPoint_Screen, NULL);

	//Write style LV_CONT_PART_MAIN for AccessPoint_Screen_main_container
	static lv_style_t style_AccessPoint_Screen_main_container_main;
	lv_style_reset(&style_AccessPoint_Screen_main_container_main);

	//Write style state: LV_STATE_DEFAULT for style_AccessPoint_Screen_main_container_main
	lv_style_set_radius(&style_AccessPoint_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_AccessPoint_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_color(&style_AccessPoint_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_dir(&style_AccessPoint_Screen_main_container_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_AccessPoint_Screen_main_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_AccessPoint_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0x8b, 0x3f, 0xa6));
	lv_style_set_border_width(&style_AccessPoint_Screen_main_container_main, LV_STATE_DEFAULT, 7);
	lv_style_set_border_opa(&style_AccessPoint_Screen_main_container_main, LV_STATE_DEFAULT, 200);
	lv_style_set_pad_left(&style_AccessPoint_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_AccessPoint_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_AccessPoint_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_AccessPoint_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->AccessPoint_Screen_main_container, LV_CONT_PART_MAIN, &style_AccessPoint_Screen_main_container_main);
	lv_obj_set_pos(ui->AccessPoint_Screen_main_container, 0, 0);
	lv_obj_set_size(ui->AccessPoint_Screen_main_container, 320, 240);
	lv_obj_set_click(ui->AccessPoint_Screen_main_container, false);

	//Write codes AccessPoint_Screen_ssid_password_label
	ui->AccessPoint_Screen_ssid_password_label = lv_label_create(ui->AccessPoint_Screen_main_container, NULL);
	lv_label_set_text(ui->AccessPoint_Screen_ssid_password_label, "SSID Password : Password");
	lv_label_set_long_mode(ui->AccessPoint_Screen_ssid_password_label, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->AccessPoint_Screen_ssid_password_label, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for AccessPoint_Screen_ssid_password_label
	static lv_style_t style_AccessPoint_Screen_ssid_password_label_main;
	lv_style_reset(&style_AccessPoint_Screen_ssid_password_label_main);

	//Write style state: LV_STATE_DEFAULT for style_AccessPoint_Screen_ssid_password_label_main
	lv_style_set_radius(&style_AccessPoint_Screen_ssid_password_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_AccessPoint_Screen_ssid_password_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_AccessPoint_Screen_ssid_password_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_AccessPoint_Screen_ssid_password_label_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_AccessPoint_Screen_ssid_password_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_AccessPoint_Screen_ssid_password_label_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_AccessPoint_Screen_ssid_password_label_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_12);
	lv_style_set_text_letter_space(&style_AccessPoint_Screen_ssid_password_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_AccessPoint_Screen_ssid_password_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_AccessPoint_Screen_ssid_password_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_AccessPoint_Screen_ssid_password_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_AccessPoint_Screen_ssid_password_label_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->AccessPoint_Screen_ssid_password_label, LV_LABEL_PART_MAIN, &style_AccessPoint_Screen_ssid_password_label_main);
	lv_obj_set_pos(ui->AccessPoint_Screen_ssid_password_label, 85, 93);
	lv_obj_set_size(ui->AccessPoint_Screen_ssid_password_label, 150, 0);

	//Write codes AccessPoint_Screen_ssid_name_label
	ui->AccessPoint_Screen_ssid_name_label = lv_label_create(ui->AccessPoint_Screen_main_container, NULL);
	lv_label_set_text(ui->AccessPoint_Screen_ssid_name_label, "Following SSID OTHERLINK-Q34I");
	lv_label_set_long_mode(ui->AccessPoint_Screen_ssid_name_label, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->AccessPoint_Screen_ssid_name_label, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for AccessPoint_Screen_ssid_name_label
	static lv_style_t style_AccessPoint_Screen_ssid_name_label_main;
	lv_style_reset(&style_AccessPoint_Screen_ssid_name_label_main);

	//Write style state: LV_STATE_DEFAULT for style_AccessPoint_Screen_ssid_name_label_main
	lv_style_set_radius(&style_AccessPoint_Screen_ssid_name_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_AccessPoint_Screen_ssid_name_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_AccessPoint_Screen_ssid_name_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_AccessPoint_Screen_ssid_name_label_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_AccessPoint_Screen_ssid_name_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_AccessPoint_Screen_ssid_name_label_main, LV_STATE_DEFAULT, lv_color_make(0x09, 0x09, 0x0b));
	lv_style_set_text_font(&style_AccessPoint_Screen_ssid_name_label_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_12);
	lv_style_set_text_letter_space(&style_AccessPoint_Screen_ssid_name_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_AccessPoint_Screen_ssid_name_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_AccessPoint_Screen_ssid_name_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_AccessPoint_Screen_ssid_name_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_AccessPoint_Screen_ssid_name_label_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->AccessPoint_Screen_ssid_name_label, LV_LABEL_PART_MAIN, &style_AccessPoint_Screen_ssid_name_label_main);
	lv_obj_set_pos(ui->AccessPoint_Screen_ssid_name_label, 60, 74);
	lv_obj_set_size(ui->AccessPoint_Screen_ssid_name_label, 200, 0);

	//Write codes AccessPoint_Screen_label_2
	ui->AccessPoint_Screen_label_2 = lv_label_create(ui->AccessPoint_Screen_main_container, NULL);
	lv_label_set_text(ui->AccessPoint_Screen_label_2, "Please JOIN  on your mobile phone.");
	lv_label_set_long_mode(ui->AccessPoint_Screen_label_2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->AccessPoint_Screen_label_2, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for AccessPoint_Screen_label_2
	static lv_style_t style_AccessPoint_Screen_label_2_main;
	lv_style_reset(&style_AccessPoint_Screen_label_2_main);

	//Write style state: LV_STATE_DEFAULT for style_AccessPoint_Screen_label_2_main
	lv_style_set_radius(&style_AccessPoint_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_AccessPoint_Screen_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_AccessPoint_Screen_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_AccessPoint_Screen_label_2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_AccessPoint_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_AccessPoint_Screen_label_2_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_AccessPoint_Screen_label_2_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_14);
	lv_style_set_text_letter_space(&style_AccessPoint_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_AccessPoint_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_AccessPoint_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_AccessPoint_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_AccessPoint_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->AccessPoint_Screen_label_2, LV_LABEL_PART_MAIN, &style_AccessPoint_Screen_label_2_main);
	lv_obj_set_pos(ui->AccessPoint_Screen_label_2, 35, 49);
	lv_obj_set_size(ui->AccessPoint_Screen_label_2, 250, 0);

	//Write codes AccessPoint_Screen_label_1
	ui->AccessPoint_Screen_label_1 = lv_label_create(ui->AccessPoint_Screen_main_container, NULL);
	lv_label_set_text(ui->AccessPoint_Screen_label_1, "Connecting to Wifi");
	lv_label_set_long_mode(ui->AccessPoint_Screen_label_1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->AccessPoint_Screen_label_1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for AccessPoint_Screen_label_1
	static lv_style_t style_AccessPoint_Screen_label_1_main;
	lv_style_reset(&style_AccessPoint_Screen_label_1_main);

	//Write style state: LV_STATE_DEFAULT for style_AccessPoint_Screen_label_1_main
	lv_style_set_radius(&style_AccessPoint_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_AccessPoint_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_AccessPoint_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_AccessPoint_Screen_label_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_AccessPoint_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_AccessPoint_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_AccessPoint_Screen_label_1_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_14);
	lv_style_set_text_letter_space(&style_AccessPoint_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_AccessPoint_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_AccessPoint_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_AccessPoint_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_AccessPoint_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->AccessPoint_Screen_label_1, LV_LABEL_PART_MAIN, &style_AccessPoint_Screen_label_1_main);
	lv_obj_set_pos(ui->AccessPoint_Screen_label_1, 60, 31);
	lv_obj_set_size(ui->AccessPoint_Screen_label_1, 200, 0);

	//Write codes AccessPoint_Screen_logo
	ui->AccessPoint_Screen_logo = lv_img_create(ui->AccessPoint_Screen_main_container, NULL);

	//Write style LV_IMG_PART_MAIN for AccessPoint_Screen_logo
	static lv_style_t style_AccessPoint_Screen_logo_main;
	lv_style_reset(&style_AccessPoint_Screen_logo_main);

	//Write style state: LV_STATE_DEFAULT for style_AccessPoint_Screen_logo_main
	lv_style_set_image_recolor(&style_AccessPoint_Screen_logo_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_AccessPoint_Screen_logo_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_AccessPoint_Screen_logo_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->AccessPoint_Screen_logo, LV_IMG_PART_MAIN, &style_AccessPoint_Screen_logo_main);
	lv_obj_set_pos(ui->AccessPoint_Screen_logo, 128.5, 12);
	lv_obj_set_size(ui->AccessPoint_Screen_logo, 63, 11);
	lv_obj_set_click(ui->AccessPoint_Screen_logo, true);
	lv_img_set_src(ui->AccessPoint_Screen_logo,&_Logo_alpha_63x11);
	lv_img_set_pivot(ui->AccessPoint_Screen_logo, 0,0);
	lv_img_set_angle(ui->AccessPoint_Screen_logo, 0);
	lv_cont_set_layout(ui->AccessPoint_Screen_main_container, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->AccessPoint_Screen_main_container, LV_FIT_NONE);

	//Write codes AccessPoint_Screen_qr_container
	ui->AccessPoint_Screen_qr_container = lv_cont_create(ui->AccessPoint_Screen, NULL);

	//Write style LV_CONT_PART_MAIN for AccessPoint_Screen_qr_container
	static lv_style_t style_AccessPoint_Screen_qr_container_main;
	lv_style_reset(&style_AccessPoint_Screen_qr_container_main);

	//Write style state: LV_STATE_DEFAULT for style_AccessPoint_Screen_qr_container_main
	lv_style_set_radius(&style_AccessPoint_Screen_qr_container_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_AccessPoint_Screen_qr_container_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_AccessPoint_Screen_qr_container_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_AccessPoint_Screen_qr_container_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_AccessPoint_Screen_qr_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_AccessPoint_Screen_qr_container_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_AccessPoint_Screen_qr_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_AccessPoint_Screen_qr_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_AccessPoint_Screen_qr_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_AccessPoint_Screen_qr_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_AccessPoint_Screen_qr_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_AccessPoint_Screen_qr_container_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->AccessPoint_Screen_qr_container, LV_CONT_PART_MAIN, &style_AccessPoint_Screen_qr_container_main);
	lv_obj_set_pos(ui->AccessPoint_Screen_qr_container, 104.5, 117);
	lv_obj_set_size(ui->AccessPoint_Screen_qr_container, 111, 111);
	lv_obj_set_click(ui->AccessPoint_Screen_qr_container, false);
	lv_cont_set_layout(ui->AccessPoint_Screen_qr_container, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->AccessPoint_Screen_qr_container, LV_FIT_NONE);

	//Init events for screen
	events_init_AccessPoint_Screen(ui);
}