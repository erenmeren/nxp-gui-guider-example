/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_Loading_Screen(lv_ui *ui){

	//Write codes Loading_Screen
	ui->Loading_Screen = lv_obj_create(NULL, NULL);

	//Write codes Loading_Screen_main_container
	ui->Loading_Screen_main_container = lv_cont_create(ui->Loading_Screen, NULL);

	//Write style LV_CONT_PART_MAIN for Loading_Screen_main_container
	static lv_style_t style_Loading_Screen_main_container_main;
	lv_style_reset(&style_Loading_Screen_main_container_main);

	//Write style state: LV_STATE_DEFAULT for style_Loading_Screen_main_container_main
	lv_style_set_radius(&style_Loading_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Loading_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_color(&style_Loading_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_dir(&style_Loading_Screen_main_container_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Loading_Screen_main_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Loading_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_Loading_Screen_main_container_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_Loading_Screen_main_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_Loading_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Loading_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Loading_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Loading_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Loading_Screen_main_container, LV_CONT_PART_MAIN, &style_Loading_Screen_main_container_main);
	lv_obj_set_pos(ui->Loading_Screen_main_container, 0, 0);
	lv_obj_set_size(ui->Loading_Screen_main_container, 320, 240);
	lv_obj_set_click(ui->Loading_Screen_main_container, false);

	//Write codes Loading_Screen_label_2
	ui->Loading_Screen_label_2 = lv_label_create(ui->Loading_Screen_main_container, NULL);
	lv_label_set_text(ui->Loading_Screen_label_2, "Image");
	lv_label_set_long_mode(ui->Loading_Screen_label_2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Loading_Screen_label_2, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Loading_Screen_label_2
	static lv_style_t style_Loading_Screen_label_2_main;
	lv_style_reset(&style_Loading_Screen_label_2_main);

	//Write style state: LV_STATE_DEFAULT for style_Loading_Screen_label_2_main
	lv_style_set_radius(&style_Loading_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Loading_Screen_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Loading_Screen_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Loading_Screen_label_2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Loading_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Loading_Screen_label_2_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Loading_Screen_label_2_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_50);
	lv_style_set_text_letter_space(&style_Loading_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Loading_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Loading_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Loading_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Loading_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Loading_Screen_label_2, LV_LABEL_PART_MAIN, &style_Loading_Screen_label_2_main);
	lv_obj_set_pos(ui->Loading_Screen_label_2, 60, 105);
	lv_obj_set_size(ui->Loading_Screen_label_2, 200, 0);

	//Write codes Loading_Screen_label_1
	ui->Loading_Screen_label_1 = lv_label_create(ui->Loading_Screen_main_container, NULL);
	lv_label_set_text(ui->Loading_Screen_label_1, "Printing ...");
	lv_label_set_long_mode(ui->Loading_Screen_label_1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Loading_Screen_label_1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Loading_Screen_label_1
	static lv_style_t style_Loading_Screen_label_1_main;
	lv_style_reset(&style_Loading_Screen_label_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Loading_Screen_label_1_main
	lv_style_set_radius(&style_Loading_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Loading_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Loading_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Loading_Screen_label_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Loading_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Loading_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Loading_Screen_label_1_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_13);
	lv_style_set_text_letter_space(&style_Loading_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Loading_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Loading_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Loading_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Loading_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Loading_Screen_label_1, LV_LABEL_PART_MAIN, &style_Loading_Screen_label_1_main);
	lv_obj_set_pos(ui->Loading_Screen_label_1, 129, 31);
	lv_obj_set_size(ui->Loading_Screen_label_1, 62, 0);

	//Write codes Loading_Screen_logo
	ui->Loading_Screen_logo = lv_img_create(ui->Loading_Screen_main_container, NULL);

	//Write style LV_IMG_PART_MAIN for Loading_Screen_logo
	static lv_style_t style_Loading_Screen_logo_main;
	lv_style_reset(&style_Loading_Screen_logo_main);

	//Write style state: LV_STATE_DEFAULT for style_Loading_Screen_logo_main
	lv_style_set_image_recolor(&style_Loading_Screen_logo_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Loading_Screen_logo_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Loading_Screen_logo_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Loading_Screen_logo, LV_IMG_PART_MAIN, &style_Loading_Screen_logo_main);
	lv_obj_set_pos(ui->Loading_Screen_logo, 128.5, 12);
	lv_obj_set_size(ui->Loading_Screen_logo, 63, 11);
	lv_obj_set_click(ui->Loading_Screen_logo, true);
	lv_img_set_src(ui->Loading_Screen_logo,&_Logo_alpha_63x11);
	lv_img_set_pivot(ui->Loading_Screen_logo, 0,0);
	lv_img_set_angle(ui->Loading_Screen_logo, 0);
	lv_cont_set_layout(ui->Loading_Screen_main_container, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->Loading_Screen_main_container, LV_FIT_NONE);

	//Init events for screen
	events_init_Loading_Screen(ui);
}