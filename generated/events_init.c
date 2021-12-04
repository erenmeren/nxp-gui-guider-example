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

static void Splash_Screen_logoevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.AccessPoint_Screen))
			setup_scr_AccessPoint_Screen(&guider_ui);
		lv_scr_load_anim(guider_ui.AccessPoint_Screen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 350, 75, true);
	}
		break;
	default:
		break;
	}
}

void events_init_Splash_Screen(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->Splash_Screen_logo, Splash_Screen_logoevent_handler);
}

static void AccessPoint_Screen_logoevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.WifiPage_Screen))
			setup_scr_WifiPage_Screen(&guider_ui);
		lv_scr_load_anim(guider_ui.WifiPage_Screen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 400, 75, true);
	}
		break;
	default:
		break;
	}
}

void events_init_AccessPoint_Screen(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->AccessPoint_Screen_logo, AccessPoint_Screen_logoevent_handler);
}

static void WifiPage_Screen_logoevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.Activation_Screen))
			setup_scr_Activation_Screen(&guider_ui);
		lv_scr_load_anim(guider_ui.Activation_Screen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 400, 75, true);
	}
		break;
	default:
		break;
	}
}

void events_init_WifiPage_Screen(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->WifiPage_Screen_logo, WifiPage_Screen_logoevent_handler);
}

static void Activation_Screen_logoevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.Home_Screen))
			setup_scr_Home_Screen(&guider_ui);
		lv_scr_load_anim(guider_ui.Home_Screen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 400, 75, true);
	}
		break;
	default:
		break;
	}
}

void events_init_Activation_Screen(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->Activation_Screen_logo, Activation_Screen_logoevent_handler);
}

static void Home_Screen_open_menu_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.Password_Screen))
			setup_scr_Password_Screen(&guider_ui);
		lv_scr_load_anim(guider_ui.Password_Screen, LV_SCR_LOAD_ANIM_MOVE_TOP, 350, 75, true);
	}
		break;
	default:
		break;
	}
}

static void Home_Screen_logoevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.Loading_Screen))
			setup_scr_Loading_Screen(&guider_ui);
		lv_scr_load_anim(guider_ui.Loading_Screen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 400, 75, true);
	}
		break;
	default:
		break;
	}
}

void events_init_Home_Screen(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->Home_Screen_open_menu_btn, Home_Screen_open_menu_btnevent_handler);
	lv_obj_set_event_cb(ui->Home_Screen_logo, Home_Screen_logoevent_handler);
}

static void Loading_Screen_logoevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.Receipt_Screen))
			setup_scr_Receipt_Screen(&guider_ui);
		lv_scr_load_anim(guider_ui.Receipt_Screen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 400, 75, true);
	}
		break;
	default:
		break;
	}
}

void events_init_Loading_Screen(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->Loading_Screen_logo, Loading_Screen_logoevent_handler);
}

static void Receipt_Screen_logoevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.Thanks_Screen))
			setup_scr_Thanks_Screen(&guider_ui);
		lv_scr_load_anim(guider_ui.Thanks_Screen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 400, 75, true);
	}
		break;
	default:
		break;
	}
}

void events_init_Receipt_Screen(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->Receipt_Screen_logo, Receipt_Screen_logoevent_handler);
}

static void Thanks_Screen_logoevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.Home_Screen))
			setup_scr_Home_Screen(&guider_ui);
		lv_scr_load_anim(guider_ui.Home_Screen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 350, 75, true);
	}
		break;
	default:
		break;
	}
}

void events_init_Thanks_Screen(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->Thanks_Screen_logo, Thanks_Screen_logoevent_handler);
}

static void Password_Screen_btn_5event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		lv_obj_set_style_local_bg_color(guider_ui.Password_Screen_led_5, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	}
		break;
	default:
		break;
	}
}

static void Password_Screen_btn_4event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		lv_obj_set_style_local_bg_color(guider_ui.Password_Screen_led_4, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	}
		break;
	default:
		break;
	}
}

static void Password_Screen_btn_3event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		lv_obj_set_style_local_bg_color(guider_ui.Password_Screen_led_3, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	}
		break;
	default:
		break;
	}
}

static void Password_Screen_btn_2event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		lv_obj_set_style_local_bg_color(guider_ui.Password_Screen_led_2, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	}
		break;
	default:
		break;
	}
}

static void Password_Screen_btn_1event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		lv_obj_set_style_local_bg_color(guider_ui.Password_Screen_led_1, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	}
		break;
	default:
		break;
	}
}

