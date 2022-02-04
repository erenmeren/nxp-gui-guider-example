/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_Password_Screen(lv_ui *ui){

	//Write codes Password_Screen
	ui->Password_Screen = lv_obj_create(NULL, NULL);

	//Write codes Password_Screen_main_container
	ui->Password_Screen_main_container = lv_cont_create(ui->Password_Screen, NULL);

	//Write style LV_CONT_PART_MAIN for Password_Screen_main_container
	static lv_style_t style_Password_Screen_main_container_main;
	lv_style_reset(&style_Password_Screen_main_container_main);

	//Write style state: LV_STATE_DEFAULT for style_Password_Screen_main_container_main
	lv_style_set_radius(&style_Password_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Password_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_color(&style_Password_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_dir(&style_Password_Screen_main_container_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Password_Screen_main_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Password_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_Password_Screen_main_container_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_Password_Screen_main_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_Password_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Password_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Password_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Password_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Password_Screen_main_container, LV_CONT_PART_MAIN, &style_Password_Screen_main_container_main);
	lv_obj_set_pos(ui->Password_Screen_main_container, 0, 0);
	lv_obj_set_size(ui->Password_Screen_main_container, 320, 240);
	lv_obj_set_click(ui->Password_Screen_main_container, false);

	//Write codes Password_Screen_btn_12
	ui->Password_Screen_btn_12 = lv_btn_create(ui->Password_Screen_main_container, NULL);

	//Write style LV_BTN_PART_MAIN for Password_Screen_btn_12
	static lv_style_t style_Password_Screen_btn_12_main;
	lv_style_reset(&style_Password_Screen_btn_12_main);

	//Write style state: LV_STATE_DEFAULT for style_Password_Screen_btn_12_main
	lv_style_set_radius(&style_Password_Screen_btn_12_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Password_Screen_btn_12_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_Password_Screen_btn_12_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_Password_Screen_btn_12_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Password_Screen_btn_12_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Password_Screen_btn_12_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Password_Screen_btn_12_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Password_Screen_btn_12_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_Password_Screen_btn_12_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Password_Screen_btn_12_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Password_Screen_btn_12, LV_BTN_PART_MAIN, &style_Password_Screen_btn_12_main);
	lv_obj_set_pos(ui->Password_Screen_btn_12, 214, 198);
	lv_obj_set_size(ui->Password_Screen_btn_12, 90, 30);
	ui->Password_Screen_btn_12_label = lv_label_create(ui->Password_Screen_btn_12, NULL);
	lv_label_set_text(ui->Password_Screen_btn_12_label, "DEL");
	lv_obj_set_style_local_text_color(ui->Password_Screen_btn_12_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->Password_Screen_btn_12_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_14);

	//Write codes Password_Screen_back_btn
	ui->Password_Screen_back_btn = lv_btn_create(ui->Password_Screen_main_container, NULL);

	//Write style LV_BTN_PART_MAIN for Password_Screen_back_btn
	static lv_style_t style_Password_Screen_back_btn_main;
	lv_style_reset(&style_Password_Screen_back_btn_main);

	//Write style state: LV_STATE_DEFAULT for style_Password_Screen_back_btn_main
	lv_style_set_radius(&style_Password_Screen_back_btn_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Password_Screen_back_btn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_Password_Screen_back_btn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_Password_Screen_back_btn_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Password_Screen_back_btn_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Password_Screen_back_btn_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Password_Screen_back_btn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Password_Screen_back_btn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_Password_Screen_back_btn_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Password_Screen_back_btn_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Password_Screen_back_btn, LV_BTN_PART_MAIN, &style_Password_Screen_back_btn_main);
	lv_obj_set_pos(ui->Password_Screen_back_btn, 20, 198);
	lv_obj_set_size(ui->Password_Screen_back_btn, 90, 30);
	ui->Password_Screen_back_btn_label = lv_label_create(ui->Password_Screen_back_btn, NULL);
	lv_label_set_text(ui->Password_Screen_back_btn_label, "Back");
	lv_obj_set_style_local_text_color(ui->Password_Screen_back_btn_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_obj_set_style_local_text_font(ui->Password_Screen_back_btn_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_15);

	//Write codes Password_Screen_label_1
	ui->Password_Screen_label_1 = lv_label_create(ui->Password_Screen_main_container, NULL);
	lv_label_set_text(ui->Password_Screen_label_1, "Enter Passcode");
	lv_label_set_long_mode(ui->Password_Screen_label_1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Password_Screen_label_1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Password_Screen_label_1
	static lv_style_t style_Password_Screen_label_1_main;
	lv_style_reset(&style_Password_Screen_label_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Password_Screen_label_1_main
	lv_style_set_radius(&style_Password_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Password_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Password_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Password_Screen_label_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Password_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Password_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Password_Screen_label_1_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_12);
	lv_style_set_text_letter_space(&style_Password_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Password_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Password_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Password_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Password_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Password_Screen_label_1, LV_LABEL_PART_MAIN, &style_Password_Screen_label_1_main);
	lv_obj_set_pos(ui->Password_Screen_label_1, 60, 31);
	lv_obj_set_size(ui->Password_Screen_label_1, 200, 0);

	//Write codes Password_Screen_btn_10
	ui->Password_Screen_btn_10 = lv_btn_create(ui->Password_Screen_main_container, NULL);

	//Write style LV_BTN_PART_MAIN for Password_Screen_btn_10
	static lv_style_t style_Password_Screen_btn_10_main;
	lv_style_reset(&style_Password_Screen_btn_10_main);

	//Write style state: LV_STATE_DEFAULT for style_Password_Screen_btn_10_main
	lv_style_set_radius(&style_Password_Screen_btn_10_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Password_Screen_btn_10_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Password_Screen_btn_10_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Password_Screen_btn_10_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Password_Screen_btn_10_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Password_Screen_btn_10_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Password_Screen_btn_10_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Password_Screen_btn_10_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_Password_Screen_btn_10_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Password_Screen_btn_10_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Password_Screen_btn_10, LV_BTN_PART_MAIN, &style_Password_Screen_btn_10_main);
	lv_obj_set_pos(ui->Password_Screen_btn_10, 117, 198);
	lv_obj_set_size(ui->Password_Screen_btn_10, 90, 30);
	ui->Password_Screen_btn_10_label = lv_label_create(ui->Password_Screen_btn_10, NULL);
	lv_label_set_text(ui->Password_Screen_btn_10_label, "0");
	lv_obj_set_style_local_text_color(ui->Password_Screen_btn_10_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->Password_Screen_btn_10_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_12);

	//Write codes Password_Screen_btn_9
	ui->Password_Screen_btn_9 = lv_btn_create(ui->Password_Screen_main_container, NULL);

	//Write style LV_BTN_PART_MAIN for Password_Screen_btn_9
	static lv_style_t style_Password_Screen_btn_9_main;
	lv_style_reset(&style_Password_Screen_btn_9_main);

	//Write style state: LV_STATE_DEFAULT for style_Password_Screen_btn_9_main
	lv_style_set_radius(&style_Password_Screen_btn_9_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Password_Screen_btn_9_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Password_Screen_btn_9_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Password_Screen_btn_9_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Password_Screen_btn_9_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Password_Screen_btn_9_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Password_Screen_btn_9_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Password_Screen_btn_9_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_Password_Screen_btn_9_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Password_Screen_btn_9_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Password_Screen_btn_9, LV_BTN_PART_MAIN, &style_Password_Screen_btn_9_main);
	lv_obj_set_pos(ui->Password_Screen_btn_9, 214, 161);
	lv_obj_set_size(ui->Password_Screen_btn_9, 91, 30);
	ui->Password_Screen_btn_9_label = lv_label_create(ui->Password_Screen_btn_9, NULL);
	lv_label_set_text(ui->Password_Screen_btn_9_label, "9");
	lv_obj_set_style_local_text_color(ui->Password_Screen_btn_9_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->Password_Screen_btn_9_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_12);

	//Write codes Password_Screen_btn_8
	ui->Password_Screen_btn_8 = lv_btn_create(ui->Password_Screen_main_container, NULL);

	//Write style LV_BTN_PART_MAIN for Password_Screen_btn_8
	static lv_style_t style_Password_Screen_btn_8_main;
	lv_style_reset(&style_Password_Screen_btn_8_main);

	//Write style state: LV_STATE_DEFAULT for style_Password_Screen_btn_8_main
	lv_style_set_radius(&style_Password_Screen_btn_8_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Password_Screen_btn_8_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Password_Screen_btn_8_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Password_Screen_btn_8_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Password_Screen_btn_8_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Password_Screen_btn_8_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Password_Screen_btn_8_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Password_Screen_btn_8_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_Password_Screen_btn_8_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Password_Screen_btn_8_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Password_Screen_btn_8, LV_BTN_PART_MAIN, &style_Password_Screen_btn_8_main);
	lv_obj_set_pos(ui->Password_Screen_btn_8, 117, 161);
	lv_obj_set_size(ui->Password_Screen_btn_8, 90, 30);
	ui->Password_Screen_btn_8_label = lv_label_create(ui->Password_Screen_btn_8, NULL);
	lv_label_set_text(ui->Password_Screen_btn_8_label, "8");
	lv_obj_set_style_local_text_color(ui->Password_Screen_btn_8_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->Password_Screen_btn_8_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_12);

	//Write codes Password_Screen_btn_7
	ui->Password_Screen_btn_7 = lv_btn_create(ui->Password_Screen_main_container, NULL);

	//Write style LV_BTN_PART_MAIN for Password_Screen_btn_7
	static lv_style_t style_Password_Screen_btn_7_main;
	lv_style_reset(&style_Password_Screen_btn_7_main);

	//Write style state: LV_STATE_DEFAULT for style_Password_Screen_btn_7_main
	lv_style_set_radius(&style_Password_Screen_btn_7_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Password_Screen_btn_7_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Password_Screen_btn_7_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Password_Screen_btn_7_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Password_Screen_btn_7_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Password_Screen_btn_7_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Password_Screen_btn_7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Password_Screen_btn_7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_Password_Screen_btn_7_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Password_Screen_btn_7_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Password_Screen_btn_7, LV_BTN_PART_MAIN, &style_Password_Screen_btn_7_main);
	lv_obj_set_pos(ui->Password_Screen_btn_7, 20, 161);
	lv_obj_set_size(ui->Password_Screen_btn_7, 90, 30);
	ui->Password_Screen_btn_7_label = lv_label_create(ui->Password_Screen_btn_7, NULL);
	lv_label_set_text(ui->Password_Screen_btn_7_label, "7");
	lv_obj_set_style_local_text_color(ui->Password_Screen_btn_7_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->Password_Screen_btn_7_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_12);

	//Write codes Password_Screen_btn_6
	ui->Password_Screen_btn_6 = lv_btn_create(ui->Password_Screen_main_container, NULL);

	//Write style LV_BTN_PART_MAIN for Password_Screen_btn_6
	static lv_style_t style_Password_Screen_btn_6_main;
	lv_style_reset(&style_Password_Screen_btn_6_main);

	//Write style state: LV_STATE_DEFAULT for style_Password_Screen_btn_6_main
	lv_style_set_radius(&style_Password_Screen_btn_6_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Password_Screen_btn_6_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Password_Screen_btn_6_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Password_Screen_btn_6_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Password_Screen_btn_6_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Password_Screen_btn_6_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Password_Screen_btn_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Password_Screen_btn_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_Password_Screen_btn_6_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Password_Screen_btn_6_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Password_Screen_btn_6, LV_BTN_PART_MAIN, &style_Password_Screen_btn_6_main);
	lv_obj_set_pos(ui->Password_Screen_btn_6, 214, 124);
	lv_obj_set_size(ui->Password_Screen_btn_6, 90, 30);
	ui->Password_Screen_btn_6_label = lv_label_create(ui->Password_Screen_btn_6, NULL);
	lv_label_set_text(ui->Password_Screen_btn_6_label, "6");
	lv_obj_set_style_local_text_color(ui->Password_Screen_btn_6_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->Password_Screen_btn_6_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_12);

	//Write codes Password_Screen_btn_5
	ui->Password_Screen_btn_5 = lv_btn_create(ui->Password_Screen_main_container, NULL);

	//Write style LV_BTN_PART_MAIN for Password_Screen_btn_5
	static lv_style_t style_Password_Screen_btn_5_main;
	lv_style_reset(&style_Password_Screen_btn_5_main);

	//Write style state: LV_STATE_DEFAULT for style_Password_Screen_btn_5_main
	lv_style_set_radius(&style_Password_Screen_btn_5_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Password_Screen_btn_5_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Password_Screen_btn_5_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Password_Screen_btn_5_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Password_Screen_btn_5_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Password_Screen_btn_5_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Password_Screen_btn_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Password_Screen_btn_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_Password_Screen_btn_5_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Password_Screen_btn_5_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Password_Screen_btn_5, LV_BTN_PART_MAIN, &style_Password_Screen_btn_5_main);
	lv_obj_set_pos(ui->Password_Screen_btn_5, 117, 124);
	lv_obj_set_size(ui->Password_Screen_btn_5, 90, 30);
	ui->Password_Screen_btn_5_label = lv_label_create(ui->Password_Screen_btn_5, NULL);
	lv_label_set_text(ui->Password_Screen_btn_5_label, "5");
	lv_obj_set_style_local_text_color(ui->Password_Screen_btn_5_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->Password_Screen_btn_5_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_12);

	//Write codes Password_Screen_btn_4
	ui->Password_Screen_btn_4 = lv_btn_create(ui->Password_Screen_main_container, NULL);

	//Write style LV_BTN_PART_MAIN for Password_Screen_btn_4
	static lv_style_t style_Password_Screen_btn_4_main;
	lv_style_reset(&style_Password_Screen_btn_4_main);

	//Write style state: LV_STATE_DEFAULT for style_Password_Screen_btn_4_main
	lv_style_set_radius(&style_Password_Screen_btn_4_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Password_Screen_btn_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Password_Screen_btn_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Password_Screen_btn_4_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Password_Screen_btn_4_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Password_Screen_btn_4_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Password_Screen_btn_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Password_Screen_btn_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_Password_Screen_btn_4_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Password_Screen_btn_4_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Password_Screen_btn_4, LV_BTN_PART_MAIN, &style_Password_Screen_btn_4_main);
	lv_obj_set_pos(ui->Password_Screen_btn_4, 20, 124);
	lv_obj_set_size(ui->Password_Screen_btn_4, 90, 30);
	ui->Password_Screen_btn_4_label = lv_label_create(ui->Password_Screen_btn_4, NULL);
	lv_label_set_text(ui->Password_Screen_btn_4_label, "4");
	lv_obj_set_style_local_text_color(ui->Password_Screen_btn_4_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->Password_Screen_btn_4_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_12);

	//Write codes Password_Screen_btn_3
	ui->Password_Screen_btn_3 = lv_btn_create(ui->Password_Screen_main_container, NULL);

	//Write style LV_BTN_PART_MAIN for Password_Screen_btn_3
	static lv_style_t style_Password_Screen_btn_3_main;
	lv_style_reset(&style_Password_Screen_btn_3_main);

	//Write style state: LV_STATE_DEFAULT for style_Password_Screen_btn_3_main
	lv_style_set_radius(&style_Password_Screen_btn_3_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Password_Screen_btn_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Password_Screen_btn_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Password_Screen_btn_3_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Password_Screen_btn_3_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Password_Screen_btn_3_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Password_Screen_btn_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Password_Screen_btn_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_Password_Screen_btn_3_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Password_Screen_btn_3_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Password_Screen_btn_3, LV_BTN_PART_MAIN, &style_Password_Screen_btn_3_main);
	lv_obj_set_pos(ui->Password_Screen_btn_3, 214, 87);
	lv_obj_set_size(ui->Password_Screen_btn_3, 90, 30);
	ui->Password_Screen_btn_3_label = lv_label_create(ui->Password_Screen_btn_3, NULL);
	lv_label_set_text(ui->Password_Screen_btn_3_label, "3");
	lv_obj_set_style_local_text_color(ui->Password_Screen_btn_3_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->Password_Screen_btn_3_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_12);

	//Write codes Password_Screen_btn_2
	ui->Password_Screen_btn_2 = lv_btn_create(ui->Password_Screen_main_container, NULL);

	//Write style LV_BTN_PART_MAIN for Password_Screen_btn_2
	static lv_style_t style_Password_Screen_btn_2_main;
	lv_style_reset(&style_Password_Screen_btn_2_main);

	//Write style state: LV_STATE_DEFAULT for style_Password_Screen_btn_2_main
	lv_style_set_radius(&style_Password_Screen_btn_2_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Password_Screen_btn_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Password_Screen_btn_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Password_Screen_btn_2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Password_Screen_btn_2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Password_Screen_btn_2_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Password_Screen_btn_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Password_Screen_btn_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_Password_Screen_btn_2_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Password_Screen_btn_2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Password_Screen_btn_2, LV_BTN_PART_MAIN, &style_Password_Screen_btn_2_main);
	lv_obj_set_pos(ui->Password_Screen_btn_2, 117, 87);
	lv_obj_set_size(ui->Password_Screen_btn_2, 90, 30);
	ui->Password_Screen_btn_2_label = lv_label_create(ui->Password_Screen_btn_2, NULL);
	lv_label_set_text(ui->Password_Screen_btn_2_label, "2");
	lv_obj_set_style_local_text_color(ui->Password_Screen_btn_2_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->Password_Screen_btn_2_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_12);

	//Write codes Password_Screen_btn_1
	ui->Password_Screen_btn_1 = lv_btn_create(ui->Password_Screen_main_container, NULL);

	//Write style LV_BTN_PART_MAIN for Password_Screen_btn_1
	static lv_style_t style_Password_Screen_btn_1_main;
	lv_style_reset(&style_Password_Screen_btn_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Password_Screen_btn_1_main
	lv_style_set_radius(&style_Password_Screen_btn_1_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Password_Screen_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Password_Screen_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Password_Screen_btn_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Password_Screen_btn_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Password_Screen_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Password_Screen_btn_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Password_Screen_btn_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_Password_Screen_btn_1_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Password_Screen_btn_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Password_Screen_btn_1, LV_BTN_PART_MAIN, &style_Password_Screen_btn_1_main);
	lv_obj_set_pos(ui->Password_Screen_btn_1, 20, 87);
	lv_obj_set_size(ui->Password_Screen_btn_1, 90, 30);
	ui->Password_Screen_btn_1_label = lv_label_create(ui->Password_Screen_btn_1, NULL);
	lv_label_set_text(ui->Password_Screen_btn_1_label, "1");
	lv_obj_set_style_local_text_color(ui->Password_Screen_btn_1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->Password_Screen_btn_1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_12);

	//Write codes Password_Screen_logo
	ui->Password_Screen_logo = lv_img_create(ui->Password_Screen_main_container, NULL);

	//Write style LV_IMG_PART_MAIN for Password_Screen_logo
	static lv_style_t style_Password_Screen_logo_main;
	lv_style_reset(&style_Password_Screen_logo_main);

	//Write style state: LV_STATE_DEFAULT for style_Password_Screen_logo_main
	lv_style_set_image_recolor(&style_Password_Screen_logo_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Password_Screen_logo_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Password_Screen_logo_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Password_Screen_logo, LV_IMG_PART_MAIN, &style_Password_Screen_logo_main);
	lv_obj_set_pos(ui->Password_Screen_logo, 128.5, 12);
	lv_obj_set_size(ui->Password_Screen_logo, 63, 11);
	lv_obj_set_click(ui->Password_Screen_logo, true);
	lv_img_set_src(ui->Password_Screen_logo,&_Logo_alpha_63x11);
	lv_img_set_pivot(ui->Password_Screen_logo, 0,0);
	lv_img_set_angle(ui->Password_Screen_logo, 0);
	lv_cont_set_layout(ui->Password_Screen_main_container, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->Password_Screen_main_container, LV_FIT_NONE);

	//Write codes Password_Screen_led_1
	ui->Password_Screen_led_1 = lv_led_create(ui->Password_Screen, NULL);

	//Write style LV_LED_PART_MAIN for Password_Screen_led_1
	static lv_style_t style_Password_Screen_led_1_main;
	lv_style_reset(&style_Password_Screen_led_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Password_Screen_led_1_main
	lv_style_set_radius(&style_Password_Screen_led_1_main, LV_STATE_DEFAULT, 20);
	lv_style_set_bg_color(&style_Password_Screen_led_1_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_color(&style_Password_Screen_led_1_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_dir(&style_Password_Screen_led_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_Password_Screen_led_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_shadow_color(&style_Password_Screen_led_1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_shadow_width(&style_Password_Screen_led_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_color(&style_Password_Screen_led_1_main, LV_STATE_DEFAULT, lv_color_make(0xd0, 0xd0, 0xd0));
	lv_style_set_border_width(&style_Password_Screen_led_1_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_Password_Screen_led_1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Password_Screen_led_1, LV_LED_PART_MAIN, &style_Password_Screen_led_1_main);
	lv_obj_set_pos(ui->Password_Screen_led_1, 118, 57);
	lv_obj_set_size(ui->Password_Screen_led_1, 14, 14);
	lv_led_set_bright(ui->Password_Screen_led_1, 255);

	//Write codes Password_Screen_led_2
	ui->Password_Screen_led_2 = lv_led_create(ui->Password_Screen, NULL);

	//Write style LV_LED_PART_MAIN for Password_Screen_led_2
	static lv_style_t style_Password_Screen_led_2_main;
	lv_style_reset(&style_Password_Screen_led_2_main);

	//Write style state: LV_STATE_DEFAULT for style_Password_Screen_led_2_main
	lv_style_set_radius(&style_Password_Screen_led_2_main, LV_STATE_DEFAULT, 20);
	lv_style_set_bg_color(&style_Password_Screen_led_2_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_color(&style_Password_Screen_led_2_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_dir(&style_Password_Screen_led_2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_Password_Screen_led_2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_shadow_color(&style_Password_Screen_led_2_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_shadow_width(&style_Password_Screen_led_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_color(&style_Password_Screen_led_2_main, LV_STATE_DEFAULT, lv_color_make(0xd0, 0xd0, 0xd0));
	lv_style_set_border_width(&style_Password_Screen_led_2_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_Password_Screen_led_2_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Password_Screen_led_2, LV_LED_PART_MAIN, &style_Password_Screen_led_2_main);
	lv_obj_set_pos(ui->Password_Screen_led_2, 140, 57);
	lv_obj_set_size(ui->Password_Screen_led_2, 14, 14);
	lv_led_set_bright(ui->Password_Screen_led_2, 255);

	//Write codes Password_Screen_led_3
	ui->Password_Screen_led_3 = lv_led_create(ui->Password_Screen, NULL);

	//Write style LV_LED_PART_MAIN for Password_Screen_led_3
	static lv_style_t style_Password_Screen_led_3_main;
	lv_style_reset(&style_Password_Screen_led_3_main);

	//Write style state: LV_STATE_DEFAULT for style_Password_Screen_led_3_main
	lv_style_set_radius(&style_Password_Screen_led_3_main, LV_STATE_DEFAULT, 20);
	lv_style_set_bg_color(&style_Password_Screen_led_3_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_color(&style_Password_Screen_led_3_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_dir(&style_Password_Screen_led_3_main, LV_STATE_DEFAULT, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_Password_Screen_led_3_main, LV_STATE_DEFAULT, 255);
	lv_style_set_shadow_color(&style_Password_Screen_led_3_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_shadow_width(&style_Password_Screen_led_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_color(&style_Password_Screen_led_3_main, LV_STATE_DEFAULT, lv_color_make(0xd0, 0xd0, 0xd0));
	lv_style_set_border_width(&style_Password_Screen_led_3_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_Password_Screen_led_3_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Password_Screen_led_3, LV_LED_PART_MAIN, &style_Password_Screen_led_3_main);
	lv_obj_set_pos(ui->Password_Screen_led_3, 161, 57);
	lv_obj_set_size(ui->Password_Screen_led_3, 14, 14);
	lv_led_set_bright(ui->Password_Screen_led_3, 255);

	//Write codes Password_Screen_led_4
	ui->Password_Screen_led_4 = lv_led_create(ui->Password_Screen, NULL);

	//Write style LV_LED_PART_MAIN for Password_Screen_led_4
	static lv_style_t style_Password_Screen_led_4_main;
	lv_style_reset(&style_Password_Screen_led_4_main);

	//Write style state: LV_STATE_DEFAULT for style_Password_Screen_led_4_main
	lv_style_set_radius(&style_Password_Screen_led_4_main, LV_STATE_DEFAULT, 20);
	lv_style_set_bg_color(&style_Password_Screen_led_4_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_color(&style_Password_Screen_led_4_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_dir(&style_Password_Screen_led_4_main, LV_STATE_DEFAULT, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_Password_Screen_led_4_main, LV_STATE_DEFAULT, 255);
	lv_style_set_shadow_color(&style_Password_Screen_led_4_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_shadow_width(&style_Password_Screen_led_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_color(&style_Password_Screen_led_4_main, LV_STATE_DEFAULT, lv_color_make(0xd0, 0xd0, 0xd0));
	lv_style_set_border_width(&style_Password_Screen_led_4_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_Password_Screen_led_4_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Password_Screen_led_4, LV_LED_PART_MAIN, &style_Password_Screen_led_4_main);
	lv_obj_set_pos(ui->Password_Screen_led_4, 184, 57);
	lv_obj_set_size(ui->Password_Screen_led_4, 14, 14);
	lv_led_set_bright(ui->Password_Screen_led_4, 255);

	//Init events for screen
	events_init_Password_Screen(ui);
}