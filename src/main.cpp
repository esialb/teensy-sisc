/*
 * main.cpp
 *
 *  Created on: Nov 25, 2016
 *      Author: robin
 */


#include <Arduino.h>
#include <i2c_t3.h>
#include <stdint.h>

#include <t3_Adafruit_SSD1306.h>

t3_Adafruit_SSD1306 gfx0(&Wire);
t3_Adafruit_SSD1306 gfx1(&Wire1);

void setup() {
	gfx0.begin();
	gfx0.clearDisplay();
	gfx0.setTextColor(WHITE);
	gfx0.print("gfx0");
	gfx0.display();

	gfx1.begin();
	gfx1.clearDisplay();
	gfx1.setTextColor(WHITE);
	gfx1.print("gfx1");
	gfx1.display();
}

void loop() {

}
