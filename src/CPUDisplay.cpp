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
	oled->setFont(&FreeMonoBold9pt7b);
	oled->setCursor(0, 15);
	oled->print("PC:");
	oled->setCursor(0, 31);
	oled->print(" A:");
	oled->setCursor(0, 47);
	oled->print(" B:");
	oled->setCursor(0, 63);
	oled->print(" C:");
	oled->display();
}

void CPU_Display::set_pc(uint16_t pc) {
	oled->setCursor(48,  15);
	oled->printf("0x%04x", pc);
}
void CPU_Display::set_a(uint16_t a) {
	oled->setCursor(48, 31);
	oled->printf("0x%04x", a);
}
void CPU_Display::set_b(uint16_t b) {
	oled->setCursor(48, 47);
	oled->printf("0x%04x", b);
}
void CPU_Display::set_c(uint16_t c) {
	oled->setCursor(48, 63);
	oled->printf("0x%04x", c);
}

void CPU_Display::display() {
	oled->display();
}
