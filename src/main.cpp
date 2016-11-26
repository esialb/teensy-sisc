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

#include <CPUDisplay.h>
#include <device/MemoryBus.h>
#include <CPU.h>

t3_Adafruit_SSD1306 gfx0(&Wire);
t3_Adafruit_SSD1306 gfx1(&Wire1);

CPU_Display cpu_display(&gfx1);
MemoryBus bus;
CPU cpu;

void init_console_oled();
void init_cpu();
void init_devices();


void setup() {
	gfx0.begin();
	gfx1.begin();

	init_console_oled();

	init_cpu();
	init_devices();
}

void loop() {
	cpu.tick();
}

void init_console_oled() {
	gfx0.clearDisplay();
	gfx0.setTextColor(WHITE);
	gfx0.display();
}

void init_cpu() {
	cpu_display.begin();
	cpu_display.display();

	cpu.set_display(&cpu_display);
	cpu.set_memory(&bus);
}

void init_devices() {

}
