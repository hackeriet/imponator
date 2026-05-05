// This was vibecoded. Do not trust it.
#include <tinyNeoPixel.h>

#define PIN PIN_PB1
#define PIN_2 PIN_PA2
#define NUM_LEDS 5
#define NUM_LEDS_2 2
#define BRIGHTNESS 25

#define USE_RGBW 0

#if USE_RGBW
#define PIXEL_TYPE (NEO_GRBW + NEO_KHZ800)
#else
#define PIXEL_TYPE (NEO_GRB + NEO_KHZ800)
#endif

tinyNeoPixel strip(NUM_LEDS, PIN, PIXEL_TYPE);
tinyNeoPixel strip2(NUM_LEDS_2, PIN_2, PIXEL_TYPE);

void setup() {
  strip.begin();
  strip.setBrightness(BRIGHTNESS);
  strip.show();

  strip2.begin();
  strip2.setBrightness(BRIGHTNESS);
  strip2.show();
}

void loop() {
  // Set all LEDs on strip 1 to blue
  for (uint8_t i = 0; i < NUM_LEDS; i++) {
#if USE_RGBW
    strip.setPixelColor(i, 0, 0, 255, 0);
#else
    strip.setPixelColor(i, 0, 0, 255);
#endif
  }
  strip.show();

  // Set all LEDs on strip 2 to blue
  for (uint8_t i = 0; i < NUM_LEDS_2; i++) {
#if USE_RGBW
    strip2.setPixelColor(i, 0, 0, 255, 0);
#else
    strip2.setPixelColor(i, 0, 0, 255);
#endif
  }
  strip2.show();

  delay(200);
}
