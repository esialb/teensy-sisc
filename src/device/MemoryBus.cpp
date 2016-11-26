/*
 * MemoryBus.cpp
 *
 *  Created on: Nov 26, 2016
 *      Author: robin
 */

#include <device/MemoryBus.h>
#include <device/RangedMemory.h>

#include <stdlib.h>
#include <stdint.h>
#include <string.h>

MemoryBus::MemoryBus() {
	devices_size = 0;
	devices = 0;
}

MemoryBus::~MemoryBus() {
	if(devices)
		free(devices);
}

void MemoryBus::add_device(RangedMemory* device) {
	RangedMemory** tmp = (RangedMemory**) malloc((devices_size + 1) * sizeof(RangedMemory*));
	if(devices_size)
		memcpy(tmp, devices, devices_size * sizeof(RangedMemory*));
	tmp[devices_size] = device;
	devices_size++;
}

uint16_t MemoryBus::memory_read(uint16_t address) {
	for(size_t i = 0; i < devices_size; i++) {
		RangedMemory* device = devices[i];
		uint16_t from = device->get_memory_range_address();
		uint16_t to = from + device->get_memory_range_size();
		if(from <= address && address < to)
			return device->memory_read(address);
	}
	return 0;
}

void MemoryBus::memory_write(uint16_t address, uint16_t value) {
	for(size_t i = 0; i < devices_size; i++) {
		RangedMemory* device = devices[i];
		uint16_t from = device->get_memory_range_address();
		uint16_t to = from + device->get_memory_range_size();
		if(from <= address && address < to) {
			device->memory_write(address, value);
		}
	}
}
