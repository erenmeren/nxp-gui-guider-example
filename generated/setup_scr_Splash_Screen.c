/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_Splash_Screen(lv_ui *ui){

	//Write codes Splash_Screen
	ui->Splash_Screen = lv_obj_create(NULL, NULL);

	//Write codes Splash_Screen_main_container
	ui->Splash_Screen_main_container = lv_cont_create(ui->Splash_Screen, NULL);

	//Write style LV_CONT_PART_MAIN for Splash_Screen_main_container
	static lv_style_t style_Splash_Screen_main_container_main;
	lv_style_reset(&style_Splash_Screen_main_container_main);

	//Write style state: LV_STATE_DEFAULT for style_Splash_Screen_main_container_main
	lv_style_set_radius(&style_Splash_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Splash_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_color(&style_Splash_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_dir(&style_Splash_Screen_main_container_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Splash_Screen_main_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Splash_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_Splash_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Splash_Screen_main_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_Splash_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Splash_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Splash_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Splash_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Splash_Screen_main_container, LV_CONT_PART_MAIN, &style_Splash_Screen_main_container_main);
	lv_obj_set_pos(ui->Splash_Screen_main_container, 0, 0);
	lv_obj_set_size(ui->Splash_Screen_main_container, 320, 240);
	lv_obj_set_click(ui->Splash_Screen_main_container, false);

	//Write codes Splash_Screen_progress_bar_label
	ui->Splash_Screen_progress_bar_label = lv_label_create(ui->Splash_Screen_main_container, NULL);
	lv_label_set_text(ui->Splash_Screen_progress_bar_label, "%50");
	lv_label_set_long_mode(ui->Splash_Screen_progress_bar_label, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Splash_Screen_progress_bar_label, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Splash_Screen_progress_bar_label
	static lv_style_t style_Splash_Screen_progress_bar_label_main;
	lv_style_reset(&style_Splash_Screen_progress_bar_label_main);

	//Write style state: LV_STATE_DEFAULT for style_Splash_Screen_progress_bar_label_main
	lv_style_set_radius(&style_Splash_Screen_progress_bar_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Splash_Screen_progress_bar_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Splash_Screen_progress_bar_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Splash_Screen_progress_bar_label_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Splash_Screen_progress_bar_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Splash_Screen_progress_bar_label_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Splash_Screen_progress_bar_label_main, LV_STATE_DEFAULT, &lv_font_Prompt_Regular_12);
	lv_style_set_text_letter_space(&style_Splash_Screen_progress_bar_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Splash_Screen_progress_bar_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Splash_Screen_progress_bar_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Splash_Screen_progress_bar_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Splash_Screen_progress_bar_label_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Splash_Screen_progress_bar_label, LV_LABEL_PART_MAIN, &style_Splash_Screen_progress_bar_label_main);
	lv_obj_set_pos(ui->Splash_Screen_progress_bar_label, 147, 194);
	lv_obj_set_size(ui->Splash_Screen_progress_bar_label, 26, 0);

	//Write codes Splash_Screen_welcome_label
	ui->Splash_Screen_welcome_label = lv_label_create(ui->Splash_Screen_main_container, NULL);
	lv_label_set_text(ui->Splash_Screen_welcome_label, "Hello!");
	lv_label_set_long_mode(ui->Splash_Screen_welcome_label, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Splash_Screen_welcome_label, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Splash_Screen_welcome_label
	static lv_style_t style_Splash_Screen_welcome_label_main;
	lv_style_reset(&style_Splash_Screen_welcome_label_main);

	//Write style state: LV_STATE_DEFAULT for style_Splash_Screen_welcome_label_main
	lv_style_set_radius(&style_Splash_Screen_welcome_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Splash_Screen_welcome_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Splash_Screen_welcome_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Splash_Screen_welcome_label_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Splash_Screen_welcome_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Splash_Screen_welcome_label_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Splash_Screen_welcome_label_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_40);
	lv_style_set_text_letter_space(&style_Splash_Screen_welcome_label_main, LV_STATE_DEFAULT, 1);
	lv_style_set_pad_left(&style_Splash_Screen_welcome_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Splash_Screen_welcome_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Splash_Screen_welcome_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Splash_Screen_welcome_label_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Splash_Screen_welcome_label, LV_LABEL_PART_MAIN, &style_Splash_Screen_welcome_label_main);
	lv_obj_set_pos(ui->Splash_Screen_welcome_label, 99, 87);
	lv_obj_set_size(ui->Splash_Screen_welcome_label, 120, 0);

	//Write codes Splash_Screen_logo
	ui->Splash_Screen_logo = lv_img_create(ui->Splash_Screen_main_container, NULL);

	//Write style LV_IMG_PART_MAIN for Splash_Screen_logo
	static lv_style_t style_Splash_Screen_logo_main;
	lv_style_reset(&style_Splash_Screen_logo_main);

	//Write style state: LV_STATE_DEFAULT for style_Splash_Screen_logo_main
	lv_style_set_image_recolor(&style_Splash_Screen_logo_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Splash_Screen_logo_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Splash_Screen_logo_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Splash_Screen_logo, LV_IMG_PART_MAIN, &style_Splash_Screen_logo_main);
	lv_obj_set_pos(ui->Splash_Screen_logo, 128.5, 12);
	lv_obj_set_size(ui->Splash_Screen_logo, 63, 11);
	lv_obj_set_click(ui->Splash_Screen_logo, true);
	lv_img_set_src(ui->Splash_Screen_logo,&_Logo_alpha_63x11);
	lv_img_set_pivot(ui->Splash_Screen_logo, 0,0);
	lv_img_set_angle(ui->Splash_Screen_logo, 0);

	//Write codes Splash_Screen_progress_bar
	ui->Splash_Screen_progress_bar = lv_bar_create(ui->Splash_Screen_main_container, NULL);

	//Write style LV_BAR_PART_BG for Splash_Screen_progress_bar
	static lv_style_t style_Splash_Screen_progress_bar_bg;
	lv_style_reset(&style_Splash_Screen_progress_bar_bg);

	//Write style state: LV_STATE_DEFAULT for style_Splash_Screen_progress_bar_bg
	lv_style_set_radius(&style_Splash_Screen_progress_bar_bg, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Splash_Screen_progress_bar_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Splash_Screen_progress_bar_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Splash_Screen_progress_bar_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Splash_Screen_progress_bar_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_Splash_Screen_progress_bar_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_right(&style_Splash_Screen_progress_bar_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_top(&style_Splash_Screen_progress_bar_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_bottom(&style_Splash_Screen_progress_bar_bg, LV_STATE_DEFAULT, 2);
	lv_obj_add_style(ui->Splash_Screen_progress_bar, LV_BAR_PART_BG, &style_Splash_Screen_progress_bar_bg);

	//Write style LV_BAR_PART_INDIC for Splash_Screen_progress_bar
	static lv_style_t style_Splash_Screen_progress_bar_indic;
	lv_style_reset(&style_Splash_Screen_progress_bar_indic);

	//Write style state: LV_STATE_DEFAULT for style_Splash_Screen_progress_bar_indic
	lv_style_set_radius(&style_Splash_Screen_progress_bar_indic, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Splash_Screen_progress_bar_indic, LV_STATE_DEFAULT, lv_color_make(0xb3, 0xe5, 0xd9));
	lv_style_set_bg_grad_color(&style_Splash_Screen_progress_bar_indic, LV_STATE_DEFAULT, lv_color_make(0xb0, 0xe5, 0xd9));
	lv_style_set_bg_grad_dir(&style_Splash_Screen_progress_bar_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Splash_Screen_progress_bar_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Splash_Screen_progress_bar, LV_BAR_PART_INDIC, &style_Splash_Screen_progress_bar_indic);
	lv_obj_set_pos(ui->Splash_Screen_progress_bar, 18, 210);
	lv_obj_set_size(ui->Splash_Screen_progress_bar, 284, 12);
	lv_bar_set_anim_time(ui->Splash_Screen_progress_bar,1000);
	lv_bar_set_value(ui->Splash_Screen_progress_bar,100,LV_ANIM_ON);
	lv_bar_set_range(ui->Splash_Screen_progress_bar,0,100);
	lv_cont_set_layout(ui->Splash_Screen_main_container, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->Splash_Screen_main_container, LV_FIT_NONE);

	//Init events for screen
	events_init_Splash_Screen(ui);
}