/*
 * cli.c
 *
 *  Created on: Oct 8, 2024
 *  Redacted on: Oct 5, 2025
 *      Author: coehl
 */

#include "cli.h"

//********[REDACTED]********

char *TERMINAL_SETUP = "\x1b[2J\x1b[8;r\x1b[H=======STATUS=======\r\n\r\n\r\n\r\n\r\n====================\x1b[8;1H";
char *CLEAR_STATUS_WINDOW = "\x1b[2;0H\x1b[2K\x1b[3;0H\x1b[2K\x1b[4;0H\x1b[2K\x1b[5;0H\x1b[2K";
char *SAVE_CURSOR_POS = "\e7";
char *RESTORE_CURSOR_POS = "\e8";

//********[REDACTED]********

void sendMsg(char* msg, uint16_t size){
	while((HAL_UART_GetState(&huart2)&HAL_UART_STATE_BUSY_TX)==HAL_UART_STATE_BUSY_TX);
	HAL_UART_Transmit_IT(&huart2, (uint8_t*)msg, size);
}

void receiveChar(){
	while((HAL_UART_GetState(&huart2)&HAL_UART_STATE_BUSY_RX)==HAL_UART_STATE_BUSY_RX);
	HAL_UART_Receive_IT(&huart2, (uint8_t*)rxBuffer, 1);
}

//********[REDACTED]********

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart){
	//********[REDACTED]********
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef* htim){
	//********[REDACTED]********
}

//********[REDACTED]********