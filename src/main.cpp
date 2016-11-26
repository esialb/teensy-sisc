/*
 * main.cpp
 *
 *  Created on: Nov 25, 2016
 *      Author: robin
 */


#include <Arduino.h>
#include <i2c_t3.h>
#include <stdint.h>

#include "t3_Adafruit_SSD1306.h"

#include "CPUDisplay.h"

t3_Adafruit_SSD1306 gfx0(&Wire);
t3_Adafruit_SSD1306 gfx1(&Wire1);

CPU_Display cpu_display(&gfx1);

void setup() {
	gfx0.begin();
	gfx0.clearDisplay();
	gfx0.fillRect(0, 0, 128, 9, WHITE);
	gfx0.setTextColor(BLACK);
	gfx0.setCursor(4, 1);
	gfx0.print("SISC VM OLED CONSOLE");
	gfx0.display();

	gfx1.begin();
	cpu_display.begin();
	cpu_display.set_pc(0);
	cpu_display.set_a(1);
	cpu_display.set_b(2);
	cpu_display.set_c(3);
	cpu_display.display();
}

void loop() {

}
