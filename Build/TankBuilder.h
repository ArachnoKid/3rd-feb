#pragma once
#include"Armour.h"
#include"Driver.h"
#include"Gun.h"
#include"Tank.h"

class TankBuilder {
protected:
	std::unique_ptr<Tank> mTank;
public:
	virtual ~TankBuilder() = default;
	void createNewTank() {
		mTank = std::make_unique<Tank>();
	}
	Tank* getTank() {
		return mTank.release();
	}
	virtual void buildDriver(std::string sDriverIn) = 0;
	virtual void buildGun(std::string sGunIn) = 0;
	virtual void buildArmour(std::string sArmourIn) = 0;

};