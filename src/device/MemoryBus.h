/*
 * MemoryBus.h
 *
 *  Created on: Nov 26, 2016
 *      Author: robin
 */

#ifndef SRC_MEMORYBUS_H_
#define SRC_MEMORYBUS_H_

#include <Memory.h>
#include <device/RangedMemory.h>

#include <stddef.h>

class MemoryBus: public Memory {
public:
	MemoryBus();
	virtual ~MemoryBus();

	void add_device(RangedMemory* device);

	uint16_t memory_read(uint16_t address) override;
	void memory_write(uint16_t address, uint16_t value) override;


private:
	RangedMemory** devices;
	size_t devices_size;
};

#endif /* SRC_MEMORYBUS_H_ */
