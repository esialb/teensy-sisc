/*
 * CPUDisplay.h
 *
 *  Created on: Nov 26, 2016
 *      Author: robin
 */

#ifndef SRC_CPUDISPLAY_H_
#define SRC_CPUDISPLAY_H_

#include "t3_Adafruit_SSD1306.h"

class CPU_Display {
public:
	CPU_Display(t3_Adafruit_SSD1306* oled);
	virtual ~CPU_Display();

	void begin();
	void set_pc(uint16_t pc);
	void set_a(uint16_t a);
	void set_b(uint16_t b);
	void set_c(uint16_t c);
	void set_mem_a(uint16_t ma);
	void set_mem_b(uint16_t mb);
	void clear();
	void display();

private:
	t3_Adafruit_SSD1306* oled;
};

#endif /* SRC_CPUDISPLAY_H_ */
