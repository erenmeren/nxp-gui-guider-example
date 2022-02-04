/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_Thanks_Screen(lv_ui *ui){

	//Write codes Thanks_Screen
	ui->Thanks_Screen = lv_obj_create(NULL, NULL);

	//Write codes Thanks_Screen_main_container
	ui->Thanks_Screen_main_container = lv_cont_create(ui->Thanks_Screen, NULL);

	//Write style LV_CONT_PART_MAIN for Thanks_Screen_main_container
	static lv_style_t style_Thanks_Screen_main_container_main;
	lv_style_reset(&style_Thanks_Screen_main_container_main);

	//Write style state: LV_STATE_DEFAULT for style_Thanks_Screen_main_container_main
	lv_style_set_radius(&style_Thanks_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Thanks_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_color(&style_Thanks_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0xf0, 0xf1, 0xf1));
	lv_style_set_bg_grad_dir(&style_Thanks_Screen_main_container_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Thanks_Screen_main_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Thanks_Screen_main_container_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_Thanks_Screen_main_container_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_Thanks_Screen_main_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_Thanks_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Thanks_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Thanks_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Thanks_Screen_main_container_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Thanks_Screen_main_container, LV_CONT_PART_MAIN, &style_Thanks_Screen_main_container_main);
	lv_obj_set_pos(ui->Thanks_Screen_main_container, 0, 0);
	lv_obj_set_size(ui->Thanks_Screen_main_container, 320, 240);
	lv_obj_set_click(ui->Thanks_Screen_main_container, false);

	//Write codes Thanks_Screen_label_1
	ui->Thanks_Screen_label_1 = lv_label_create(ui->Thanks_Screen_main_container, NULL);
	lv_label_set_text(ui->Thanks_Screen_label_1, "Thank you for saving");
	lv_label_set_long_mode(ui->Thanks_Screen_label_1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Thanks_Screen_label_1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Thanks_Screen_label_1
	static lv_style_t style_Thanks_Screen_label_1_main;
	lv_style_reset(&style_Thanks_Screen_label_1_main);

	//Write style state: LV_STATE_DEFAULT for style_Thanks_Screen_label_1_main
	lv_style_set_radius(&style_Thanks_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Thanks_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Thanks_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Thanks_Screen_label_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Thanks_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Thanks_Screen_label_1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Thanks_Screen_label_1_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_16);
	lv_style_set_text_letter_space(&style_Thanks_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Thanks_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Thanks_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Thanks_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Thanks_Screen_label_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Thanks_Screen_label_1, LV_LABEL_PART_MAIN, &style_Thanks_Screen_label_1_main);
	lv_obj_set_pos(ui->Thanks_Screen_label_1, 31, 31);
	lv_obj_set_size(ui->Thanks_Screen_label_1, 258, 0);

	//Write codes Thanks_Screen_logo
	ui->Thanks_Screen_logo = lv_img_create(ui->Thanks_Screen_main_container, NULL);

	//Write style LV_IMG_PART_MAIN for Thanks_Screen_logo
	static lv_style_t style_Thanks_Screen_logo_main;
	lv_style_reset(&style_Thanks_Screen_logo_main);

	//Write style state: LV_STATE_DEFAULT for style_Thanks_Screen_logo_main
	lv_style_set_image_recolor(&style_Thanks_Screen_logo_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Thanks_Screen_logo_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Thanks_Screen_logo_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Thanks_Screen_logo, LV_IMG_PART_MAIN, &style_Thanks_Screen_logo_main);
	lv_obj_set_pos(ui->Thanks_Screen_logo, 128.5, 12);
	lv_obj_set_size(ui->Thanks_Screen_logo, 63, 11);
	lv_obj_set_click(ui->Thanks_Screen_logo, true);
	lv_img_set_src(ui->Thanks_Screen_logo,&_Logo_alpha_63x11);
	lv_img_set_pivot(ui->Thanks_Screen_logo, 0,0);
	lv_img_set_angle(ui->Thanks_Screen_logo, 0);
	lv_cont_set_layout(ui->Thanks_Screen_main_container, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->Thanks_Screen_main_container, LV_FIT_NONE);

	//Write codes Thanks_Screen_tree_container
	ui->Thanks_Screen_tree_container = lv_cont_create(ui->Thanks_Screen, NULL);

	//Write style LV_CONT_PART_MAIN for Thanks_Screen_tree_container
	static lv_style_t style_Thanks_Screen_tree_container_main;
	lv_style_reset(&style_Thanks_Screen_tree_container_main);

	//Write style state: LV_STATE_DEFAULT for style_Thanks_Screen_tree_container_main
	lv_style_set_radius(&style_Thanks_Screen_tree_container_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Thanks_Screen_tree_container_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Thanks_Screen_tree_container_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Thanks_Screen_tree_container_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Thanks_Screen_tree_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Thanks_Screen_tree_container_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_Thanks_Screen_tree_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Thanks_Screen_tree_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Thanks_Screen_tree_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Thanks_Screen_tree_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Thanks_Screen_tree_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Thanks_Screen_tree_container_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Thanks_Screen_tree_container, LV_CONT_PART_MAIN, &style_Thanks_Screen_tree_container_main);
	lv_obj_set_pos(ui->Thanks_Screen_tree_container, 20, 87);
	lv_obj_set_size(ui->Thanks_Screen_tree_container, 86, 104);
	lv_obj_set_click(ui->Thanks_Screen_tree_container, false);

	//Write codes Thanks_Screen_tree_img
	ui->Thanks_Screen_tree_img = lv_img_create(ui->Thanks_Screen_tree_container, NULL);

	//Write style LV_IMG_PART_MAIN for Thanks_Screen_tree_img
	static lv_style_t style_Thanks_Screen_tree_img_main;
	lv_style_reset(&style_Thanks_Screen_tree_img_main);

	//Write style state: LV_STATE_DEFAULT for style_Thanks_Screen_tree_img_main
	lv_style_set_image_recolor(&style_Thanks_Screen_tree_img_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Thanks_Screen_tree_img_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Thanks_Screen_tree_img_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Thanks_Screen_tree_img, LV_IMG_PART_MAIN, &style_Thanks_Screen_tree_img_main);
	lv_obj_set_pos(ui->Thanks_Screen_tree_img, 20, 10);
	lv_obj_set_size(ui->Thanks_Screen_tree_img, 45, 45);
	lv_obj_set_click(ui->Thanks_Screen_tree_img, true);
	lv_img_set_src(ui->Thanks_Screen_tree_img,&_Tree_alpha_45x45);
	lv_img_set_pivot(ui->Thanks_Screen_tree_img, 0,0);
	lv_img_set_angle(ui->Thanks_Screen_tree_img, 0);

	//Write codes Thanks_Screen_tree_unit_label
	ui->Thanks_Screen_tree_unit_label = lv_label_create(ui->Thanks_Screen_tree_container, NULL);
	lv_label_set_text(ui->Thanks_Screen_tree_unit_label, "327.5K");
	lv_label_set_long_mode(ui->Thanks_Screen_tree_unit_label, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Thanks_Screen_tree_unit_label, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Thanks_Screen_tree_unit_label
	static lv_style_t style_Thanks_Screen_tree_unit_label_main;
	lv_style_reset(&style_Thanks_Screen_tree_unit_label_main);

	//Write style state: LV_STATE_DEFAULT for style_Thanks_Screen_tree_unit_label_main
	lv_style_set_radius(&style_Thanks_Screen_tree_unit_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Thanks_Screen_tree_unit_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Thanks_Screen_tree_unit_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Thanks_Screen_tree_unit_label_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Thanks_Screen_tree_unit_label_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_Thanks_Screen_tree_unit_label_main, LV_STATE_DEFAULT, lv_color_make(0x70, 0x70, 0x71));
	lv_style_set_text_font(&style_Thanks_Screen_tree_unit_label_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_9);
	lv_style_set_text_letter_space(&style_Thanks_Screen_tree_unit_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Thanks_Screen_tree_unit_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Thanks_Screen_tree_unit_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Thanks_Screen_tree_unit_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Thanks_Screen_tree_unit_label_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Thanks_Screen_tree_unit_label, LV_LABEL_PART_MAIN, &style_Thanks_Screen_tree_unit_label_main);
	lv_obj_set_pos(ui->Thanks_Screen_tree_unit_label, 0, 85);
	lv_obj_set_size(ui->Thanks_Screen_tree_unit_label, 86, 0);

	//Write codes Thanks_Screen_label_2
	ui->Thanks_Screen_label_2 = lv_label_create(ui->Thanks_Screen_tree_container, NULL);
	lv_label_set_text(ui->Thanks_Screen_label_2, "Trees");
	lv_label_set_long_mode(ui->Thanks_Screen_label_2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Thanks_Screen_label_2, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Thanks_Screen_label_2
	static lv_style_t style_Thanks_Screen_label_2_main;
	lv_style_reset(&style_Thanks_Screen_label_2_main);

	//Write style state: LV_STATE_DEFAULT for style_Thanks_Screen_label_2_main
	lv_style_set_radius(&style_Thanks_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Thanks_Screen_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Thanks_Screen_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Thanks_Screen_label_2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Thanks_Screen_label_2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_Thanks_Screen_label_2_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Thanks_Screen_label_2_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_12);
	lv_style_set_text_letter_space(&style_Thanks_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Thanks_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Thanks_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Thanks_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Thanks_Screen_label_2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Thanks_Screen_label_2, LV_LABEL_PART_MAIN, &style_Thanks_Screen_label_2_main);
	lv_obj_set_pos(ui->Thanks_Screen_label_2, 0, 67);
	lv_obj_set_size(ui->Thanks_Screen_label_2, 86, 0);
	lv_cont_set_layout(ui->Thanks_Screen_tree_container, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->Thanks_Screen_tree_container, LV_FIT_NONE);

	//Write codes Thanks_Screen_co2_container
	ui->Thanks_Screen_co2_container = lv_cont_create(ui->Thanks_Screen, NULL);

	//Write style LV_CONT_PART_MAIN for Thanks_Screen_co2_container
	static lv_style_t style_Thanks_Screen_co2_container_main;
	lv_style_reset(&style_Thanks_Screen_co2_container_main);

	//Write style state: LV_STATE_DEFAULT for style_Thanks_Screen_co2_container_main
	lv_style_set_radius(&style_Thanks_Screen_co2_container_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Thanks_Screen_co2_container_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Thanks_Screen_co2_container_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Thanks_Screen_co2_container_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Thanks_Screen_co2_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Thanks_Screen_co2_container_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_Thanks_Screen_co2_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Thanks_Screen_co2_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Thanks_Screen_co2_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Thanks_Screen_co2_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Thanks_Screen_co2_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Thanks_Screen_co2_container_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Thanks_Screen_co2_container, LV_CONT_PART_MAIN, &style_Thanks_Screen_co2_container_main);
	lv_obj_set_pos(ui->Thanks_Screen_co2_container, 117, 87);
	lv_obj_set_size(ui->Thanks_Screen_co2_container, 86, 104);
	lv_obj_set_click(ui->Thanks_Screen_co2_container, false);

	//Write codes Thanks_Screen_co2_img
	ui->Thanks_Screen_co2_img = lv_img_create(ui->Thanks_Screen_co2_container, NULL);

	//Write style LV_IMG_PART_MAIN for Thanks_Screen_co2_img
	static lv_style_t style_Thanks_Screen_co2_img_main;
	lv_style_reset(&style_Thanks_Screen_co2_img_main);

	//Write style state: LV_STATE_DEFAULT for style_Thanks_Screen_co2_img_main
	lv_style_set_image_recolor(&style_Thanks_Screen_co2_img_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Thanks_Screen_co2_img_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Thanks_Screen_co2_img_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Thanks_Screen_co2_img, LV_IMG_PART_MAIN, &style_Thanks_Screen_co2_img_main);
	lv_obj_set_pos(ui->Thanks_Screen_co2_img, 21, 10);
	lv_obj_set_size(ui->Thanks_Screen_co2_img, 45, 45);
	lv_obj_set_click(ui->Thanks_Screen_co2_img, true);
	lv_img_set_src(ui->Thanks_Screen_co2_img,&_CO_alpha_45x45);
	lv_img_set_pivot(ui->Thanks_Screen_co2_img, 0,0);
	lv_img_set_angle(ui->Thanks_Screen_co2_img, 0);

	//Write codes Thanks_Screen_co2_unit_label
	ui->Thanks_Screen_co2_unit_label = lv_label_create(ui->Thanks_Screen_co2_container, NULL);
	lv_label_set_text(ui->Thanks_Screen_co2_unit_label, "26,7M Tons");
	lv_label_set_long_mode(ui->Thanks_Screen_co2_unit_label, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Thanks_Screen_co2_unit_label, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Thanks_Screen_co2_unit_label
	static lv_style_t style_Thanks_Screen_co2_unit_label_main;
	lv_style_reset(&style_Thanks_Screen_co2_unit_label_main);

	//Write style state: LV_STATE_DEFAULT for style_Thanks_Screen_co2_unit_label_main
	lv_style_set_radius(&style_Thanks_Screen_co2_unit_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Thanks_Screen_co2_unit_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Thanks_Screen_co2_unit_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Thanks_Screen_co2_unit_label_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Thanks_Screen_co2_unit_label_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_Thanks_Screen_co2_unit_label_main, LV_STATE_DEFAULT, lv_color_make(0x70, 0x70, 0x71));
	lv_style_set_text_font(&style_Thanks_Screen_co2_unit_label_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_9);
	lv_style_set_text_letter_space(&style_Thanks_Screen_co2_unit_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Thanks_Screen_co2_unit_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Thanks_Screen_co2_unit_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Thanks_Screen_co2_unit_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Thanks_Screen_co2_unit_label_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Thanks_Screen_co2_unit_label, LV_LABEL_PART_MAIN, &style_Thanks_Screen_co2_unit_label_main);
	lv_obj_set_pos(ui->Thanks_Screen_co2_unit_label, 0, 85);
	lv_obj_set_size(ui->Thanks_Screen_co2_unit_label, 86, 0);

	//Write codes Thanks_Screen_label_4
	ui->Thanks_Screen_label_4 = lv_label_create(ui->Thanks_Screen_co2_container, NULL);
	lv_label_set_text(ui->Thanks_Screen_label_4, "CO2");
	lv_label_set_long_mode(ui->Thanks_Screen_label_4, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Thanks_Screen_label_4, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Thanks_Screen_label_4
	static lv_style_t style_Thanks_Screen_label_4_main;
	lv_style_reset(&style_Thanks_Screen_label_4_main);

	//Write style state: LV_STATE_DEFAULT for style_Thanks_Screen_label_4_main
	lv_style_set_radius(&style_Thanks_Screen_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Thanks_Screen_label_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Thanks_Screen_label_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Thanks_Screen_label_4_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Thanks_Screen_label_4_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_Thanks_Screen_label_4_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Thanks_Screen_label_4_main, LV_STATE_DEFAULT, &lv_font_Prompt_SemiBold_12);
	lv_style_set_text_letter_space(&style_Thanks_Screen_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Thanks_Screen_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Thanks_Screen_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Thanks_Screen_label_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Thanks_Screen_label_4_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Thanks_Screen_label_4, LV_LABEL_PART_MAIN, &style_Thanks_Screen_label_4_main);
	lv_obj_set_pos(ui->Thanks_Screen_label_4, 0, 67);
	lv_obj_set_size(ui->Thanks_Screen_label_4, 86, 0);
	lv_cont_set_layout(ui->Thanks_Screen_co2_container, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->Thanks_Screen_co2_container, LV_FIT_NONE);

	//Write codes Thanks_Screen_water_container
	ui->Thanks_Screen_water_container = lv_cont_create(ui->Thanks_Screen, NULL);

	//Write style LV_CONT_PART_MAIN for Thanks_Screen_water_container
	static lv_style_t style_Thanks_Screen_water_container_main;
	lv_style_reset(&style_Thanks_Screen_water_container_main);

	//Write style state: LV_STATE_DEFAULT for style_Thanks_Screen_water_container_main
	lv_style_set_radius(&style_Thanks_Screen_water_container_main, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Thanks_Screen_water_container_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Thanks_Screen_water_container_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Thanks_Screen_water_container_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Thanks_Screen_water_container_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Thanks_Screen_water_container_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_Thanks_Screen_water_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_border_opa(&style_Thanks_Screen_water_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Thanks_Screen_water_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Thanks_Screen_water_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Thanks_Screen_water_container_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Thanks_Screen_water_container_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Thanks_Screen_water_container, LV_CONT_PART_MAIN, &style_Thanks_Screen_water_container_main);
	lv_obj_set_pos(ui->Thanks_Screen_water_container, 214, 87);
	lv_obj_set_size(ui->Thanks_Screen_water_container, 86, 104);
	lv_obj_set_click(ui->Thanks_Screen_water_container, false);

	//Write codes Thanks_Screen_water_img
	ui->Thanks_Screen_water_img = lv_img_create(ui->Thanks_Screen_water_container, NULL);

	//Write style LV_IMG_PART_MAIN for Thanks_Screen_water_img
	static lv_style_t style_Thanks_Screen_water_img_main;
	lv_style_reset(&style_Thanks_Screen_water_img_main);

	//Write style state: LV_STATE_DEFAULT for style_Thanks_Screen_water_img_main
	lv_style_set_image_recolor(&style_Thanks_Screen_water_img_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Thanks_Screen_water_img_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Thanks_Screen_water_img_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Thanks_Screen_water_img, LV_IMG_PART_MAIN, &style_Thanks_Screen_water_img_main);
	lv_obj_set_pos(ui->Thanks_Screen_water_img, 21, 10);
	lv_obj_set_size(ui->Thanks_Screen_water_img, 45, 45);
	lv_obj_set_click(ui->Thanks_Screen_water_img, true);
	lv_img_set_src(ui->Thanks_Screen_water_img,&_Water_alpha_45x45);
	lv_img_set_pivot(ui->Thanks_Screen_water_img, 0,0);
	lv_img_set_angle(ui->Thanks_Screen_water_img, 0);

	//Write codes Thanks_Screen_water_unit_label
	ui->Thanks_Screen_water_unit_label = lv_label_create(ui->Thanks_Screen_water_container, NULL);
	lv_label_set_text(ui->Thanks_Screen_water_unit_label, "12,3B Liters");
	lv_label_set_long_mode(ui->Thanks_Screen_water_unit_label, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Thanks_Screen_water_unit_label, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Thanks_Screen_water_unit_label
	static lv_style_t style_Thanks_Screen_water_unit_label_main;
	lv_style_reset(&style_Thanks_Screen_water_unit_label_main);

	//Write style state: LV_STATE_DEFAULT for style_Thanks_Screen_water_unit_label_main
	lv_style_set_radius(&style_Thanks_Screen_water_unit_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Thanks_Screen_water_unit_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Thanks_Screen_water_unit_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Thanks_Screen_water_unit_label_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Thanks_Screen_water_unit_label_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_Thanks_Screen_water_unit_label_main, LV_STATE_DEFAULT, lv_color_make(0x70, 0x70, 0x71));
	lv_style_set_text_font(&style_Thanks_Screen_water_unit_label_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_9);
	lv_style_set_text_letter_space(&style_Thanks_Screen_water_unit_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Thanks_Screen_water_unit_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Thanks_Screen_water_unit_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Thanks_Screen_water_unit_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Thanks_Screen_water_unit_label_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Thanks_Screen_water_unit_label, LV_LABEL_PART_MAIN, &style_Thanks_Screen_water_unit_label_main);
	lv_obj_set_pos(ui->Thanks_Screen_water_unit_label, 0, 85);
	lv_obj_set_size(ui->Thanks_Screen_water_unit_label, 86, 0);

	//Write codes Thanks_Screen_label_6
	ui->Thanks_Screen_label_6 = lv_label_create(ui->Thanks_Screen_water_container, NULL);
	lv_label_set_text(ui->Thanks_Screen_label_6, "Water");
	lv_label_set_long_mode(ui->Thanks_Screen_label_6, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Thanks_Screen_label_6, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Thanks_Screen_label_6
	static lv_style_t style_Thanks_Screen_label_6_main;
	lv_style_reset(&style_Thanks_Screen_label_6_main);

	//Write style state: LV_STATE_DEFAULT for style_Thanks_Screen_label_6_main
	lv_style_set_radius(&style_Thanks_Screen_label_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Thanks_Screen_label_6_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Thanks_Screen_label_6_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Thanks_Screen_label_6_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Thanks_Screen_label_6_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_Thanks_Screen_label_6_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Thanks_Screen_label_6_main, LV_STATE_DEFAULT, &lv_font_Prompt_Medium_12);
	lv_style_set_text_letter_space(&style_Thanks_Screen_label_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Thanks_Screen_label_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Thanks_Screen_label_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Thanks_Screen_label_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Thanks_Screen_label_6_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Thanks_Screen_label_6, LV_LABEL_PART_MAIN, &style_Thanks_Screen_label_6_main);
	lv_obj_set_pos(ui->Thanks_Screen_label_6, 0, 67);
	lv_obj_set_size(ui->Thanks_Screen_label_6, 86, 0);
	lv_cont_set_layout(ui->Thanks_Screen_water_container, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->Thanks_Screen_water_container, LV_FIT_NONE);

	//Init events for screen
	events_init_Thanks_Screen(ui);
}