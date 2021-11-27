/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_Wifi_Page_URL(lv_ui *ui){

	//Write codes Wifi_Page_URL
	ui->Wifi_Page_URL = lv_obj_create(NULL, NULL);

	//Write codes Wifi_Page_URL_cont_1
	ui->Wifi_Page_URL_cont_1 = lv_cont_create(ui->Wifi_Page_URL, NULL);

	//Write style LV_CONT_PART_MAIN for Wifi_Page_URL_cont_1
	static lv_style_t style_Wifi_Page_URL_cont_1_main;
	lv_style_reset(&style_Wifi_Page_URL_cont_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Wifi_Page_URL_cont_1_main
	lv_style_set_radius(&style_Wifi_Page_URL_cont_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Wifi_Page_URL_cont_1_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_color(&style_Wifi_Page_URL_cont_1_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_dir(&style_Wifi_Page_URL_cont_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Wifi_Page_URL_cont_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Wifi_Page_URL_cont_1_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_Wifi_Page_URL_cont_1_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_Wifi_Page_URL_cont_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_Wifi_Page_URL_cont_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Wifi_Page_URL_cont_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Wifi_Page_URL_cont_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Wifi_Page_URL_cont_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Wifi_Page_URL_cont_1, LV_CONT_PART_MAIN, &style_Wifi_Page_URL_cont_1_main);
	lv_obj_set_pos(ui->Wifi_Page_URL_cont_1, 0, 0);
	lv_obj_set_size(ui->Wifi_Page_URL_cont_1, 320, 240);
	lv_obj_set_click(ui->Wifi_Page_URL_cont_1, false);

	//Write codes Wifi_Page_URL_label_3
	ui->Wifi_Page_URL_label_3 = lv_label_create(ui->Wifi_Page_URL_cont_1, NULL);
	lv_label_set_text(ui->Wifi_Page_URL_label_3, "https://192.168.0.100/wifi/");
	lv_label_set_long_mode(ui->Wifi_Page_URL_label_3, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Wifi_Page_URL_label_3, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Wifi_Page_URL_label_3
	static lv_style_t style_Wifi_Page_URL_label_3_main;
	lv_style_reset(&style_Wifi_Page_URL_label_3_main);

	//Write style state: LV_STATE_DEFAULT for style_Wifi_Page_URL_label_3_main
	lv_style_set_radius(&style_Wifi_Page_URL_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Wifi_Page_URL_label_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Wifi_Page_URL_label_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Wifi_Page_URL_label_3_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Wifi_Page_URL_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Wifi_Page_URL_label_3_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Wifi_Page_URL_label_3_main, LV_STATE_DEFAULT, &lv_font_simsun_8);
	lv_style_set_text_letter_space(&style_Wifi_Page_URL_label_3_main, LV_STATE_DEFAULT, 1);
	lv_style_set_pad_left(&style_Wifi_Page_URL_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Wifi_Page_URL_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Wifi_Page_URL_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Wifi_Page_URL_label_3_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Wifi_Page_URL_label_3, LV_LABEL_PART_MAIN, &style_Wifi_Page_URL_label_3_main);
	lv_obj_set_pos(ui->Wifi_Page_URL_label_3, 70, 165);
	lv_obj_set_size(ui->Wifi_Page_URL_label_3, 180, 0);

	//Write codes Wifi_Page_URL_bar_1
	ui->Wifi_Page_URL_bar_1 = lv_bar_create(ui->Wifi_Page_URL_cont_1, NULL);

	//Write style LV_BAR_PART_BG for Wifi_Page_URL_bar_1
	static lv_style_t style_Wifi_Page_URL_bar_1_bg;
	lv_style_reset(&style_Wifi_Page_URL_bar_1_bg);

	//Write style state: LV_STATE_DEFAULT for style_Wifi_Page_URL_bar_1_bg
	lv_style_set_radius(&style_Wifi_Page_URL_bar_1_bg, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Wifi_Page_URL_bar_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Wifi_Page_URL_bar_1_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Wifi_Page_URL_bar_1_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Wifi_Page_URL_bar_1_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_Wifi_Page_URL_bar_1_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_right(&style_Wifi_Page_URL_bar_1_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_top(&style_Wifi_Page_URL_bar_1_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_bottom(&style_Wifi_Page_URL_bar_1_bg, LV_STATE_DEFAULT, 2);
	lv_obj_add_style(ui->Wifi_Page_URL_bar_1, LV_BAR_PART_BG, &style_Wifi_Page_URL_bar_1_bg);

	//Write style LV_BAR_PART_INDIC for Wifi_Page_URL_bar_1
	static lv_style_t style_Wifi_Page_URL_bar_1_indic;
	lv_style_reset(&style_Wifi_Page_URL_bar_1_indic);

	//Write style state: LV_STATE_DEFAULT for style_Wifi_Page_URL_bar_1_indic
	lv_style_set_radius(&style_Wifi_Page_URL_bar_1_indic, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Wifi_Page_URL_bar_1_indic, LV_STATE_DEFAULT, lv_color_make(0xb3, 0xe5, 0xd9));
	lv_style_set_bg_grad_color(&style_Wifi_Page_URL_bar_1_indic, LV_STATE_DEFAULT, lv_color_make(0xb0, 0xe5, 0xd9));
	lv_style_set_bg_grad_dir(&style_Wifi_Page_URL_bar_1_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Wifi_Page_URL_bar_1_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Wifi_Page_URL_bar_1, LV_BAR_PART_INDIC, &style_Wifi_Page_URL_bar_1_indic);
	lv_obj_set_pos(ui->Wifi_Page_URL_bar_1, 18, 225);
	lv_obj_set_size(ui->Wifi_Page_URL_bar_1, 284, 12);
	lv_bar_set_anim_time(ui->Wifi_Page_URL_bar_1,1000);
	lv_bar_set_value(ui->Wifi_Page_URL_bar_1,60,LV_ANIM_ON);
	lv_bar_set_range(ui->Wifi_Page_URL_bar_1,0,100);

	//Write codes Wifi_Page_URL_img_1
	ui->Wifi_Page_URL_img_1 = lv_img_create(ui->Wifi_Page_URL_cont_1, NULL);

	//Write style LV_IMG_PART_MAIN for Wifi_Page_URL_img_1
	static lv_style_t style_Wifi_Page_URL_img_1_main;
	lv_style_reset(&style_Wifi_Page_URL_img_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Wifi_Page_URL_img_1_main
	lv_style_set_image_recolor(&style_Wifi_Page_URL_img_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Wifi_Page_URL_img_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Wifi_Page_URL_img_1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Wifi_Page_URL_img_1, LV_IMG_PART_MAIN, &style_Wifi_Page_URL_img_1_main);
	lv_obj_set_pos(ui->Wifi_Page_URL_img_1, 113.5, 24);
	lv_obj_set_size(ui->Wifi_Page_URL_img_1, 93, 16);
	lv_obj_set_click(ui->Wifi_Page_URL_img_1, true);
	lv_img_set_src(ui->Wifi_Page_URL_img_1,&_Logo_alpha_93x16);
	lv_img_set_pivot(ui->Wifi_Page_URL_img_1, 0,0);
	lv_img_set_angle(ui->Wifi_Page_URL_img_1, 0);
	lv_cont_set_layout(ui->Wifi_Page_URL_cont_1, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->Wifi_Page_URL_cont_1, LV_FIT_NONE);

	//Write codes Wifi_Page_URL_label_1
	ui->Wifi_Page_URL_label_1 = lv_label_create(ui->Wifi_Page_URL, NULL);
	lv_label_set_text(ui->Wifi_Page_URL_label_1, "Visit following link");
	lv_label_set_long_mode(ui->Wifi_Page_URL_label_1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Wifi_Page_URL_label_1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Wifi_Page_URL_label_1
	static lv_style_t style_Wifi_Page_URL_label_1_main;
	lv_style_reset(&style_Wifi_Page_URL_label_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Wifi_Page_URL_label_1_main
	lv_style_set_radius(&style_Wifi_Page_URL_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Wifi_Page_URL_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_color(&style_Wifi_Page_URL_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_dir(&style_Wifi_Page_URL_label_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Wifi_Page_URL_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Wifi_Page_URL_label_1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Wifi_Page_URL_label_1_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_Wifi_Page_URL_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Wifi_Page_URL_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Wifi_Page_URL_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Wifi_Page_URL_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Wifi_Page_URL_label_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Wifi_Page_URL_label_1, LV_LABEL_PART_MAIN, &style_Wifi_Page_URL_label_1_main);
	lv_obj_set_pos(ui->Wifi_Page_URL_label_1, 28, 55);
	lv_obj_set_size(ui->Wifi_Page_URL_label_1, 264, 0);

	//Write codes Wifi_Page_URL_cont_2
	ui->Wifi_Page_URL_cont_2 = lv_cont_create(ui->Wifi_Page_URL, NULL);

	//Write style LV_CONT_PART_MAIN for Wifi_Page_URL_cont_2
	static lv_style_t style_Wifi_Page_URL_cont_2_main;
	lv_style_reset(&style_Wifi_Page_URL_cont_2_main);

	//Write style state: LV_STATE_DEFAULT for style_Wifi_Page_URL_cont_2_main
	lv_style_set_radius(&style_Wifi_Page_URL_cont_2_main, LV_STATE_DEFAULT, 9);
	lv_style_set_bg_color(&style_Wifi_Page_URL_cont_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Wifi_Page_URL_cont_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Wifi_Page_URL_cont_2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Wifi_Page_URL_cont_2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Wifi_Page_URL_cont_2_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_Wifi_Page_URL_cont_2_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_Wifi_Page_URL_cont_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Wifi_Page_URL_cont_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Wifi_Page_URL_cont_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Wifi_Page_URL_cont_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Wifi_Page_URL_cont_2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Wifi_Page_URL_cont_2, LV_CONT_PART_MAIN, &style_Wifi_Page_URL_cont_2_main);
	lv_obj_set_pos(ui->Wifi_Page_URL_cont_2, 120.5, 79);
	lv_obj_set_size(ui->Wifi_Page_URL_cont_2, 79, 79);
	lv_obj_set_click(ui->Wifi_Page_URL_cont_2, false);
	lv_cont_set_layout(ui->Wifi_Page_URL_cont_2, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->Wifi_Page_URL_cont_2, LV_FIT_NONE);

	//Write codes Wifi_Page_URL_btn_1
	ui->Wifi_Page_URL_btn_1 = lv_btn_create(ui->Wifi_Page_URL, NULL);

	//Write style LV_BTN_PART_MAIN for Wifi_Page_URL_btn_1
	static lv_style_t style_Wifi_Page_URL_btn_1_main;
	lv_style_reset(&style_Wifi_Page_URL_btn_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Wifi_Page_URL_btn_1_main
	lv_style_set_radius(&style_Wifi_Page_URL_btn_1_main, LV_STATE_DEFAULT, 9);
	lv_style_set_bg_color(&style_Wifi_Page_URL_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xb0, 0xe5, 0xd9));
	lv_style_set_bg_grad_color(&style_Wifi_Page_URL_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xb0, 0xe5, 0xd9));
	lv_style_set_bg_grad_dir(&style_Wifi_Page_URL_btn_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Wifi_Page_URL_btn_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Wifi_Page_URL_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_border_width(&style_Wifi_Page_URL_btn_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Wifi_Page_URL_btn_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_Wifi_Page_URL_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Wifi_Page_URL_btn_1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Wifi_Page_URL_btn_1, LV_BTN_PART_MAIN, &style_Wifi_Page_URL_btn_1_main);
	lv_obj_set_pos(ui->Wifi_Page_URL_btn_1, 60, 183);
	lv_obj_set_size(ui->Wifi_Page_URL_btn_1, 90, 32);
	ui->Wifi_Page_URL_btn_1_label = lv_label_create(ui->Wifi_Page_URL_btn_1, NULL);
	lv_label_set_text(ui->Wifi_Page_URL_btn_1_label, "Yes");
	lv_obj_set_style_local_text_color(ui->Wifi_Page_URL_btn_1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->Wifi_Page_URL_btn_1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_simsun_16);

	//Write codes Wifi_Page_URL_btn_2
	ui->Wifi_Page_URL_btn_2 = lv_btn_create(ui->Wifi_Page_URL, NULL);

	//Write style LV_BTN_PART_MAIN for Wifi_Page_URL_btn_2
	static lv_style_t style_Wifi_Page_URL_btn_2_main;
	lv_style_reset(&style_Wifi_Page_URL_btn_2_main);

	//Write style state: LV_STATE_DEFAULT for style_Wifi_Page_URL_btn_2_main
	lv_style_set_radius(&style_Wifi_Page_URL_btn_2_main, LV_STATE_DEFAULT, 9);
	lv_style_set_bg_color(&style_Wifi_Page_URL_btn_2_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_Wifi_Page_URL_btn_2_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_Wifi_Page_URL_btn_2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Wifi_Page_URL_btn_2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Wifi_Page_URL_btn_2_main, LV_STATE_DEFAULT, lv_color_make(0xb0, 0xe5, 0xd9));
	lv_style_set_border_width(&style_Wifi_Page_URL_btn_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Wifi_Page_URL_btn_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_Wifi_Page_URL_btn_2_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Wifi_Page_URL_btn_2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Wifi_Page_URL_btn_2, LV_BTN_PART_MAIN, &style_Wifi_Page_URL_btn_2_main);
	lv_obj_set_pos(ui->Wifi_Page_URL_btn_2, 180, 183);
	lv_obj_set_size(ui->Wifi_Page_URL_btn_2, 90, 32);
	ui->Wifi_Page_URL_btn_2_label = lv_label_create(ui->Wifi_Page_URL_btn_2, NULL);
	lv_label_set_text(ui->Wifi_Page_URL_btn_2_label, "No");
	lv_obj_set_style_local_text_color(ui->Wifi_Page_URL_btn_2_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->Wifi_Page_URL_btn_2_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_simsun_16);

	//Init events for screen
	events_init_Wifi_Page_URL(ui);
}