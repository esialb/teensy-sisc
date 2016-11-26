/*
 * RangedMemory.cpp
 *
 *  Created on: Nov 26, 2016
 *      Author: robin
 */

#include <device/RangedMemory.h>

RangedMemory::RangedMemory() {
	address = 0;
	size = 0;
}

RangedMemory::~RangedMemory() {
}

uint16_t RangedMemory::get_memory_range_address() {
	return address;
}
uint16_t RangedMemory::get_memory_range_size() {
	return size;
}
void RangedMemory::set_memory_range_address(uint16_t address) {
	this->address = address;
}
void RangedMemory::set_memory_range_size(uint16_t size) {
	this->size = size;
}
