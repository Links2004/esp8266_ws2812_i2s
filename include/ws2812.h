// ws2812.h 

#ifndef __WS2812_H__
#define __WS2812_H__

// Temporal Dithering
// Dithering preserves color and light when brightness is low.
// If you notice flickering, try reducing the amount of dithering.
// 1 = Disable temporal dithering
// 2, 6, 8 = Enable temporal dithering (larger values = more dithering)
#define WS2812_DITHER_NUM (8)

// Gamma correction
// Uses lookup table to correct for human non-linear brightness perception.
// 1 = enable gamma correction
// 0 = disable gamma correction
// NOTE: Disabling gamma correction is not yet suported. This is always enabled.
#define WS2812_GAMMA_CORRECTION (1) // Disabling is not supporting yet

// This option is not supported yet
#define WS2812_USE_INTERRUPT (0)

#endif

// end of file
