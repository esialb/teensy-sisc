/*
 * CPU.h
 *
 *  Created on: Nov 26, 2016
 *      Author: robin
 */

#ifndef SRC_CPU_H_
#define SRC_CPU_H_

#include "Memory.h"
#include "CPUDisplay.h"

class CPU {
public:
	CPU();
	virtual ~CPU();

	void tick();

	Memory* get_memory();
	void set_memory(Memory* memory);

	CPU_Display* get_display();
	void set_display(CPU_Display* display);

	uint16_t get_pc();
	void set_pc(uint16_t pc);

private:
	Memory* memory;
	CPU_Display* display;
	uint16_t pc;
};

#endif /* SRC_CPU_H_ */
