#pragma once
#include"Builder.h"
#include"Tank.h"
#include "Armour.h"
class Manufacture {
	TankBuilder* tankbuilder;
public:
	void setBuilder(TankBuilder* newTankBuilder) {
		tankbuilder = newTankBuilder;
	}

	Tank* getTank() {
		Tank* tank = new Tank();
		tank->armour = tankbuilder->buildArmour();
		tank->driver = tankbuilder->buildDriver();
		tank->gun = tankbuilder->buildGun();
		return tank;
	}
};