#ifndef _MAIN_H
#define _MAIN_H


#include <inttypes.h>
#include <stdio.h>

void manual_extruder_selector();
void unrecoverable_error();
void drive_error();
void signal_load_failure();
void signal_ok_after_load_failure();

extern uint8_t tmc2130_mode;
extern FILE* uart_com;
extern uint8_t pinda_state;


#endif //_MAIN_H
