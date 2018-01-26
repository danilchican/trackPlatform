#include "Constants.h"

/* Buffer initialisation */
namespace
{
	const unsigned char kUsbIconBuffer [] = {
		0x00, 0x00, 0x00, 0x00, 0x18, 0x30, 0x60, 0xFE, 0xC6, 0x6C, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x0C, 0x06, 0x03, 0x3F, 0x31, 0x1B, 0x0E, 0x04, 0x00, 0x00, 0x00, 0x00
	};
	const unsigned char kBluetoothIconBuffer [] = {
		0x00, 0x00, 0x00, 0x00, 0x18, 0x30, 0x60, 0xFE, 0xC6, 0x6C, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x0C, 0x06, 0x03, 0x3F, 0x31, 0x1B, 0x0E, 0x04, 0x00, 0x00, 0x00, 0x00
	};
	const unsigned char kWiFiIconBuffer [] = {
		0x00, 0x00, 0x00, 0x00, 0x18, 0x30, 0x60, 0xFE, 0xC6, 0x6C, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x0C, 0x06, 0x03, 0x3F, 0x31, 0x1B, 0x0E, 0x04, 0x00, 0x00, 0x00, 0x00
	};
	const unsigned char kStatusIconBuffer [] = {
		0x00, 0x00, 0x00, 0x00, 0x18, 0x30, 0x60, 0xFE, 0xC6, 0x6C, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x0C, 0x06, 0x03, 0x3F, 0x31, 0x1B, 0x0E, 0x04, 0x00, 0x00, 0x00, 0x00
	};
	const unsigned char kLineBuffer [] = {
		0x00, 0x00, 0x00, 0x00, 0x18, 0x30, 0x60, 0xFE, 0xC6, 0x6C, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x0C, 0x06, 0x03, 0x3F, 0x31, 0x1B, 0x0E, 0x04, 0x00, 0x00, 0x00, 0x00
	};
}

/* Bluetooth (Hardware Serial3) */
// const uint8_t Constants::bluetooth_RX = 15;
// const uint8_t Constants::bluetooth_TX = 14;
const uint32_t Constants::kBluetoothSerialSpeed = 9600;

/* Wi-fi (Hardware Serial2) */
// const uint8_t Constants::wifi_RX = 17;
// const uint8_t Constants::wifi_TX = 16;
const uint32_t Constants::kWifiSerialSpeed = 115200;

/* USB (Hardware Serial) */
// const uint8_t Constants::usb_RX = 0;
// const uint8_t Constants::usb_TX = 1;
const uint32_t Constants::kUsbSerialSpeed = 9600;

/* Debug serial (Hardware Serial1) */
//const uint8_t Constants::dbg_uart_RX = 19;
//const uint8_t Constants::dbg_uart_TX = 18;
const uint32_t Constants::kDbgUartSpeed = 9600;

/* Movement controller (L298N) */
const uint8_t Constants::kLeftEngineEnable = 11;
const uint8_t Constants::kLeftEngineStraightPin = 30;
const uint8_t Constants::kLeftEngineReversePin = 31;
const uint8_t Constants::kRightEngineStraightPin = 32;
const uint8_t Constants::kRightEngineReversePin = 33;
const uint8_t Constants::kRightEngineEnable = 10;

/* Distanse controller */
const uint8_t Constants::kDistanceSensorReadPin = A2;
const uint8_t Constants::kDistanceSensorAPin = 4;
const uint8_t Constants::kDistanceSensorBPin = 5;
const uint8_t Constants::kDistanceSensorCPin = A3;

/* Line controller */
const uint8_t Constants::kLineSensorReadPin = A0;
const uint8_t Constants::kLineSensorAPin = 6;
const uint8_t Constants::kLineSensorBPin = 7;
const uint8_t Constants::kLineSensorCPin = A1;

/* Servo controller */
const uint8_t Constants::kServoHorizontalPin = 34;
const uint8_t Constants::kServoVerticalPin = 35;

const char Constants::kCommandsDelimetr = ';';
const char Constants::kCommandsStopSymbol = '|';
const uint32_t Constants::kCommandsWaitTime = 50;

/* Class constants */
const uint8_t Constants::kMinSpeed = 0;
const uint8_t Constants::kMaxSpeed = 255;
const uint16_t Constants::kServoDelay = 20;

const uint8_t Constants::kCountDistanceSensors = 5;
const int16_t Constants::kSensorDelay = 10;

const uint8_t Constants::kCountLineSensors = 5;
const uint16_t Constants::kMinimalLineBound = 270;

const uint32_t Constants::kWaitCommandTimeInMs = 5000;

const String Constants::kGoodAnswer = "OK";
const String Constants::kBadAnswer = "ERROR";

/* USB image */
const ImageConfiguration Constants::kUsbImage = 
{
	0,
	0,
	16,
	16,
	kUsbIconBuffer
};
const ImageConfiguration Constants::kBluetoothImage = 
{
	0,
	16,
	16,
	16,
	kBluetoothIconBuffer
};
const ImageConfiguration Constants::kWifiImage = 
{
	0,
	32,
	16,
	16,
	kWiFiIconBuffer
};
const ImageConfiguration Constants::kStatusImage = 
{
	0,
	48,
	16,
	16,
	kStatusIconBuffer
};
const ImageConfiguration Constants::kLineImage = 
{
	17,
	0,
	1,
	64,
	kLineBuffer
};
const ImageConfiguration Constants::kPrintAreaImage = 
{
	19,
	0,
	109,
	64,
	nullptr
};

Constants::Constants()
{
}

Constants::~Constants()
{
}
