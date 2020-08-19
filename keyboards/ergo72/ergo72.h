#pragma once

#include "quantum.h"
#include "action_layer.h"
#include <stdint.h>
#include <stdbool.h>
#include "hal.h"

#define LAYOUT_ergodox(                     \
                                            \
    k00, k01, k02, k03, k04, k05, k06,      \
    k10, k11, k12, k13, k14, k15, k16,      \
    k20, k21, k22, k23, k24, k25,           \
    k30, k31, k32, k33, k34, k35, k36,      \
    k40, k41, k42, k43, k44,                \
    k55, k56,                               \
    k54,                                    \
    k53, k52, k51,                          \
                                            \
    k07, k08, k09, k0A, k0B, k0C, k0D,      \
    k17, k18, k19, k1A, k1B, k1C, k1D,      \
    k28, k29, k2A, k2B, k2C, k2D,           \
    k37, k38, k39, k3A, k3B, k3C, k3D,      \
    k49, k4A, k4B, k4C, k4D,                \
    k57, k58,                               \
    k59,                                    \
    k5C, k5B, k5A)                          \
                                            \
  /* matrix positions */                    \
  {                                         \
    {k00, k10, k20, k30, k40, KC_NO},       \
        {k01, k11, k21, k31, k41, k51},     \
        {k02, k12, k22, k32, k42, k52},     \
        {k03, k13, k23, k33, k43, k53},     \
        {k04, k14, k24, k34, k44, k54},     \
        {k05, k15, k25, k35, KC_NO, k55},   \
        {k06, k16, KC_NO, k36, KC_NO, k56}, \
                                            \
        {k0D, k1D, k2D, k3D, k4D, KC_NO},   \
        {k0C, k1C, k2C, k3C, k4C, k5C},     \
        {k0B, k1B, k2B, k3B, k4B, k5B},     \
        {k0A, k1A, k2A, k3A, k4A, k5A},     \
        {k09, k19, k29, k39, k49, k59},     \
        {k08, k18, k28, k38, KC_NO, k58},   \
        {k07, k17, KC_NO, k37, KC_NO, k57} \
  }

