/*
 * main.cpp
 *
 *  Created on: Nov 25, 2016
 *      Author: robin
 */


#include <Arduino.h>
#include <i2c_t3.h>
#include <stdint.h>

#include "Adafruit_SSD1306.h"

Adafruit_SSD1306 gfx0(&Wire);
Adafruit_SSD1306 gfx1(&Wire1);

void setup() {
	gfx0.begin();
	gfx0.display();

	gfx1.begin();
	gfx1.display();
}

void loop() {

}
