/*
 * RangedMemory.h
 *
 *  Created on: Nov 26, 2016
 *      Author: robin
 */

#ifndef SRC_RANGEDMEMORY_H_
#define SRC_RANGEDMEMORY_H_

#include <Memory.h>

#include <stdint.h>

class RangedMemory: public Memory {
public:
	RangedMemory();
	virtual ~RangedMemory();

	virtual uint16_t get_memory_range_address();
	virtual uint16_t get_memory_range_size();
	virtual void set_memory_range_address(uint16_t address);
	virtual void set_memory_range_size(uint16_t size);

private:
	uint16_t address;
	uint16_t size;
};

#endif /* SRC_RANGEDMEMORY_H_ */
