/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"
#include "guider_fonts.h"

typedef struct
{
	lv_obj_t *Home;
	lv_obj_t *Home_cont_1;
	lv_obj_t *Home_bar_1;
	lv_obj_t *Home_img_1;
	lv_obj_t *Home_label_1;
	lv_obj_t *Wifi_Connect;
	lv_obj_t *Wifi_Connect_cont_1;
	lv_obj_t *Wifi_Connect_label_3;
	lv_obj_t *Wifi_Connect_bar_1;
	lv_obj_t *Wifi_Connect_img_1;
	lv_obj_t *Wifi_Connect_label_1;
	lv_obj_t *Wifi_Connect_label_2;
	lv_obj_t *Wifi_Connect_cont_2;
	lv_obj_t *Wifi_Connect_label_5;
	lv_obj_t *Wifi_Connect_btn_1;
	lv_obj_t *Wifi_Connect_btn_1_label;
	lv_obj_t *Wifi_Page_URL;
	lv_obj_t *Wifi_Page_URL_cont_1;
	lv_obj_t *Wifi_Page_URL_label_3;
	lv_obj_t *Wifi_Page_URL_bar_1;
	lv_obj_t *Wifi_Page_URL_img_1;
	lv_obj_t *Wifi_Page_URL_label_1;
	lv_obj_t *Wifi_Page_URL_cont_2;
	lv_obj_t *Wifi_Page_URL_btn_1;
	lv_obj_t *Wifi_Page_URL_btn_1_label;
	lv_obj_t *Wifi_Page_URL_btn_2;
	lv_obj_t *Wifi_Page_URL_btn_2_label;
}lv_ui;

void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_Home(lv_ui *ui);
void setup_scr_Wifi_Connect(lv_ui *ui);
void setup_scr_Wifi_Page_URL(lv_ui *ui);
LV_IMG_DECLARE(_Logo_alpha_93x16);

#ifdef __cplusplus
}
#endif
#endif