static void Password_Screen_logoevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.Settings_Screen))
			setup_scr_Settings_Screen(&guider_ui);
		lv_scr_load_anim(guider_ui.Settings_Screen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 350, 75, true);
	}
		break;
	default:
		break;
	}
}

void events_init_Password_Screen(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->Password_Screen_btn_5, Password_Screen_btn_5event_handler);
	lv_obj_set_event_cb(ui->Password_Screen_btn_4, Password_Screen_btn_4event_handler);
	lv_obj_set_event_cb(ui->Password_Screen_btn_3, Password_Screen_btn_3event_handler);
	lv_obj_set_event_cb(ui->Password_Screen_btn_2, Password_Screen_btn_2event_handler);
	lv_obj_set_event_cb(ui->Password_Screen_btn_1, Password_Screen_btn_1event_handler);
	lv_obj_set_event_cb(ui->Password_Screen_logo, Password_Screen_logoevent_handler);
}

static void Settings_Screen_btn_3event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.FactoryReset_Screen))
			setup_scr_FactoryReset_Screen(&guider_ui);
		lv_scr_load_anim(guider_ui.FactoryReset_Screen, LV_SCR_LOAD_ANIM_OVER_LEFT, 350, 75, true);
	}
		break;
	default:
		break;
	}
}

static void Settings_Screen_btn_2event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.WiFiReset_Screen))
			setup_scr_WiFiReset_Screen(&guider_ui);
		lv_scr_load_anim(guider_ui.WiFiReset_Screen, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 350, 75, true);
	}
		break;
	default:
		break;
	}
}

static void Settings_Screen_btn_1event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.Connectivity_Screen))
			setup_scr_Connectivity_Screen(&guider_ui);
		lv_scr_load_anim(guider_ui.Connectivity_Screen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 350, 75, true);
	}
		break;
	default:
		break;
	}
}

void events_init_Settings_Screen(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->Settings_Screen_btn_3, Settings_Screen_btn_3event_handler);
	lv_obj_set_event_cb(ui->Settings_Screen_btn_2, Settings_Screen_btn_2event_handler);
	lv_obj_set_event_cb(ui->Settings_Screen_btn_1, Settings_Screen_btn_1event_handler);
}

static void Connectivity_Screen_btn_1event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.Settings_Screen))
			setup_scr_Settings_Screen(&guider_ui);
		lv_scr_load_anim(guider_ui.Settings_Screen, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 350, 75, true);
	}
		break;
	default:
		break;
	}
}

void events_init_Connectivity_Screen(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->Connectivity_Screen_btn_1, Connectivity_Screen_btn_1event_handler);
}

static void WiFiReset_Screen_btn_2event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.Settings_Screen))
			setup_scr_Settings_Screen(&guider_ui);
		lv_scr_load_anim(guider_ui.Settings_Screen, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 350, 75, true);
	}
		break;
	default:
		break;
	}
}

static void WiFiReset_Screen_btn_1event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.Splash_Screen))
			setup_scr_Splash_Screen(&guider_ui);
		lv_scr_load_anim(guider_ui.Splash_Screen, LV_SCR_LOAD_ANIM_FADE_ON, 200, 75, true);
	}
		break;
	default:
		break;
	}
}

void events_init_WiFiReset_Screen(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->WiFiReset_Screen_btn_2, WiFiReset_Screen_btn_2event_handler);
	lv_obj_set_event_cb(ui->WiFiReset_Screen_btn_1, WiFiReset_Screen_btn_1event_handler);
}

static void FactoryReset_Screen_btn_2event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.Settings_Screen))
			setup_scr_Settings_Screen(&guider_ui);
		lv_scr_load_anim(guider_ui.Settings_Screen, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 350, 75, true);
	}
		break;
	default:
		break;
	}
}

static void FactoryReset_Screen_btn_1event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.Splash_Screen))
			setup_scr_Splash_Screen(&guider_ui);
		lv_scr_load_anim(guider_ui.Splash_Screen, LV_SCR_LOAD_ANIM_FADE_ON, 300, 75, true);
	}
		break;
	default:
		break;
	}
}

void events_init_FactoryReset_Screen(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->FactoryReset_Screen_btn_2, FactoryReset_Screen_btn_2event_handler);
	lv_obj_set_event_cb(ui->FactoryReset_Screen_btn_1, FactoryReset_Screen_btn_1event_handler);
}
