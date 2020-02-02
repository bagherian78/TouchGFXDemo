// 4.13.0 dither_algorithm=2 alpha_dither=yes layout_rotation=0 opaque_image_format=RGB565 non_opaque_image_format=ARGB8888 section=ExtFlashSection extra_section=ExtFlashSection generate_png=no 0x05d51012
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>
#include <touchgfx/lcd/LCD.hpp>
#include <platform/driver/lcd/LCD16bpp.hpp>

extern const unsigned char _arrow_down[]; // BITMAP_ARROW_DOWN_ID = 0, Size: 32x32 pixels
extern const unsigned char _arrow_down_gray[]; // BITMAP_ARROW_DOWN_GRAY_ID = 1, Size: 32x32 pixels
extern const unsigned char _arrow_left[]; // BITMAP_ARROW_LEFT_ID = 2, Size: 32x32 pixels
extern const unsigned char _arrow_left_gray[]; // BITMAP_ARROW_LEFT_GRAY_ID = 3, Size: 32x32 pixels
extern const unsigned char _arrow_right[]; // BITMAP_ARROW_RIGHT_ID = 4, Size: 32x32 pixels
extern const unsigned char _arrow_right_gray[]; // BITMAP_ARROW_RIGHT_GRAY_ID = 5, Size: 32x32 pixels
extern const unsigned char _arrow_up[]; // BITMAP_ARROW_UP_ID = 6, Size: 32x32 pixels
extern const unsigned char _arrow_up_gray[]; // BITMAP_ARROW_UP_GRAY_ID = 7, Size: 32x32 pixels
extern const unsigned char _bg_center[]; // BITMAP_BG_CENTER_ID = 8, Size: 320x240 pixels
extern const unsigned char _bg_left[]; // BITMAP_BG_LEFT_ID = 9, Size: 320x240 pixels
extern const unsigned char _bg_right[]; // BITMAP_BG_RIGHT_ID = 10, Size: 320x240 pixels
extern const unsigned char _blue_logo_touchgfx_logo[]; // BITMAP_BLUE_LOGO_TOUCHGFX_LOGO_ID = 11, Size: 128x128 pixels
extern const unsigned char _circle_progress[]; // BITMAP_CIRCLE_PROGRESS_ID = 12, Size: 100x100 pixels
extern const unsigned char _circle_progress_background[]; // BITMAP_CIRCLE_PROGRESS_BACKGROUND_ID = 13, Size: 100x100 pixels
extern const unsigned char _image_progress_background[]; // BITMAP_IMAGE_PROGRESS_BACKGROUND_ID = 14, Size: 180x37 pixels
extern const unsigned char _progress_stripe[]; // BITMAP_PROGRESS_STRIPE_ID = 15, Size: 40x33 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { _arrow_down, 0, 32, 32, 13, 2, 6, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 27, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _arrow_down_gray, 0, 32, 32, 12, 2, 8, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 27, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _arrow_left, 0, 32, 32, 7, 3, 18, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 5, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _arrow_left_gray, 0, 32, 32, 23, 8, 8, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 16, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _arrow_right, 0, 32, 32, 24, 7, 5, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 18, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _arrow_right_gray, 0, 32, 32, 23, 8, 8, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 16, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _arrow_up, 0, 32, 32, 13, 3, 6, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 27, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _arrow_up_gray, 0, 32, 32, 12, 3, 8, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 27, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _bg_center, 0, 320, 240, 0, 0, 320, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 240, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 },
    { _bg_left, 0, 320, 240, 0, 0, 320, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 240, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 },
    { _bg_right, 0, 320, 240, 0, 0, 320, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 240, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 },
    { _blue_logo_touchgfx_logo, 0, 128, 128, 5, 5, 118, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 118, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _circle_progress, 0, 100, 100, 93, 47, 5, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 5, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _circle_progress_background, 0, 100, 100, 94, 48, 5, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 4, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _image_progress_background, 0, 180, 37, 0, 0, 180, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 37, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 },
    { _progress_stripe, 0, 40, 33, 0, 0, 40, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 33, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}
