/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_WifiPage_Screen(lv_ui *ui){

	//Write codes WifiPage_Screen
	ui->WifiPage_Screen = lv_obj_create(NULL, NULL);

	//Write codes WifiPage_Screen_main_container
	ui->WifiPage_Screen_main_container = lv_cont_create(ui->WifiPage_Screen, NULL);

	//Write style LV_CONT_PART_MAIN for WifiPage_Screen_main_container
	static lv_style_t style_WifiPage_Screen_main_container_main;
	lv_style_reset(&style_WifiPage_Screen_main_container_main);

	//Write style state: LV_STATE_DEFAULT for style_WifiPage_Screen_main_container_main
	lv_style_set_radius(&style_WifiPage_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_WifiPage_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_color(&style_WifiPage_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_dir(&style_WifiPage_Screen_main_container_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_WifiPage_Screen_main_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_WifiPage_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_WifiPage_Screen_main_container_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_WifiPage_Screen_main_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_WifiPage_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_WifiPage_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_WifiPage_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_WifiPage_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->WifiPage_Screen_main_container, LV_CONT_PART_MAIN, &style_WifiPage_Screen_main_container_main);
	lv_obj_set_pos(ui->WifiPage_Screen_main_container, 0, 0);
	lv_obj_set_size(ui->WifiPage_Screen_main_container, 320, 240);
	lv_obj_set_click(ui->WifiPage_Screen_main_container, false);

	//Write codes WifiPage_Screen_label_5
	ui->WifiPage_Screen_label_5 = lv_label_create(ui->WifiPage_Screen_main_container, NULL);
	lv_label_set_text(ui->WifiPage_Screen_label_5, "https://192.168.0.100/wifi/");
	lv_label_set_long_mode(ui->WifiPage_Screen_label_5, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->WifiPage_Screen_label_5, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for WifiPage_Screen_label_5
	static lv_style_t style_WifiPage_Screen_label_5_main;
	lv_style_reset(&style_WifiPage_Screen_label_5_main);

	//Write style state: LV_STATE_DEFAULT for style_WifiPage_Screen_label_5_main
	lv_style_set_radius(&style_WifiPage_Screen_label_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_WifiPage_Screen_label_5_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_WifiPage_Screen_label_5_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_WifiPage_Screen_label_5_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_WifiPage_Screen_label_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_WifiPage_Screen_label_5_main, LV_STATE_DEFAULT, lv_color_make(0x70, 0x70, 0x71));
	lv_style_set_text_font(&style_WifiPage_Screen_label_5_main, LV_STATE_DEFAULT, &lv_font_Prompt_Regular_7);
	lv_style_set_text_letter_space(&style_WifiPage_Screen_label_5_main, LV_STATE_DEFAULT, 1);
	lv_style_set_pad_left(&style_WifiPage_Screen_label_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_WifiPage_Screen_label_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_WifiPage_Screen_label_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_WifiPage_Screen_label_5_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->WifiPage_Screen_label_5, LV_LABEL_PART_MAIN, &style_WifiPage_Screen_label_5_main);
	lv_obj_set_pos(ui->WifiPage_Screen_label_5, 70, 73);
	lv_obj_set_size(ui->WifiPage_Screen_label_5, 180, 0);

	//Write codes WifiPage_Screen_label_4
	ui->WifiPage_Screen_label_4 = lv_label_create(ui->WifiPage_Screen_main_container, NULL);
	lv_label_set_text(ui->WifiPage_Screen_label_4, "Visit Following link");
	lv_label_set_long_mode(ui->WifiPage_Screen_label_4, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->WifiPage_Screen_label_4, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for WifiPage_Screen_label_4
	static lv_style_t style_WifiPage_Screen_label_4_main;
	lv_style_reset(&style_WifiPage_Screen_label_4_main);

	//Write style state: LV_STATE_DEFAULT for style_WifiPage_Screen_label_4_main
	lv_style_set_radius(&style_WifiPage_Screen_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_WifiPage_Screen_label_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_WifiPage_Screen_label_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_WifiPage_Screen_label_4_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_WifiPage_Screen_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_WifiPage_Screen_label_4_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_WifiPage_Screen_label_4_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_16);
	lv_style_set_text_letter_space(&style_WifiPage_Screen_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_WifiPage_Screen_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_WifiPage_Screen_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_WifiPage_Screen_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_WifiPage_Screen_label_4_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->WifiPage_Screen_label_4, LV_LABEL_PART_MAIN, &style_WifiPage_Screen_label_4_main);
	lv_obj_set_pos(ui->WifiPage_Screen_label_4, 85, 31);
	lv_obj_set_size(ui->WifiPage_Screen_label_4, 150, 0);

	//Write codes WifiPage_Screen_label_3
	ui->WifiPage_Screen_label_3 = lv_label_create(ui->WifiPage_Screen_main_container, NULL);
	lv_label_set_text(ui->WifiPage_Screen_label_3, "Open URL or scan QR Code");
	lv_label_set_long_mode(ui->WifiPage_Screen_label_3, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->WifiPage_Screen_label_3, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for WifiPage_Screen_label_3
	static lv_style_t style_WifiPage_Screen_label_3_main;
	lv_style_reset(&style_WifiPage_Screen_label_3_main);

	//Write style state: LV_STATE_DEFAULT for style_WifiPage_Screen_label_3_main
	lv_style_set_radius(&style_WifiPage_Screen_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_WifiPage_Screen_label_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_WifiPage_Screen_label_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_WifiPage_Screen_label_3_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_WifiPage_Screen_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_WifiPage_Screen_label_3_main, LV_STATE_DEFAULT, lv_color_make(0x70, 0x70, 0x71));
	lv_style_set_text_font(&style_WifiPage_Screen_label_3_main, LV_STATE_DEFAULT, &lv_font_Prompt_Regular_7);
	lv_style_set_text_letter_space(&style_WifiPage_Screen_label_3_main, LV_STATE_DEFAULT, 1);
	lv_style_set_pad_left(&style_WifiPage_Screen_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_WifiPage_Screen_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_WifiPage_Screen_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_WifiPage_Screen_label_3_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->WifiPage_Screen_label_3, LV_LABEL_PART_MAIN, &style_WifiPage_Screen_label_3_main);
	lv_obj_set_pos(ui->WifiPage_Screen_label_3, 98, 63);
	lv_obj_set_size(ui->WifiPage_Screen_label_3, 124, 0);

	//Write codes WifiPage_Screen_logo
	ui->WifiPage_Screen_logo = lv_img_create(ui->WifiPage_Screen_main_container, NULL);

	//Write style LV_IMG_PART_MAIN for WifiPage_Screen_logo
	static lv_style_t style_WifiPage_Screen_logo_main;
	lv_style_reset(&style_WifiPage_Screen_logo_main);

	//Write style state: LV_STATE_DEFAULT for style_WifiPage_Screen_logo_main
	lv_style_set_image_recolor(&style_WifiPage_Screen_logo_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_WifiPage_Screen_logo_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_WifiPage_Screen_logo_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->WifiPage_Screen_logo, LV_IMG_PART_MAIN, &style_WifiPage_Screen_logo_main);
	lv_obj_set_pos(ui->WifiPage_Screen_logo, 128.5, 12);
	lv_obj_set_size(ui->WifiPage_Screen_logo, 63, 11);
	lv_obj_set_click(ui->WifiPage_Screen_logo, true);
	lv_img_set_src(ui->WifiPage_Screen_logo,&_Logo_alpha_63x11);
	lv_img_set_pivot(ui->WifiPage_Screen_logo, 0,0);
	lv_img_set_angle(ui->WifiPage_Screen_logo, 0);
	lv_cont_set_layout(ui->WifiPage_Screen_main_container, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->WifiPage_Screen_main_container, LV_FIT_NONE);

	//Write codes WifiPage_Screen_qr_container
	ui->WifiPage_Screen_qr_container = lv_cont_create(ui->WifiPage_Screen, NULL);

	//Write style LV_CONT_PART_MAIN for WifiPage_Screen_qr_container
	static lv_style_t style_WifiPage_Screen_qr_container_main;
	lv_style_reset(&style_WifiPage_Screen_qr_container_main);

	//Write style state: LV_STATE_DEFAULT for style_WifiPage_Screen_qr_container_main
	lv_style_set_radius(&style_WifiPage_Screen_qr_container_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_WifiPage_Screen_qr_container_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_WifiPage_Screen_qr_container_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_WifiPage_Screen_qr_container_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_WifiPage_Screen_qr_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_WifiPage_Screen_qr_container_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_WifiPage_Screen_qr_container_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_WifiPage_Screen_qr_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_WifiPage_Screen_qr_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_WifiPage_Screen_qr_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_WifiPage_Screen_qr_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_WifiPage_Screen_qr_container_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->WifiPage_Screen_qr_container, LV_CONT_PART_MAIN, &style_WifiPage_Screen_qr_container_main);
	lv_obj_set_pos(ui->WifiPage_Screen_qr_container, 97.5, 103);
	lv_obj_set_size(ui->WifiPage_Screen_qr_container, 125, 125);
	lv_obj_set_click(ui->WifiPage_Screen_qr_container, false);
	lv_cont_set_layout(ui->WifiPage_Screen_qr_container, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->WifiPage_Screen_qr_container, LV_FIT_NONE);

	//Init events for screen
	events_init_WifiPage_Screen(ui);
}