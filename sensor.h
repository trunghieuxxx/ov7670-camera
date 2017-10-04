#ifndef _SENSOR_H
#define _SENSOR_H


#include <Arduino.h>


#include "delay.h"
#define REG_PID		0x0a	// Product ID MSB
#define REG_VER		0x0b	// Product ID LSB

struct regval_list {
	uint8_t reg_num;
	uint8_t value;
};

uint16_t sensor_init();
uint8_t sensor_writeReg(uint8_t regID, uint8_t regDat);
void sensor_writeRegs(const regval_list reglist[]);
uint8_t sensor_readReg(uint8_t regID);
void sensor_printlnRegs(const regval_list reglist[]);

#endif /* _SENSOR_H */
