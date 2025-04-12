#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BOLT
#define LV_ATTRIBUTE_IMG_BOLT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BOLT uint8_t bolt_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
    0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
    0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
    0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
    0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif

    0x08, 0x10, 0x20, 0x40, 0xf8, 0x10, 0x20, 0x40, 0x80,
};

const lv_img_dsc_t bolt = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 5,
    .header.h = 9,
    .data_size = 17,
    .data = bolt_map,
};

#ifndef LV_ATTRIBUTE_IMG_BT
#define LV_ATTRIBUTE_IMG_BT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BT uint8_t bt_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
    0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
    0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
    0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
    0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif

    0xfb, 0xf0, 0xf9, 0xf0, 0xf8, 0xf0, 0xda, 0x70, 0xcb, 0x30, 0xe2, 0x70, 0xf0, 0xf0, 0xf9,
    0xf0, 0xf0, 0xf0, 0xe2, 0x70, 0xcb, 0x30, 0xda, 0x70, 0xf8, 0xf0, 0xf9, 0xf0, 0xfb, 0xf0,
};

const lv_img_dsc_t bt = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 12,
    .header.h = 15,
    .data_size = 38,
    .data = bt_map,
};

#ifndef LV_ATTRIBUTE_IMG_BT_NO_SIGNAL
#define LV_ATTRIBUTE_IMG_BT_NO_SIGNAL
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BT_NO_SIGNAL uint8_t
    bt_no_signal_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif

        0xfb, 0xf0, 0x79, 0xf0, 0x38, 0xf0, 0x9a, 0x70, 0xcf, 0x30, 0xe6, 0x70, 0xf3, 0xf0, 0xf9,
        0xf0, 0xfc, 0xf0, 0xe6, 0x70, 0xcb, 0x30, 0xdb, 0x90, 0xf8, 0xc0, 0xf9, 0xe0, 0xfb, 0xf0,
};

const lv_img_dsc_t bt_no_signal = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 12,
    .header.h = 15,
    .data_size = 38,
    .data = bt_no_signal_map,
};

#ifndef LV_ATTRIBUTE_IMG_BT_UNBONDED
#define LV_ATTRIBUTE_IMG_BT_UNBONDED
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BT_UNBONDED uint8_t
    bt_unbonded_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

        0x00, 0x20, 0x00, 0x00, 0x30, 0x00, 0x00, 0x38, 0x00, 0x21, 0x2c, 0x10, 0x41, 0xa6, 0x08,
        0x48, 0xec, 0x48, 0x90, 0x78, 0x24, 0x92, 0x31, 0x24, 0x90, 0x78, 0x24, 0x48, 0xec, 0x48,
        0x41, 0xa6, 0x08, 0x21, 0x2c, 0x10, 0x00, 0x38, 0x00, 0x00, 0x30, 0x00, 0x00, 0x20, 0x00,
};

const lv_img_dsc_t bt_unbonded = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 22,
    .header.h = 15,
    .data_size = 53,
    .data = bt_unbonded_map,
};

#ifndef LV_ATTRIBUTE_IMG_USB
#define LV_ATTRIBUTE_IMG_USB
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_USB uint8_t usb_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
    0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
    0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
    0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
    0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif

    0xff, 0x9f, 0xf0, 0xfe, 0x0f, 0xf0, 0xfc, 0x9f, 0xf0, 0xf9, 0xff,
    0xb0, 0x1b, 0xff, 0x90, 0x00, 0x00, 0x00, 0x1f, 0x7f, 0x90, 0xff,
    0x3f, 0xb0, 0xff, 0x91, 0xf0, 0xff, 0xc1, 0xf0, 0xff, 0xf1, 0xf0,
};

const lv_img_dsc_t usb = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 20,
    .header.h = 11,
    .data_size = 41,
    .data = usb_map,
};

#ifndef LV_ATTRIBUTE_IMG_GAUGE
#define LV_ATTRIBUTE_IMG_GAUGE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_GAUGE uint8_t gauge_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
    0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
    0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
    0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
    0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif

    0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x01, 0x00, 0x03,
    0xc0, 0x00, 0x00, 0x07, 0xff, 0xf0, 0x00, 0x10, 0x78, 0x03, 0xfc, 0x00, 0x01,
    0x80, 0x00, 0xfe, 0x00, 0x02, 0x00, 0x00, 0x3f, 0x00, 0x8c, 0x00, 0x00, 0x0f,
    0x80, 0x10, 0x00, 0x00, 0x07, 0x00, 0x20, 0x00, 0x00, 0x02, 0x00,
};

const lv_img_dsc_t gauge = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 33,
    .header.h = 10,
    .data_size = 58,
    .data = gauge_map,
};

#ifndef LV_ATTRIBUTE_IMG_GRID
#define LV_ATTRIBUTE_IMG_GRID
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_GRID uint8_t grid_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
    0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
    0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
    0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
    0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif

    0xaa, 0x95, 0x52, 0xaa, 0x55, 0x4a, 0xa9, 0x55, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x80, 0x10, 0x02, 0x00, 0x40, 0x08, 0x01, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x80, 0x10, 0x02, 0x00, 0x40, 0x08, 0x01, 0x00, 0x20, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x10, 0x02, 0x00, 0x40, 0x08, 0x01, 0x00, 0x20, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x10, 0x02, 0x00, 0x40, 0x08, 0x01, 0x00,
    0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xaa, 0x95, 0x52, 0xaa, 0x55, 0x4a, 0xa9, 0x55, 0x20, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x10, 0x02, 0x00, 0x40, 0x08, 0x01, 0x00, 0x20, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x10, 0x02, 0x00, 0x40, 0x08, 0x01, 0x00, 0x20,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x10, 0x02, 0x00, 0x40, 0x08, 0x01,
    0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x10, 0x02, 0x00, 0x40,
    0x08, 0x01, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0x95, 0x52, 0xaa, 0x55, 0x4a, 0xa9, 0x55, 0x20, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x10, 0x02, 0x00, 0x40, 0x08, 0x01, 0x00,
    0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x10, 0x02, 0x00, 0x40, 0x08,
    0x01, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x10, 0x02, 0x00,
    0x40, 0x08, 0x01, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x10,
    0x02, 0x00, 0x40, 0x08, 0x01, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xaa, 0x95, 0x52, 0xaa, 0x55, 0x4a, 0xa9, 0x55, 0x20,
};

const lv_img_dsc_t grid = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 67,
    .header.h = 33,
    .data_size = 305,
    .data = grid_map,
};

#ifndef LV_ATTRIBUTE_IMG_PROFILES
#define LV_ATTRIBUTE_IMG_PROFILES
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_PROFILES uint8_t
    profiles_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif

        0xa1, 0x42, 0x85, 0x0a, 0x00, 0x00, 0x00, 0x00, 0xa1, 0x42, 0x85, 0x0a,
};

const lv_img_dsc_t profiles = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 31,
    .header.h = 3,
    .data_size = 20,
    .data = profiles_map,
};
