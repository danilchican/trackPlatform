#pragma once
#include <Arduino.h>

class Constants
{
public:
	static const uint8_t bluetooth_RX;
	static const uint8_t bluetooth_TX;
	static const uint32_t bluetooth_serial_speed;

	static const uint8_t wifi_RX;
	static const uint8_t wifi_TX;
	static const uint32_t wifi_serial_speed;

	static const uint8_t uart_RX;
	static const uint8_t uart_TX;
	static const uint32_t uart_serial_speed;

	static const uint8_t left_engine_enable;
	static const uint8_t left_engine_straight_pin;
	static const uint8_t left_engine_reverse_pin;
	static const uint8_t right_engine_straight_pin;
	static const uint8_t right_engine_reverse_pin;
	static const uint8_t right_engine_enable;

	static const uint8_t distance_sensor_read_pin;
	static const uint8_t distance_sensor_a_pin;
	static const uint8_t distance_sensor_b_pin;
	static const uint8_t distance_sensor_c_pin;

	static const uint8_t line_sensor_read_pin;
	static const uint8_t line_sensor_a_pin;
	static const uint8_t line_sensor_b_pin;
	static const uint8_t line_sensor_c_pin;

	static const uint8_t servo_horizontal_pin;
	static const uint8_t servo_vertical_pin;

	static const char commands_delimetr;

	Constants();
	~Constants();
};

