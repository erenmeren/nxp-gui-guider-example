/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_Home(lv_ui *ui){

	//Write codes Home
	ui->Home = lv_obj_create(NULL, NULL);

	//Write codes Home_cont_1
	ui->Home_cont_1 = lv_cont_create(ui->Home, NULL);

	//Write style LV_CONT_PART_MAIN for Home_cont_1
	static lv_style_t style_Home_cont_1_main;
	lv_style_reset(&style_Home_cont_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Home_cont_1_main
	lv_style_set_radius(&style_Home_cont_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Home_cont_1_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_color(&style_Home_cont_1_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_dir(&style_Home_cont_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Home_cont_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Home_cont_1_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_Home_cont_1_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_Home_cont_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_Home_cont_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Home_cont_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Home_cont_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Home_cont_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Home_cont_1, LV_CONT_PART_MAIN, &style_Home_cont_1_main);
	lv_obj_set_pos(ui->Home_cont_1, 0, 0);
	lv_obj_set_size(ui->Home_cont_1, 320, 240);
	lv_obj_set_click(ui->Home_cont_1, false);

	//Write codes Home_bar_1
	ui->Home_bar_1 = lv_bar_create(ui->Home_cont_1, NULL);

	//Write style LV_BAR_PART_BG for Home_bar_1
	static lv_style_t style_Home_bar_1_bg;
	lv_style_reset(&style_Home_bar_1_bg);

	//Write style state: LV_STATE_DEFAULT for style_Home_bar_1_bg
	lv_style_set_radius(&style_Home_bar_1_bg, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Home_bar_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Home_bar_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Home_bar_1_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Home_bar_1_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_Home_bar_1_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_right(&style_Home_bar_1_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_top(&style_Home_bar_1_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_bottom(&style_Home_bar_1_bg, LV_STATE_DEFAULT, 2);
	lv_obj_add_style(ui->Home_bar_1, LV_BAR_PART_BG, &style_Home_bar_1_bg);

	//Write style LV_BAR_PART_INDIC for Home_bar_1
	static lv_style_t style_Home_bar_1_indic;
	lv_style_reset(&style_Home_bar_1_indic);

	//Write style state: LV_STATE_DEFAULT for style_Home_bar_1_indic
	lv_style_set_radius(&style_Home_bar_1_indic, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Home_bar_1_indic, LV_STATE_DEFAULT, lv_color_make(0xb3, 0xe5, 0xd9));
	lv_style_set_bg_grad_color(&style_Home_bar_1_indic, LV_STATE_DEFAULT, lv_color_make(0xb0, 0xe5, 0xd9));
	lv_style_set_bg_grad_dir(&style_Home_bar_1_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Home_bar_1_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Home_bar_1, LV_BAR_PART_INDIC, &style_Home_bar_1_indic);
	lv_obj_set_pos(ui->Home_bar_1, 18, 225);
	lv_obj_set_size(ui->Home_bar_1, 284, 12);
	lv_bar_set_anim_time(ui->Home_bar_1,1000);
	lv_bar_set_value(ui->Home_bar_1,20,LV_ANIM_ON);
	lv_bar_set_range(ui->Home_bar_1,0,100);

	//Write codes Home_img_1
	ui->Home_img_1 = lv_img_create(ui->Home_cont_1, NULL);

	//Write style LV_IMG_PART_MAIN for Home_img_1
	static lv_style_t style_Home_img_1_main;
	lv_style_reset(&style_Home_img_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Home_img_1_main
	lv_style_set_image_recolor(&style_Home_img_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Home_img_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Home_img_1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Home_img_1, LV_IMG_PART_MAIN, &style_Home_img_1_main);
	lv_obj_set_pos(ui->Home_img_1, 113.5, 24);
	lv_obj_set_size(ui->Home_img_1, 93, 16);
	lv_obj_set_click(ui->Home_img_1, true);
	lv_img_set_src(ui->Home_img_1,&_Logo_alpha_93x16);
	lv_img_set_pivot(ui->Home_img_1, 0,0);
	lv_img_set_angle(ui->Home_img_1, 0);
	lv_cont_set_layout(ui->Home_cont_1, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->Home_cont_1, LV_FIT_NONE);

	//Write codes Home_label_1
	ui->Home_label_1 = lv_label_create(ui->Home, NULL);
	lv_label_set_text(ui->Home_label_1, "Hello!");
	lv_label_set_long_mode(ui->Home_label_1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Home_label_1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Home_label_1
	static lv_style_t style_Home_label_1_main;
	lv_style_reset(&style_Home_label_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Home_label_1_main
	lv_style_set_radius(&style_Home_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Home_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_color(&style_Home_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_dir(&style_Home_label_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Home_label_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_Home_label_1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Home_label_1_main, LV_STATE_DEFAULT, &lv_font_simsun_40);
	lv_style_set_text_letter_space(&style_Home_label_1_main, LV_STATE_DEFAULT, 1);
	lv_style_set_pad_left(&style_Home_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Home_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Home_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Home_label_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Home_label_1, LV_LABEL_PART_MAIN, &style_Home_label_1_main);
	lv_obj_set_pos(ui->Home_label_1, 95.5, 104);
	lv_obj_set_size(ui->Home_label_1, 129, 0);

	//Init events for screen
	events_init_Home(ui);
}