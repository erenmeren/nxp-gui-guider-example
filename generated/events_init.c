/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "events_init.h"
#include <stdio.h>
#include "lvgl/lvgl.h"

void events_init(lv_ui *ui)
{
}

static void Home_img_1event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.Wifi_Connect))
			setup_scr_Wifi_Connect(&guider_ui);
		lv_scr_load_anim(guider_ui.Wifi_Connect, LV_SCR_LOAD_ANIM_OVER_LEFT, 0, 500, true);
	}
		break;
	default:
		break;
	}
}

void events_init_Home(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->Home_img_1, Home_img_1event_handler);
}

static void Wifi_Connect_btn_1event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSING:
	{
		if (!lv_debug_check_obj_valid(guider_ui.Wifi_Page_URL))
			setup_scr_Wifi_Page_URL(&guider_ui);
		lv_scr_load_anim(guider_ui.Wifi_Page_URL, LV_SCR_LOAD_ANIM_OVER_LEFT, 0, 500, true);
	}
		break;
	default:
		break;
	}
}

void events_init_Wifi_Connect(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->Wifi_Connect_btn_1, Wifi_Connect_btn_1event_handler);
}

static void Wifi_Page_URL_btn_2event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.Wifi_Connect))
			setup_scr_Wifi_Connect(&guider_ui);
		lv_scr_load_anim(guider_ui.Wifi_Connect, LV_SCR_LOAD_ANIM_OVER_RIGHT, 0, 500, true);
	}
		break;
	default:
		break;
	}
}

void events_init_Wifi_Page_URL(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->Wifi_Page_URL_btn_2, Wifi_Page_URL_btn_2event_handler);
}
