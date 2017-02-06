/********************************/
//Smart LED color control
// Create an ledStrip object and specify the pin it will use.
#include "pins.h"
#include <PololuLedStrip.h>
#define ADDRESSABLE_LED     11
//bool PololuLedStripBase::interruptFriendly = false;
PololuLedStrip<ADDRESSABLE_LED> ledStrip;

// Create a buffer for holding the colors (3 bytes per color).
#define LED_COUNT 5
rgb_color colors[LED_COUNT];

/********************************/

void addressable_led_update();
