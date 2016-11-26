/*
 * CPU.cpp
 *
 *  Created on: Nov 26, 2016
 *      Author: robin
 */

#include <CPU.h>

CPU::CPU() {
	memory = 0;
	display = 0;
	pc = 0;
}

CPU::~CPU() {
	// TODO Auto-generated destructor stub
}

void CPU::tick() {
	uint16_t a = memory->memory_read(pc + 0);
	uint16_t b = memory->memory_read(pc + 1);
	uint16_t c = memory->memory_read(pc + 2);

	uint16_t mem_a = memory->memory_read(a);
	uint16_t mem_b = memory->memory_read(b);

	if(display) {
		display->clear();
		display->set_pc(pc);
		display->set_a(a);
		display->set_b(b);
		display->set_c(c);
		display->set_mem_a(mem_a);
		display->set_mem_b(mem_b);
		display->display();
	}

	bool neg = (mem_b > mem_a);
	if(neg)
		pc = c;
	else
		pc += 3;
}

Memory* CPU::get_memory() {
	return memory;
}
void CPU::set_memory(Memory* memory) {
	this->memory = memory;
}

CPU_Display* CPU::get_display() {
	return display;
}

void CPU::set_display(CPU_Display* display) {
	this->display = display;
}

uint16_t CPU::get_pc() {
	return pc;
}
void CPU::set_pc(uint16_t pc) {
	this->pc = pc;
}
