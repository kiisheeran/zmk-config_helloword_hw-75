/*
 * Copyright (c) 2022-2023 XiNGRZ
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <stdbool.h>

struct knob_pref {
	bool active;
	enum knob_mode mode;
	int ppr;
	float torque_limit;
};

bool knob_app_get_demo(void);
void knob_app_set_demo(bool demo);

int knob_app_get_prefs(const struct knob_pref **prefs, const char ***names);
const struct knob_pref *knob_app_get_pref(uint8_t layer_id);
void knob_app_set_pref(uint8_t layer_id, struct knob_pref *pref);
