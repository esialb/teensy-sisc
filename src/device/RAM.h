/*
 * RAM.h
 *
 *  Created on: Nov 26, 2016
 *      Author: robin
 */

#ifndef SRC_DEVICE_RAM_H_
#define SRC_DEVICE_RAM_H_

#include <device/RangedMemory.h>

class RAM: public RangedMemory {
public:
	RAM(uint16_t address, uint16_t size);
	virtual ~RAM();

	uint16_t memory_read(uint16_t address) override;
	void memory_write(uint16_t address, uint16_t value) override;


private:
	uint16_t* buffer;

};

#endif /* SRC_DEVICE_RAM_H_ */
