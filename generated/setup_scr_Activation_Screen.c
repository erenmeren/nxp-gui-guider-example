/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_Activation_Screen(lv_ui *ui){

	//Write codes Activation_Screen
	ui->Activation_Screen = lv_obj_create(NULL, NULL);

	//Write codes Activation_Screen_main_container
	ui->Activation_Screen_main_container = lv_cont_create(ui->Activation_Screen, NULL);

	//Write style LV_CONT_PART_MAIN for Activation_Screen_main_container
	static lv_style_t style_Activation_Screen_main_container_main;
	lv_style_reset(&style_Activation_Screen_main_container_main);

	//Write style state: LV_STATE_DEFAULT for style_Activation_Screen_main_container_main
	lv_style_set_radius(&style_Activation_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Activation_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_color(&style_Activation_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_dir(&style_Activation_Screen_main_container_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Activation_Screen_main_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Activation_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_Activation_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Activation_Screen_main_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_Activation_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Activation_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Activation_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Activation_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Activation_Screen_main_container, LV_CONT_PART_MAIN, &style_Activation_Screen_main_container_main);
	lv_obj_set_pos(ui->Activation_Screen_main_container, 0, 0);
	lv_obj_set_size(ui->Activation_Screen_main_container, 320, 240);
	lv_obj_set_click(ui->Activation_Screen_main_container, false);

	//Write codes Activation_Screen_spinner
	ui->Activation_Screen_spinner = lv_spinner_create(ui->Activation_Screen_main_container, NULL);
	lv_spinner_set_arc_length(ui->Activation_Screen_spinner,60);
	lv_spinner_set_spin_time(ui->Activation_Screen_spinner,1000);
	lv_spinner_set_type(ui->Activation_Screen_spinner,LV_SPINNER_TYPE_SPINNING_ARC);
	lv_spinner_set_dir(ui->Activation_Screen_spinner,LV_SPINNER_DIR_FORWARD);

	//Write style LV_SPINNER_PART_BG for Activation_Screen_spinner
	static lv_style_t style_Activation_Screen_spinner_bg;
	lv_style_reset(&style_Activation_Screen_spinner_bg);

	//Write style state: LV_STATE_DEFAULT for style_Activation_Screen_spinner_bg
	lv_style_set_bg_color(&style_Activation_Screen_spinner_bg, LV_STATE_DEFAULT, lv_color_make(0xb0, 0xe5, 0xd7));
	lv_style_set_bg_grad_color(&style_Activation_Screen_spinner_bg, LV_STATE_DEFAULT, lv_color_make(0xb0, 0xe5, 0xd7));
	lv_style_set_bg_grad_dir(&style_Activation_Screen_spinner_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_Activation_Screen_spinner_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Activation_Screen_spinner_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Activation_Screen_spinner_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Activation_Screen_spinner_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Activation_Screen_spinner_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_line_color(&style_Activation_Screen_spinner_bg, LV_STATE_DEFAULT, lv_color_make(0xb0, 0xe5, 0xd7));
	lv_style_set_line_width(&style_Activation_Screen_spinner_bg, LV_STATE_DEFAULT, 7);
	lv_obj_add_style(ui->Activation_Screen_spinner, LV_SPINNER_PART_BG, &style_Activation_Screen_spinner_bg);

	//Write style LV_SPINNER_PART_INDIC for Activation_Screen_spinner
	static lv_style_t style_Activation_Screen_spinner_indic;
	lv_style_reset(&style_Activation_Screen_spinner_indic);

	//Write style state: LV_STATE_DEFAULT for style_Activation_Screen_spinner_indic
	lv_style_set_line_color(&style_Activation_Screen_spinner_indic, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_line_width(&style_Activation_Screen_spinner_indic, LV_STATE_DEFAULT, 7);
	lv_obj_add_style(ui->Activation_Screen_spinner, LV_SPINNER_PART_INDIC, &style_Activation_Screen_spinner_indic);
	lv_obj_set_pos(ui->Activation_Screen_spinner, 142.5, 172);
	lv_obj_set_size(ui->Activation_Screen_spinner, 35, 35);

	//Write codes Activation_Screen_send_activation_email_btn
	ui->Activation_Screen_send_activation_email_btn = lv_btn_create(ui->Activation_Screen_main_container, NULL);

	//Write style LV_BTN_PART_MAIN for Activation_Screen_send_activation_email_btn
	static lv_style_t style_Activation_Screen_send_activation_email_btn_main;
	lv_style_reset(&style_Activation_Screen_send_activation_email_btn_main);

	//Write style state: LV_STATE_DEFAULT for style_Activation_Screen_send_activation_email_btn_main
	lv_style_set_radius(&style_Activation_Screen_send_activation_email_btn_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Activation_Screen_send_activation_email_btn_main, LV_STATE_DEFAULT, lv_color_make(0xb0, 0xe5, 0xd7));
	lv_style_set_bg_grad_color(&style_Activation_Screen_send_activation_email_btn_main, LV_STATE_DEFAULT, lv_color_make(0xb0, 0xe5, 0xd7));
	lv_style_set_bg_grad_dir(&style_Activation_Screen_send_activation_email_btn_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Activation_Screen_send_activation_email_btn_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Activation_Screen_send_activation_email_btn_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Activation_Screen_send_activation_email_btn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Activation_Screen_send_activation_email_btn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_outline_color(&style_Activation_Screen_send_activation_email_btn_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Activation_Screen_send_activation_email_btn_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Activation_Screen_send_activation_email_btn, LV_BTN_PART_MAIN, &style_Activation_Screen_send_activation_email_btn_main);
	lv_obj_set_pos(ui->Activation_Screen_send_activation_email_btn, 110, 172);
	lv_obj_set_size(ui->Activation_Screen_send_activation_email_btn, 100, 34);
	ui->Activation_Screen_send_activation_email_btn_label = lv_label_create(ui->Activation_Screen_send_activation_email_btn, NULL);
	lv_label_set_text(ui->Activation_Screen_send_activation_email_btn_label, "Send again");
	lv_obj_set_style_local_text_color(ui->Activation_Screen_send_activation_email_btn_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->Activation_Screen_send_activation_email_btn_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_12);

	//Write codes Activation_Screen_logo
	ui->Activation_Screen_logo = lv_img_create(ui->Activation_Screen_main_container, NULL);

	//Write style LV_IMG_PART_MAIN for Activation_Screen_logo
	static lv_style_t style_Activation_Screen_logo_main;
	lv_style_reset(&style_Activation_Screen_logo_main);

	//Write style state: LV_STATE_DEFAULT for style_Activation_Screen_logo_main
	lv_style_set_image_recolor(&style_Activation_Screen_logo_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Activation_Screen_logo_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Activation_Screen_logo_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Activation_Screen_logo, LV_IMG_PART_MAIN, &style_Activation_Screen_logo_main);
	lv_obj_set_pos(ui->Activation_Screen_logo, 128.5, 12);
	lv_obj_set_size(ui->Activation_Screen_logo, 63, 11);
	lv_obj_set_click(ui->Activation_Screen_logo, true);
	lv_img_set_src(ui->Activation_Screen_logo,&_Logo_alpha_63x11);
	lv_img_set_pivot(ui->Activation_Screen_logo, 0,0);
	lv_img_set_angle(ui->Activation_Screen_logo, 0);
	lv_cont_set_layout(ui->Activation_Screen_main_container, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->Activation_Screen_main_container, LV_FIT_NONE);

	//Write codes Activation_Screen_cont_1
	ui->Activation_Screen_cont_1 = lv_cont_create(ui->Activation_Screen, NULL);

	//Write style LV_CONT_PART_MAIN for Activation_Screen_cont_1
	static lv_style_t style_Activation_Screen_cont_1_main;
	lv_style_reset(&style_Activation_Screen_cont_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Activation_Screen_cont_1_main
	lv_style_set_radius(&style_Activation_Screen_cont_1_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Activation_Screen_cont_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Activation_Screen_cont_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Activation_Screen_cont_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Activation_Screen_cont_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Activation_Screen_cont_1_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_Activation_Screen_cont_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Activation_Screen_cont_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_Activation_Screen_cont_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Activation_Screen_cont_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Activation_Screen_cont_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Activation_Screen_cont_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Activation_Screen_cont_1, LV_CONT_PART_MAIN, &style_Activation_Screen_cont_1_main);
	lv_obj_set_pos(ui->Activation_Screen_cont_1, 50, 67);
	lv_obj_set_size(ui->Activation_Screen_cont_1, 220, 60);
	lv_obj_set_click(ui->Activation_Screen_cont_1, false);

	//Write codes Activation_Screen_label_2
	ui->Activation_Screen_label_2 = lv_label_create(ui->Activation_Screen_cont_1, NULL);
	lv_label_set_text(ui->Activation_Screen_label_2, "Please check your Inbox");
	lv_label_set_long_mode(ui->Activation_Screen_label_2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Activation_Screen_label_2, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Activation_Screen_label_2
	static lv_style_t style_Activation_Screen_label_2_main;
	lv_style_reset(&style_Activation_Screen_label_2_main);

	//Write style state: LV_STATE_DEFAULT for style_Activation_Screen_label_2_main
	lv_style_set_radius(&style_Activation_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Activation_Screen_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Activation_Screen_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Activation_Screen_label_2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Activation_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Activation_Screen_label_2_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Activation_Screen_label_2_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_16);
	lv_style_set_text_letter_space(&style_Activation_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Activation_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Activation_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Activation_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Activation_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Activation_Screen_label_2, LV_LABEL_PART_MAIN, &style_Activation_Screen_label_2_main);
	lv_obj_set_pos(ui->Activation_Screen_label_2, 10, 30);
	lv_obj_set_size(ui->Activation_Screen_label_2, 200, 0);

	//Write codes Activation_Screen_label_1
	ui->Activation_Screen_label_1 = lv_label_create(ui->Activation_Screen_cont_1, NULL);
	lv_label_set_text(ui->Activation_Screen_label_1, "Activation e-mail sent");
	lv_label_set_long_mode(ui->Activation_Screen_label_1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Activation_Screen_label_1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Activation_Screen_label_1
	static lv_style_t style_Activation_Screen_label_1_main;
	lv_style_reset(&style_Activation_Screen_label_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Activation_Screen_label_1_main
	lv_style_set_radius(&style_Activation_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Activation_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Activation_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Activation_Screen_label_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Activation_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Activation_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Activation_Screen_label_1_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_16);
	lv_style_set_text_letter_space(&style_Activation_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Activation_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Activation_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Activation_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Activation_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Activation_Screen_label_1, LV_LABEL_PART_MAIN, &style_Activation_Screen_label_1_main);
	lv_obj_set_pos(ui->Activation_Screen_label_1, 10, 10);
	lv_obj_set_size(ui->Activation_Screen_label_1, 200, 0);
	lv_cont_set_layout(ui->Activation_Screen_cont_1, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->Activation_Screen_cont_1, LV_FIT_NONE);

	//Init events for screen
	events_init_Activation_Screen(ui);
}