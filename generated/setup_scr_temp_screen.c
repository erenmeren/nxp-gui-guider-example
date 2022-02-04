/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_temp_screen(lv_ui *ui){

	//Write codes temp_screen
	ui->temp_screen = lv_obj_create(NULL, NULL);

	//Write codes temp_screen_cont_1
	ui->temp_screen_cont_1 = lv_cont_create(ui->temp_screen, NULL);

	//Write style LV_CONT_PART_MAIN for temp_screen_cont_1
	static lv_style_t style_temp_screen_cont_1_main;
	lv_style_reset(&style_temp_screen_cont_1_main);

	//Write style state: LV_STATE_DEFAULT for style_temp_screen_cont_1_main
	lv_style_set_radius(&style_temp_screen_cont_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_temp_screen_cont_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_temp_screen_cont_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_temp_screen_cont_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_temp_screen_cont_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_temp_screen_cont_1_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_temp_screen_cont_1_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_temp_screen_cont_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_temp_screen_cont_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_temp_screen_cont_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_temp_screen_cont_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_temp_screen_cont_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->temp_screen_cont_1, LV_CONT_PART_MAIN, &style_temp_screen_cont_1_main);
	lv_obj_set_pos(ui->temp_screen_cont_1, 3, 5);
	lv_obj_set_size(ui->temp_screen_cont_1, 300, 200);
	lv_obj_set_click(ui->temp_screen_cont_1, false);

	//Write codes temp_screen_img_6
	ui->temp_screen_img_6 = lv_img_create(ui->temp_screen_cont_1, NULL);

	//Write style LV_IMG_PART_MAIN for temp_screen_img_6
	static lv_style_t style_temp_screen_img_6_main;
	lv_style_reset(&style_temp_screen_img_6_main);

	//Write style state: LV_STATE_DEFAULT for style_temp_screen_img_6_main
	lv_style_set_image_recolor(&style_temp_screen_img_6_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_temp_screen_img_6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_temp_screen_img_6_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->temp_screen_img_6, LV_IMG_PART_MAIN, &style_temp_screen_img_6_main);
	lv_obj_set_pos(ui->temp_screen_img_6, 21, 121);
	lv_obj_set_size(ui->temp_screen_img_6, 100, 38);
	lv_obj_set_click(ui->temp_screen_img_6, true);
	lv_img_set_src(ui->temp_screen_img_6,&_Low_alpha_100x38);
	lv_img_set_pivot(ui->temp_screen_img_6, 0,0);
	lv_img_set_angle(ui->temp_screen_img_6, 0);

	//Write codes temp_screen_img_5
	ui->temp_screen_img_5 = lv_img_create(ui->temp_screen_cont_1, NULL);

	//Write style LV_IMG_PART_MAIN for temp_screen_img_5
	static lv_style_t style_temp_screen_img_5_main;
	lv_style_reset(&style_temp_screen_img_5_main);

	//Write style state: LV_STATE_DEFAULT for style_temp_screen_img_5_main
	lv_style_set_image_recolor(&style_temp_screen_img_5_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_temp_screen_img_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_temp_screen_img_5_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->temp_screen_img_5, LV_IMG_PART_MAIN, &style_temp_screen_img_5_main);
	lv_obj_set_pos(ui->temp_screen_img_5, 179, 128);
	lv_obj_set_size(ui->temp_screen_img_5, 100, 37);
	lv_obj_set_click(ui->temp_screen_img_5, true);
	lv_img_set_src(ui->temp_screen_img_5,&_wifiLow_alpha_100x37);
	lv_img_set_pivot(ui->temp_screen_img_5, 0,0);
	lv_img_set_angle(ui->temp_screen_img_5, 0);

	//Write codes temp_screen_img_4
	ui->temp_screen_img_4 = lv_img_create(ui->temp_screen_cont_1, NULL);

	//Write style LV_IMG_PART_MAIN for temp_screen_img_4
	static lv_style_t style_temp_screen_img_4_main;
	lv_style_reset(&style_temp_screen_img_4_main);

	//Write style state: LV_STATE_DEFAULT for style_temp_screen_img_4_main
	lv_style_set_image_recolor(&style_temp_screen_img_4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_temp_screen_img_4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_temp_screen_img_4_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->temp_screen_img_4, LV_IMG_PART_MAIN, &style_temp_screen_img_4_main);
	lv_obj_set_pos(ui->temp_screen_img_4, 16, 17);
	lv_obj_set_size(ui->temp_screen_img_4, 100, 38);
	lv_obj_set_click(ui->temp_screen_img_4, true);
	lv_img_set_src(ui->temp_screen_img_4,&_Full_alpha_100x38);
	lv_img_set_pivot(ui->temp_screen_img_4, 0,0);
	lv_img_set_angle(ui->temp_screen_img_4, 0);

	//Write codes temp_screen_img_3
	ui->temp_screen_img_3 = lv_img_create(ui->temp_screen_cont_1, NULL);

	//Write style LV_IMG_PART_MAIN for temp_screen_img_3
	static lv_style_t style_temp_screen_img_3_main;
	lv_style_reset(&style_temp_screen_img_3_main);

	//Write style state: LV_STATE_DEFAULT for style_temp_screen_img_3_main
	lv_style_set_image_recolor(&style_temp_screen_img_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_temp_screen_img_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_temp_screen_img_3_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->temp_screen_img_3, LV_IMG_PART_MAIN, &style_temp_screen_img_3_main);
	lv_obj_set_pos(ui->temp_screen_img_3, 21, 64);
	lv_obj_set_size(ui->temp_screen_img_3, 100, 38);
	lv_obj_set_click(ui->temp_screen_img_3, true);
	lv_img_set_src(ui->temp_screen_img_3,&_level50_alpha_100x38);
	lv_img_set_pivot(ui->temp_screen_img_3, 0,0);
	lv_img_set_angle(ui->temp_screen_img_3, 0);

	//Write codes temp_screen_img_2
	ui->temp_screen_img_2 = lv_img_create(ui->temp_screen_cont_1, NULL);

	//Write style LV_IMG_PART_MAIN for temp_screen_img_2
	static lv_style_t style_temp_screen_img_2_main;
	lv_style_reset(&style_temp_screen_img_2_main);

	//Write style state: LV_STATE_DEFAULT for style_temp_screen_img_2_main
	lv_style_set_image_recolor(&style_temp_screen_img_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_temp_screen_img_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_temp_screen_img_2_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->temp_screen_img_2, LV_IMG_PART_MAIN, &style_temp_screen_img_2_main);
	lv_obj_set_pos(ui->temp_screen_img_2, 176, 75);
	lv_obj_set_size(ui->temp_screen_img_2, 100, 37);
	lv_obj_set_click(ui->temp_screen_img_2, true);
	lv_img_set_src(ui->temp_screen_img_2,&_wifiMid_alpha_100x37);
	lv_img_set_pivot(ui->temp_screen_img_2, 0,0);
	lv_img_set_angle(ui->temp_screen_img_2, 0);

	//Write codes temp_screen_img_1
	ui->temp_screen_img_1 = lv_img_create(ui->temp_screen_cont_1, NULL);

	//Write style LV_IMG_PART_MAIN for temp_screen_img_1
	static lv_style_t style_temp_screen_img_1_main;
	lv_style_reset(&style_temp_screen_img_1_main);

	//Write style state: LV_STATE_DEFAULT for style_temp_screen_img_1_main
	lv_style_set_image_recolor(&style_temp_screen_img_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_temp_screen_img_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_temp_screen_img_1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->temp_screen_img_1, LV_IMG_PART_MAIN, &style_temp_screen_img_1_main);
	lv_obj_set_pos(ui->temp_screen_img_1, 182, 7);
	lv_obj_set_size(ui->temp_screen_img_1, 100, 42);
	lv_obj_set_click(ui->temp_screen_img_1, true);
	lv_img_set_src(ui->temp_screen_img_1,&_wifiFull_alpha_100x42);
	lv_img_set_pivot(ui->temp_screen_img_1, 0,0);
	lv_img_set_angle(ui->temp_screen_img_1, 0);
	lv_cont_set_layout(ui->temp_screen_cont_1, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->temp_screen_cont_1, LV_FIT_NONE);
}