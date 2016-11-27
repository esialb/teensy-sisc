/*
 * RAM.cpp
 *
 *  Created on: Nov 26, 2016
 *      Author: robin
 */

#include <device/RAM.h>
#include <stdlib.h>
#include <string.h>

RAM::RAM(uint16_t address, uint16_t size) {
	set_memory_range_address(address);
	set_memory_range_size(size);
	buffer = (uint16_t*) malloc(size * sizeof(uint16_t));
	memset(buffer, 0, size * sizeof(uint16_t));
}

RAM::~RAM() {
	free(buffer);
}

uint16_t RAM::memory_read(uint16_t address) {
	return buffer[address - get_memory_range_address()];
}
void RAM::memory_write(uint16_t address, uint16_t value) {
	buffer[address - get_memory_range_address()] = value;
}

