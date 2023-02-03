#include "Tank.h"

/**
Sets the driver for the tank.
@param s_DriverIn Constant reference to the string used to set.
@returns void.
**/
void Tank::setDriver(const std::string& s_DriverIn) {
	this->s_Driver = s_DriverIn;
}

/**
Sets the gun for the tank.
@param s_GunIn Constant reference to the string used to set.
@returns void.
**/
void Tank::setGunType(const std::string& sGunTypeIn) {
	this->s_GunType = sGunTypeIn;
}

/**
Sets the armour for the tank.
@param s_ArmourIn Constant reference to the string used to set.
@returns void.
**/
void Tank::setArmour(const std::string& s_ArmourIn) {
	this->s_Armour = s_ArmourIn;
}

/**
Constant function that outputs the type of tank it is and the attributes.
@returns void.
**/
void Tank::form() const {
	std::cout << "The tank has " << s_Driver << ", " << s_GunType << ", " << s_Armour << "." << std::endl;
}
