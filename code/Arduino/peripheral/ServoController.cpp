#include "../CommandsEnum.h"
#include "../connectors/ConnectingDevice.h"
#include "ServoController.h"

ServoController::ServoController()
{
	init();
}

void ServoController::init() {
	horizontalServo.attach(constants.servo_horizontal_pin);
	verticalServo.attach(constants.servo_vertical_pin);
	horizontalServo.write(0);
	verticalServo.write(0);
}

void ServoController::exec(ConnectingDevice* device, String command) {
	int* arr = nullptr;
	switch (command[1])
	{
	case set_horizontal_angle:
		setHorizontalAngle(parse_command(command, 2, command.length()));
		break;
	case set_vertical_angle:
		setVerticalAngle(parse_command(command, 2, command.length()));
		break;
	case set_horiz_vertical_angles:
		setHorizontalAndVerticalAngle(arr = parse_command(command, 2, constants.commands_delimetr, 2));
		break;
	case get_coodrinates:
		device->send(intArrayToString(arr = getCoordinates(), 2));
		break;
	default:
		break;
	}
	if (arr)
	{
		delete[] arr;
	}
}

void ServoController::setHorizontalAngle(int angle) {
	horizontalServo.write(angle);
	delay(constants.servo_delay);
}

void ServoController::setVerticalAngle(int angle) {
	verticalServo.write(angle);
	delay(constants.servo_delay);
}

void ServoController::setHorizontalAndVerticalAngle(int angleX, int angleY) {
	horizontalServo.write(angleX);
	verticalServo.write(angleY);
	delay(constants.servo_delay);
}

int* ServoController::getCoordinates() {
	int* arr = new int[2];
	arr[0] = getHorizontalAngel();
	arr[1] = getVerticalAngel();
	return arr;
}

void ServoController::setHorizontalAndVerticalAngle(int* arr) {
	horizontalServo.write(arr[0]);
	verticalServo.write(arr[1]);
	delay(constants.servo_delay);
}

int ServoController::getHorizontalAngel() {
	return horizontalServo.read();
}

int ServoController::getVerticalAngel() {
	return verticalServo.read();
}

ServoController::~ServoController()
{
}
