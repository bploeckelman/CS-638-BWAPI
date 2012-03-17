/*
 *  ConstructionManager  -  Used to produce new structures
 */
#pragma once
#include "Manager.h"

class ConstructionManager : public Manager
{
public: 
	void update();
    virtual const std::string getName() const { return "ConstructionMgr"; }
};
