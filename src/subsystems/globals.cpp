#include "main.h"
#include "subsytemheaders/constants.hpp"

//(port, gearset, reversed, encoder units)
pros::Motor leftDriveMotor(LEFT_DRIVE_PORT, pros::E_MOTOR_GEARSET_36, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor rightDriveMotor(RIGHT_DRIVE_PORT, pros::E_MOTOR_GEARSET_36, true, pros::E_MOTOR_ENCODER_COUNTS);

//(Master for 1, partner for 2)
pros::Controller controller(pros::E_CONTROLLER_MASTER);
