/*
 * CPUDisplay.cpp
 *
 *  Created on: Nov 26, 2016
 *      Author: robin
 */

#include <CPUDisplay.h>
#include <Fonts/FreeMonoBold9pt7b.h>


CPU_Display::CPU_Display(t3_Adafruit_SSD1306* o) {
	oled = o;
}

CPU_Display::~CPU_Display() {
	// TODO Auto-generated destructor stub
}

void CPU_Display::begin() {
	oled->clearDisplay();
	oled->setTextColor(WHITE);
}

void CPU_Display::set_pc(uint16_t pc) {
	oled->setCursor(0,  7);
	oled->printf("PC:0x%04x", pc);
}
void CPU_Display::set_a(uint16_t a) {
	oled->setCursor(0, 15);
	oled->printf(" A:0x%04x", a);
}
void CPU_Display::set_b(uint16_t b) {
	oled->setCursor(0, 23);
	oled->printf(" B:0x%04x", b);
}
void CPU_Display::set_c(uint16_t c) {
	oled->setCursor(0, 31);
	oled->printf(" C:0x%04x", c);
}

void CPU_Display::set_mem_a(uint16_t ma) {
	oled->setCursor(63, 15);
	oled->printf("MA:0x%04x", ma);
}

void CPU_Display::set_mem_b(uint16_t mb) {
	oled->setCursor(63, 23);
	oled->printf("MB:0x%04x", mb);
}

void CPU_Display::display() {
	oled->display();
}
