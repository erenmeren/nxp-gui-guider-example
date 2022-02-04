/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_Settings_Screen(lv_ui *ui){

	//Write codes Settings_Screen
	ui->Settings_Screen = lv_obj_create(NULL, NULL);

	//Write codes Settings_Screen_main_container
	ui->Settings_Screen_main_container = lv_cont_create(ui->Settings_Screen, NULL);

	//Write style LV_CONT_PART_MAIN for Settings_Screen_main_container
	static lv_style_t style_Settings_Screen_main_container_main;
	lv_style_reset(&style_Settings_Screen_main_container_main);

	//Write style state: LV_STATE_DEFAULT for style_Settings_Screen_main_container_main
	lv_style_set_radius(&style_Settings_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Settings_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_color(&style_Settings_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_dir(&style_Settings_Screen_main_container_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Settings_Screen_main_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Settings_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_Settings_Screen_main_container_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_Settings_Screen_main_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_Settings_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Settings_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Settings_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Settings_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Settings_Screen_main_container, LV_CONT_PART_MAIN, &style_Settings_Screen_main_container_main);
	lv_obj_set_pos(ui->Settings_Screen_main_container, 0, 0);
	lv_obj_set_size(ui->Settings_Screen_main_container, 320, 240);
	lv_obj_set_click(ui->Settings_Screen_main_container, false);

	//Write codes Settings_Screen_back_btn
	ui->Settings_Screen_back_btn = lv_btn_create(ui->Settings_Screen_main_container, NULL);

	//Write style LV_BTN_PART_MAIN for Settings_Screen_back_btn
	static lv_style_t style_Settings_Screen_back_btn_main;
	lv_style_reset(&style_Settings_Screen_back_btn_main);

	//Write style state: LV_STATE_DEFAULT for style_Settings_Screen_back_btn_main
	lv_style_set_radius(&style_Settings_Screen_back_btn_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Settings_Screen_back_btn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_Settings_Screen_back_btn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_Settings_Screen_back_btn_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Settings_Screen_back_btn_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Settings_Screen_back_btn_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Settings_Screen_back_btn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Settings_Screen_back_btn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_Settings_Screen_back_btn_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Settings_Screen_back_btn_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Settings_Screen_back_btn, LV_BTN_PART_MAIN, &style_Settings_Screen_back_btn_main);
	lv_obj_set_pos(ui->Settings_Screen_back_btn, 74, 199);
	lv_obj_set_size(ui->Settings_Screen_back_btn, 170, 34);
	ui->Settings_Screen_back_btn_label = lv_label_create(ui->Settings_Screen_back_btn, NULL);
	lv_label_set_text(ui->Settings_Screen_back_btn_label, "Back");
	lv_obj_set_style_local_text_color(ui->Settings_Screen_back_btn_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->Settings_Screen_back_btn_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_14);

	//Write codes Settings_Screen_btn_4
	ui->Settings_Screen_btn_4 = lv_btn_create(ui->Settings_Screen_main_container, NULL);

	//Write style LV_BTN_PART_MAIN for Settings_Screen_btn_4
	static lv_style_t style_Settings_Screen_btn_4_main;
	lv_style_reset(&style_Settings_Screen_btn_4_main);

	//Write style state: LV_STATE_DEFAULT for style_Settings_Screen_btn_4_main
	lv_style_set_radius(&style_Settings_Screen_btn_4_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Settings_Screen_btn_4_main, LV_STATE_DEFAULT, lv_color_make(0xb5, 0xe5, 0xd9));
	lv_style_set_bg_grad_color(&style_Settings_Screen_btn_4_main, LV_STATE_DEFAULT, lv_color_make(0xb5, 0xe5, 0xd9));
	lv_style_set_bg_grad_dir(&style_Settings_Screen_btn_4_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Settings_Screen_btn_4_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Settings_Screen_btn_4_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Settings_Screen_btn_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Settings_Screen_btn_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_Settings_Screen_btn_4_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Settings_Screen_btn_4_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Settings_Screen_btn_4, LV_BTN_PART_MAIN, &style_Settings_Screen_btn_4_main);
	lv_obj_set_pos(ui->Settings_Screen_btn_4, 74, 160);
	lv_obj_set_size(ui->Settings_Screen_btn_4, 170, 34);
	ui->Settings_Screen_btn_4_label = lv_label_create(ui->Settings_Screen_btn_4, NULL);
	lv_label_set_text(ui->Settings_Screen_btn_4_label, "About");
	lv_obj_set_style_local_text_color(ui->Settings_Screen_btn_4_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->Settings_Screen_btn_4_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_14);

	//Write codes Settings_Screen_btn_3
	ui->Settings_Screen_btn_3 = lv_btn_create(ui->Settings_Screen_main_container, NULL);

	//Write style LV_BTN_PART_MAIN for Settings_Screen_btn_3
	static lv_style_t style_Settings_Screen_btn_3_main;
	lv_style_reset(&style_Settings_Screen_btn_3_main);

	//Write style state: LV_STATE_DEFAULT for style_Settings_Screen_btn_3_main
	lv_style_set_radius(&style_Settings_Screen_btn_3_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Settings_Screen_btn_3_main, LV_STATE_DEFAULT, lv_color_make(0xb5, 0xe5, 0xd9));
	lv_style_set_bg_grad_color(&style_Settings_Screen_btn_3_main, LV_STATE_DEFAULT, lv_color_make(0xb5, 0xe5, 0xd9));
	lv_style_set_bg_grad_dir(&style_Settings_Screen_btn_3_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Settings_Screen_btn_3_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Settings_Screen_btn_3_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Settings_Screen_btn_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Settings_Screen_btn_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_Settings_Screen_btn_3_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Settings_Screen_btn_3_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Settings_Screen_btn_3, LV_BTN_PART_MAIN, &style_Settings_Screen_btn_3_main);
	lv_obj_set_pos(ui->Settings_Screen_btn_3, 75, 120);
	lv_obj_set_size(ui->Settings_Screen_btn_3, 170, 34);
	ui->Settings_Screen_btn_3_label = lv_label_create(ui->Settings_Screen_btn_3, NULL);
	lv_label_set_text(ui->Settings_Screen_btn_3_label, "Factory Reset");
	lv_obj_set_style_local_text_color(ui->Settings_Screen_btn_3_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->Settings_Screen_btn_3_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_14);

	//Write codes Settings_Screen_btn_2
	ui->Settings_Screen_btn_2 = lv_btn_create(ui->Settings_Screen_main_container, NULL);

	//Write style LV_BTN_PART_MAIN for Settings_Screen_btn_2
	static lv_style_t style_Settings_Screen_btn_2_main;
	lv_style_reset(&style_Settings_Screen_btn_2_main);

	//Write style state: LV_STATE_DEFAULT for style_Settings_Screen_btn_2_main
	lv_style_set_radius(&style_Settings_Screen_btn_2_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Settings_Screen_btn_2_main, LV_STATE_DEFAULT, lv_color_make(0xb5, 0xe5, 0xd9));
	lv_style_set_bg_grad_color(&style_Settings_Screen_btn_2_main, LV_STATE_DEFAULT, lv_color_make(0xb5, 0xe5, 0xd9));
	lv_style_set_bg_grad_dir(&style_Settings_Screen_btn_2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Settings_Screen_btn_2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Settings_Screen_btn_2_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Settings_Screen_btn_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Settings_Screen_btn_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_Settings_Screen_btn_2_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Settings_Screen_btn_2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Settings_Screen_btn_2, LV_BTN_PART_MAIN, &style_Settings_Screen_btn_2_main);
	lv_obj_set_pos(ui->Settings_Screen_btn_2, 75, 80);
	lv_obj_set_size(ui->Settings_Screen_btn_2, 170, 34);
	ui->Settings_Screen_btn_2_label = lv_label_create(ui->Settings_Screen_btn_2, NULL);
	lv_label_set_text(ui->Settings_Screen_btn_2_label, "Wi-Fi Reset");
	lv_obj_set_style_local_text_color(ui->Settings_Screen_btn_2_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->Settings_Screen_btn_2_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_14);

	//Write codes Settings_Screen_btn_1
	ui->Settings_Screen_btn_1 = lv_btn_create(ui->Settings_Screen_main_container, NULL);

	//Write style LV_BTN_PART_MAIN for Settings_Screen_btn_1
	static lv_style_t style_Settings_Screen_btn_1_main;
	lv_style_reset(&style_Settings_Screen_btn_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Settings_Screen_btn_1_main
	lv_style_set_radius(&style_Settings_Screen_btn_1_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Settings_Screen_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xb5, 0xe5, 0xd9));
	lv_style_set_bg_grad_color(&style_Settings_Screen_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xb5, 0xe5, 0xd9));
	lv_style_set_bg_grad_dir(&style_Settings_Screen_btn_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Settings_Screen_btn_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Settings_Screen_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Settings_Screen_btn_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Settings_Screen_btn_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_Settings_Screen_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Settings_Screen_btn_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Settings_Screen_btn_1, LV_BTN_PART_MAIN, &style_Settings_Screen_btn_1_main);
	lv_obj_set_pos(ui->Settings_Screen_btn_1, 76, 41);
	lv_obj_set_size(ui->Settings_Screen_btn_1, 170, 34);
	ui->Settings_Screen_btn_1_label = lv_label_create(ui->Settings_Screen_btn_1, NULL);
	lv_label_set_text(ui->Settings_Screen_btn_1_label, "Connectivity");
	lv_obj_set_style_local_text_color(ui->Settings_Screen_btn_1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->Settings_Screen_btn_1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_14);

	//Write codes Settings_Screen_logo
	ui->Settings_Screen_logo = lv_img_create(ui->Settings_Screen_main_container, NULL);

	//Write style LV_IMG_PART_MAIN for Settings_Screen_logo
	static lv_style_t style_Settings_Screen_logo_main;
	lv_style_reset(&style_Settings_Screen_logo_main);

	//Write style state: LV_STATE_DEFAULT for style_Settings_Screen_logo_main
	lv_style_set_image_recolor(&style_Settings_Screen_logo_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Settings_Screen_logo_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Settings_Screen_logo_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Settings_Screen_logo, LV_IMG_PART_MAIN, &style_Settings_Screen_logo_main);
	lv_obj_set_pos(ui->Settings_Screen_logo, 128.5, 12);
	lv_obj_set_size(ui->Settings_Screen_logo, 63, 11);
	lv_obj_set_click(ui->Settings_Screen_logo, true);
	lv_img_set_src(ui->Settings_Screen_logo,&_Logo_alpha_63x11);
	lv_img_set_pivot(ui->Settings_Screen_logo, 0,0);
	lv_img_set_angle(ui->Settings_Screen_logo, 0);
	lv_cont_set_layout(ui->Settings_Screen_main_container, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->Settings_Screen_main_container, LV_FIT_NONE);

	//Init events for screen
	events_init_Settings_Screen(ui);
}