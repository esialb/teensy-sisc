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

#include <Fonts/FreeMonoBold9pt7b.h>

t3_Adafruit_SSD1306 gfx0(&Wire);
t3_Adafruit_SSD1306 gfx1(&Wire1);

void setup() {
	gfx0.begin();
	gfx0.clearDisplay();
	gfx0.fillRect(0, 0, 128, 9, WHITE);
	gfx0.setTextColor(BLACK);
	gfx0.setCursor(4, 1);
	gfx0.print("SISC VM OLED CONSOLE");
	gfx0.display();

	gfx1.begin();
	gfx1.clearDisplay();
	gfx1.setTextColor(WHITE);
	gfx1.setFont(&FreeMonoBold9pt7b);
	gfx1.setCursor(0, 15);
	gfx1.print("PC: 0x0000");
	gfx1.setCursor(0, 31);
	gfx1.print(" A: 0x0000");
	gfx1.setCursor(0, 47);
	gfx1.print(" B: 0x0000");
	gfx1.setCursor(0, 63);
	gfx1.print(" C: 0x0000");
	gfx1.display();
}

void loop() {

}
