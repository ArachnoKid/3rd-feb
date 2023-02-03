#pragma once
#include"Armour.h"
#include"Driver.h"
#include"Gun.h"
#include<iostream>
#include<string>
class Tank {

private:
	std::string s_Driver;
	std::string s_GunType;
	std::string s_Armour;
public:
	Tank() {};
	void setDriver(const std::string& s_DriverIn);
	void setGunType(const std::string& s_GunTypeIn);
	void setArmour(const std::string& s_ArmourIn);
	void form() const;

	/*Armour* armour;
	Driver* driver;
	Gun* gun;

	void Attributes() {
		std::cout << "Armour: " << armour->ArmourType << std::endl;
		std::cout << "Driver: " << driver->d_Name << std::endl;
		std::cout << "Gun: " << gun->GunType << std::endl;
	}*/
};
