/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_Connectivity_Screen(lv_ui *ui){

	//Write codes Connectivity_Screen
	ui->Connectivity_Screen = lv_obj_create(NULL, NULL);

	//Write codes Connectivity_Screen_main_container
	ui->Connectivity_Screen_main_container = lv_cont_create(ui->Connectivity_Screen, NULL);

	//Write style LV_CONT_PART_MAIN for Connectivity_Screen_main_container
	static lv_style_t style_Connectivity_Screen_main_container_main;
	lv_style_reset(&style_Connectivity_Screen_main_container_main);

	//Write style state: LV_STATE_DEFAULT for style_Connectivity_Screen_main_container_main
	lv_style_set_radius(&style_Connectivity_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Connectivity_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_color(&style_Connectivity_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_dir(&style_Connectivity_Screen_main_container_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Connectivity_Screen_main_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Connectivity_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_Connectivity_Screen_main_container_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_Connectivity_Screen_main_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_Connectivity_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Connectivity_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Connectivity_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Connectivity_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Connectivity_Screen_main_container, LV_CONT_PART_MAIN, &style_Connectivity_Screen_main_container_main);
	lv_obj_set_pos(ui->Connectivity_Screen_main_container, 0, 0);
	lv_obj_set_size(ui->Connectivity_Screen_main_container, 320, 240);
	lv_obj_set_click(ui->Connectivity_Screen_main_container, false);

	//Write codes Connectivity_Screen_btn_1
	ui->Connectivity_Screen_btn_1 = lv_btn_create(ui->Connectivity_Screen_main_container, NULL);

	//Write style LV_BTN_PART_MAIN for Connectivity_Screen_btn_1
	static lv_style_t style_Connectivity_Screen_btn_1_main;
	lv_style_reset(&style_Connectivity_Screen_btn_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Connectivity_Screen_btn_1_main
	lv_style_set_radius(&style_Connectivity_Screen_btn_1_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Connectivity_Screen_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_Connectivity_Screen_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_Connectivity_Screen_btn_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Connectivity_Screen_btn_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Connectivity_Screen_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Connectivity_Screen_btn_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Connectivity_Screen_btn_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_Connectivity_Screen_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Connectivity_Screen_btn_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Connectivity_Screen_btn_1, LV_BTN_PART_MAIN, &style_Connectivity_Screen_btn_1_main);
	lv_obj_set_pos(ui->Connectivity_Screen_btn_1, 102, 186);
	lv_obj_set_size(ui->Connectivity_Screen_btn_1, 132, 34);
	ui->Connectivity_Screen_btn_1_label = lv_label_create(ui->Connectivity_Screen_btn_1, NULL);
	lv_label_set_text(ui->Connectivity_Screen_btn_1_label, "Back");
	lv_obj_set_style_local_text_color(ui->Connectivity_Screen_btn_1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->Connectivity_Screen_btn_1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_14);

	//Write codes Connectivity_Screen_label_6
	ui->Connectivity_Screen_label_6 = lv_label_create(ui->Connectivity_Screen_main_container, NULL);
	lv_label_set_text(ui->Connectivity_Screen_label_6, "Last connection:");
	lv_label_set_long_mode(ui->Connectivity_Screen_label_6, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Connectivity_Screen_label_6, LV_LABEL_ALIGN_RIGHT);

	//Write style LV_LABEL_PART_MAIN for Connectivity_Screen_label_6
	static lv_style_t style_Connectivity_Screen_label_6_main;
	lv_style_reset(&style_Connectivity_Screen_label_6_main);

	//Write style state: LV_STATE_DEFAULT for style_Connectivity_Screen_label_6_main
	lv_style_set_radius(&style_Connectivity_Screen_label_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Connectivity_Screen_label_6_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Connectivity_Screen_label_6_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Connectivity_Screen_label_6_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Connectivity_Screen_label_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Connectivity_Screen_label_6_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Connectivity_Screen_label_6_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_11);
	lv_style_set_text_letter_space(&style_Connectivity_Screen_label_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Connectivity_Screen_label_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Connectivity_Screen_label_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Connectivity_Screen_label_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Connectivity_Screen_label_6_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Connectivity_Screen_label_6, LV_LABEL_PART_MAIN, &style_Connectivity_Screen_label_6_main);
	lv_obj_set_pos(ui->Connectivity_Screen_label_6, 79, 154);
	lv_obj_set_size(ui->Connectivity_Screen_label_6, 98, 0);

	//Write codes Connectivity_Screen_label_5
	ui->Connectivity_Screen_label_5 = lv_label_create(ui->Connectivity_Screen_main_container, NULL);
	lv_label_set_text(ui->Connectivity_Screen_label_5, "Mac address:");
	lv_label_set_long_mode(ui->Connectivity_Screen_label_5, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Connectivity_Screen_label_5, LV_LABEL_ALIGN_RIGHT);

	//Write style LV_LABEL_PART_MAIN for Connectivity_Screen_label_5
	static lv_style_t style_Connectivity_Screen_label_5_main;
	lv_style_reset(&style_Connectivity_Screen_label_5_main);

	//Write style state: LV_STATE_DEFAULT for style_Connectivity_Screen_label_5_main
	lv_style_set_radius(&style_Connectivity_Screen_label_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Connectivity_Screen_label_5_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Connectivity_Screen_label_5_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Connectivity_Screen_label_5_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Connectivity_Screen_label_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Connectivity_Screen_label_5_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Connectivity_Screen_label_5_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_11);
	lv_style_set_text_letter_space(&style_Connectivity_Screen_label_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Connectivity_Screen_label_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Connectivity_Screen_label_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Connectivity_Screen_label_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Connectivity_Screen_label_5_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Connectivity_Screen_label_5, LV_LABEL_PART_MAIN, &style_Connectivity_Screen_label_5_main);
	lv_obj_set_pos(ui->Connectivity_Screen_label_5, 69, 134);
	lv_obj_set_size(ui->Connectivity_Screen_label_5, 78, 0);

	//Write codes Connectivity_Screen_label_4
	ui->Connectivity_Screen_label_4 = lv_label_create(ui->Connectivity_Screen_main_container, NULL);
	lv_label_set_text(ui->Connectivity_Screen_label_4, "Gateway:");
	lv_label_set_long_mode(ui->Connectivity_Screen_label_4, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Connectivity_Screen_label_4, LV_LABEL_ALIGN_RIGHT);

	//Write style LV_LABEL_PART_MAIN for Connectivity_Screen_label_4
	static lv_style_t style_Connectivity_Screen_label_4_main;
	lv_style_reset(&style_Connectivity_Screen_label_4_main);

	//Write style state: LV_STATE_DEFAULT for style_Connectivity_Screen_label_4_main
	lv_style_set_radius(&style_Connectivity_Screen_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Connectivity_Screen_label_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Connectivity_Screen_label_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Connectivity_Screen_label_4_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Connectivity_Screen_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Connectivity_Screen_label_4_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Connectivity_Screen_label_4_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_11);
	lv_style_set_text_letter_space(&style_Connectivity_Screen_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Connectivity_Screen_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Connectivity_Screen_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Connectivity_Screen_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Connectivity_Screen_label_4_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Connectivity_Screen_label_4, LV_LABEL_PART_MAIN, &style_Connectivity_Screen_label_4_main);
	lv_obj_set_pos(ui->Connectivity_Screen_label_4, 69, 114);
	lv_obj_set_size(ui->Connectivity_Screen_label_4, 60, 0);

	//Write codes Connectivity_Screen_label_3
	ui->Connectivity_Screen_label_3 = lv_label_create(ui->Connectivity_Screen_main_container, NULL);
	lv_label_set_text(ui->Connectivity_Screen_label_3, "Subnet:");
	lv_label_set_long_mode(ui->Connectivity_Screen_label_3, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Connectivity_Screen_label_3, LV_LABEL_ALIGN_RIGHT);

	//Write style LV_LABEL_PART_MAIN for Connectivity_Screen_label_3
	static lv_style_t style_Connectivity_Screen_label_3_main;
	lv_style_reset(&style_Connectivity_Screen_label_3_main);

	//Write style state: LV_STATE_DEFAULT for style_Connectivity_Screen_label_3_main
	lv_style_set_radius(&style_Connectivity_Screen_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Connectivity_Screen_label_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Connectivity_Screen_label_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Connectivity_Screen_label_3_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Connectivity_Screen_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Connectivity_Screen_label_3_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Connectivity_Screen_label_3_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_11);
	lv_style_set_text_letter_space(&style_Connectivity_Screen_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Connectivity_Screen_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Connectivity_Screen_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Connectivity_Screen_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Connectivity_Screen_label_3_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Connectivity_Screen_label_3, LV_LABEL_PART_MAIN, &style_Connectivity_Screen_label_3_main);
	lv_obj_set_pos(ui->Connectivity_Screen_label_3, 75, 94);
	lv_obj_set_size(ui->Connectivity_Screen_label_3, 46, 0);

	//Write codes Connectivity_Screen_label_2
	ui->Connectivity_Screen_label_2 = lv_label_create(ui->Connectivity_Screen_main_container, NULL);
	lv_label_set_text(ui->Connectivity_Screen_label_2, "IP address:");
	lv_label_set_long_mode(ui->Connectivity_Screen_label_2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Connectivity_Screen_label_2, LV_LABEL_ALIGN_RIGHT);

	//Write style LV_LABEL_PART_MAIN for Connectivity_Screen_label_2
	static lv_style_t style_Connectivity_Screen_label_2_main;
	lv_style_reset(&style_Connectivity_Screen_label_2_main);

	//Write style state: LV_STATE_DEFAULT for style_Connectivity_Screen_label_2_main
	lv_style_set_radius(&style_Connectivity_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Connectivity_Screen_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Connectivity_Screen_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Connectivity_Screen_label_2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Connectivity_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Connectivity_Screen_label_2_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Connectivity_Screen_label_2_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_11);
	lv_style_set_text_letter_space(&style_Connectivity_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Connectivity_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Connectivity_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Connectivity_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Connectivity_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Connectivity_Screen_label_2, LV_LABEL_PART_MAIN, &style_Connectivity_Screen_label_2_main);
	lv_obj_set_pos(ui->Connectivity_Screen_label_2, 77, 74);
	lv_obj_set_size(ui->Connectivity_Screen_label_2, 66, 0);

	//Write codes Connectivity_Screen_label_1
	ui->Connectivity_Screen_label_1 = lv_label_create(ui->Connectivity_Screen_main_container, NULL);
	lv_label_set_text(ui->Connectivity_Screen_label_1, "Connectivity");
	lv_label_set_long_mode(ui->Connectivity_Screen_label_1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Connectivity_Screen_label_1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Connectivity_Screen_label_1
	static lv_style_t style_Connectivity_Screen_label_1_main;
	lv_style_reset(&style_Connectivity_Screen_label_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Connectivity_Screen_label_1_main
	lv_style_set_radius(&style_Connectivity_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Connectivity_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Connectivity_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Connectivity_Screen_label_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Connectivity_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Connectivity_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Connectivity_Screen_label_1_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_16);
	lv_style_set_text_letter_space(&style_Connectivity_Screen_label_1_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_Connectivity_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Connectivity_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Connectivity_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Connectivity_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Connectivity_Screen_label_1, LV_LABEL_PART_MAIN, &style_Connectivity_Screen_label_1_main);
	lv_obj_set_pos(ui->Connectivity_Screen_label_1, 60, 31);
	lv_obj_set_size(ui->Connectivity_Screen_label_1, 200, 0);

	//Write codes Connectivity_Screen_logo
	ui->Connectivity_Screen_logo = lv_img_create(ui->Connectivity_Screen_main_container, NULL);

	//Write style LV_IMG_PART_MAIN for Connectivity_Screen_logo
	static lv_style_t style_Connectivity_Screen_logo_main;
	lv_style_reset(&style_Connectivity_Screen_logo_main);

	//Write style state: LV_STATE_DEFAULT for style_Connectivity_Screen_logo_main
	lv_style_set_image_recolor(&style_Connectivity_Screen_logo_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Connectivity_Screen_logo_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Connectivity_Screen_logo_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Connectivity_Screen_logo, LV_IMG_PART_MAIN, &style_Connectivity_Screen_logo_main);
	lv_obj_set_pos(ui->Connectivity_Screen_logo, 128.5, 12);
	lv_obj_set_size(ui->Connectivity_Screen_logo, 63, 11);
	lv_obj_set_click(ui->Connectivity_Screen_logo, true);
	lv_img_set_src(ui->Connectivity_Screen_logo,&_Logo_alpha_63x11);
	lv_img_set_pivot(ui->Connectivity_Screen_logo, 0,0);
	lv_img_set_angle(ui->Connectivity_Screen_logo, 0);
	lv_cont_set_layout(ui->Connectivity_Screen_main_container, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->Connectivity_Screen_main_container, LV_FIT_NONE);

	//Init events for screen
	events_init_Connectivity_Screen(ui);
}