//
// Created by XeMao on 2022/8/30.
//

#ifndef _RETARGET_H__
#define _RETARGET_H__

#include "stm32f4xx_hal.h"
#include <sys/stat.h>
#include <stdio.h>

void RetargetInit(UART_HandleTypeDef *huart);
int _write(int fd, char *ptr, int len);
int _read(int fd, char *ptr, int len);

#endif //#ifndef _RETARGET_H__