/*
*  GasManager.h  - This manager sends it's workers to build refineries and gather gas 
*/
#pragma once
#include "Manager.h"

using std::vector;

class GasManager : public Manager
{



public:
	void update();
	int getGasRate();
	GasManager();

    virtual const std::string getName() const { return "GasMgr"; }

private:

	int refineryCount;
	int refineryConstructingCount;
	int workersConstructing;
	int newRefineries;
	
};

