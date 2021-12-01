/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_Receipt_Screen(lv_ui *ui){

	//Write codes Receipt_Screen
	ui->Receipt_Screen = lv_obj_create(NULL, NULL);

	//Write codes Receipt_Screen_main_container
	ui->Receipt_Screen_main_container = lv_cont_create(ui->Receipt_Screen, NULL);

	//Write style LV_CONT_PART_MAIN for Receipt_Screen_main_container
	static lv_style_t style_Receipt_Screen_main_container_main;
	lv_style_reset(&style_Receipt_Screen_main_container_main);

	//Write style state: LV_STATE_DEFAULT for style_Receipt_Screen_main_container_main
	lv_style_set_radius(&style_Receipt_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Receipt_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_color(&style_Receipt_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_dir(&style_Receipt_Screen_main_container_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Receipt_Screen_main_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Receipt_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_Receipt_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Receipt_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Receipt_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Receipt_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Receipt_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Receipt_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Receipt_Screen_main_container, LV_CONT_PART_MAIN, &style_Receipt_Screen_main_container_main);
	lv_obj_set_pos(ui->Receipt_Screen_main_container, 0, 0);
	lv_obj_set_size(ui->Receipt_Screen_main_container, 320, 240);
	lv_obj_set_click(ui->Receipt_Screen_main_container, false);

	//Write codes Receipt_Screen_label_2
	ui->Receipt_Screen_label_2 = lv_label_create(ui->Receipt_Screen_main_container, NULL);
	lv_label_set_text(ui->Receipt_Screen_label_2, "NFC");
	lv_label_set_long_mode(ui->Receipt_Screen_label_2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Receipt_Screen_label_2, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Receipt_Screen_label_2
	static lv_style_t style_Receipt_Screen_label_2_main;
	lv_style_reset(&style_Receipt_Screen_label_2_main);

	//Write style state: LV_STATE_DEFAULT for style_Receipt_Screen_label_2_main
	lv_style_set_radius(&style_Receipt_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Receipt_Screen_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Receipt_Screen_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Receipt_Screen_label_2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Receipt_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Receipt_Screen_label_2_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Receipt_Screen_label_2_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_15);
	lv_style_set_text_letter_space(&style_Receipt_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Receipt_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Receipt_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Receipt_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Receipt_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Receipt_Screen_label_2, LV_LABEL_PART_MAIN, &style_Receipt_Screen_label_2_main);
	lv_obj_set_pos(ui->Receipt_Screen_label_2, 276, 195);
	lv_obj_set_size(ui->Receipt_Screen_label_2, 30, 0);

	//Write codes Receipt_Screen_timer_label
	ui->Receipt_Screen_timer_label = lv_label_create(ui->Receipt_Screen_main_container, NULL);
	lv_label_set_text(ui->Receipt_Screen_timer_label, "08");
	lv_label_set_long_mode(ui->Receipt_Screen_timer_label, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Receipt_Screen_timer_label, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Receipt_Screen_timer_label
	static lv_style_t style_Receipt_Screen_timer_label_main;
	lv_style_reset(&style_Receipt_Screen_timer_label_main);

	//Write style state: LV_STATE_DEFAULT for style_Receipt_Screen_timer_label_main
	lv_style_set_radius(&style_Receipt_Screen_timer_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Receipt_Screen_timer_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Receipt_Screen_timer_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Receipt_Screen_timer_label_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Receipt_Screen_timer_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Receipt_Screen_timer_label_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Receipt_Screen_timer_label_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_15);
	lv_style_set_text_letter_space(&style_Receipt_Screen_timer_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Receipt_Screen_timer_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Receipt_Screen_timer_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Receipt_Screen_timer_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Receipt_Screen_timer_label_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Receipt_Screen_timer_label, LV_LABEL_PART_MAIN, &style_Receipt_Screen_timer_label_main);
	lv_obj_set_pos(ui->Receipt_Screen_timer_label, 20, 199);
	lv_obj_set_size(ui->Receipt_Screen_timer_label, 21, 0);

	//Write codes Receipt_Screen_label_1
	ui->Receipt_Screen_label_1 = lv_label_create(ui->Receipt_Screen_main_container, NULL);
	lv_label_set_text(ui->Receipt_Screen_label_1, "To receive your digital receipt scan QR code or touch with your NFC phone");
	lv_label_set_long_mode(ui->Receipt_Screen_label_1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Receipt_Screen_label_1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Receipt_Screen_label_1
	static lv_style_t style_Receipt_Screen_label_1_main;
	lv_style_reset(&style_Receipt_Screen_label_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Receipt_Screen_label_1_main
	lv_style_set_radius(&style_Receipt_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Receipt_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Receipt_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Receipt_Screen_label_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Receipt_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Receipt_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Receipt_Screen_label_1_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_13);
	lv_style_set_text_letter_space(&style_Receipt_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Receipt_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Receipt_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Receipt_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Receipt_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Receipt_Screen_label_1, LV_LABEL_PART_MAIN, &style_Receipt_Screen_label_1_main);
	lv_obj_set_pos(ui->Receipt_Screen_label_1, 34, 31);
	lv_obj_set_size(ui->Receipt_Screen_label_1, 260, 0);

	//Write codes Receipt_Screen_logo
	ui->Receipt_Screen_logo = lv_img_create(ui->Receipt_Screen_main_container, NULL);

	//Write style LV_IMG_PART_MAIN for Receipt_Screen_logo
	static lv_style_t style_Receipt_Screen_logo_main;
	lv_style_reset(&style_Receipt_Screen_logo_main);

	//Write style state: LV_STATE_DEFAULT for style_Receipt_Screen_logo_main
	lv_style_set_image_recolor(&style_Receipt_Screen_logo_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Receipt_Screen_logo_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Receipt_Screen_logo_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Receipt_Screen_logo, LV_IMG_PART_MAIN, &style_Receipt_Screen_logo_main);
	lv_obj_set_pos(ui->Receipt_Screen_logo, 128.5, 12);
	lv_obj_set_size(ui->Receipt_Screen_logo, 63, 11);
	lv_obj_set_click(ui->Receipt_Screen_logo, true);
	lv_img_set_src(ui->Receipt_Screen_logo,&_Logo_alpha_63x11);
	lv_img_set_pivot(ui->Receipt_Screen_logo, 0,0);
	lv_img_set_angle(ui->Receipt_Screen_logo, 0);
	lv_cont_set_layout(ui->Receipt_Screen_main_container, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->Receipt_Screen_main_container, LV_FIT_NONE);

	//Write codes Receipt_Screen_qr_container
	ui->Receipt_Screen_qr_container = lv_cont_create(ui->Receipt_Screen, NULL);

	//Write style LV_CONT_PART_MAIN for Receipt_Screen_qr_container
	static lv_style_t style_Receipt_Screen_qr_container_main;
	lv_style_reset(&style_Receipt_Screen_qr_container_main);

	//Write style state: LV_STATE_DEFAULT for style_Receipt_Screen_qr_container_main
	lv_style_set_radius(&style_Receipt_Screen_qr_container_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Receipt_Screen_qr_container_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Receipt_Screen_qr_container_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Receipt_Screen_qr_container_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Receipt_Screen_qr_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Receipt_Screen_qr_container_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_Receipt_Screen_qr_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Receipt_Screen_qr_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_Receipt_Screen_qr_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Receipt_Screen_qr_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Receipt_Screen_qr_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Receipt_Screen_qr_container_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Receipt_Screen_qr_container, LV_CONT_PART_MAIN, &style_Receipt_Screen_qr_container_main);
	lv_obj_set_pos(ui->Receipt_Screen_qr_container, 101, 84);
	lv_obj_set_size(ui->Receipt_Screen_qr_container, 125, 125);
	lv_obj_set_click(ui->Receipt_Screen_qr_container, false);
	lv_cont_set_layout(ui->Receipt_Screen_qr_container, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->Receipt_Screen_qr_container, LV_FIT_NONE);

	//Init events for screen
	events_init_Receipt_Screen(ui);
}