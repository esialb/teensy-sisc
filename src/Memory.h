/*
 * Memory.h
 *
 *  Created on: Nov 26, 2016
 *      Author: robin
 */

#ifndef SRC_MEMORY_H_
#define SRC_MEMORY_H_

#include <stdint.h>

class Memory {
public:
	Memory();
	virtual ~Memory();

	virtual uint16_t memory_read(uint16_t address) = 0;
	virtual void memory_write(uint16_t address, uint16_t value) = 0;
};

#endif /* SRC_MEMORY_H_ */
