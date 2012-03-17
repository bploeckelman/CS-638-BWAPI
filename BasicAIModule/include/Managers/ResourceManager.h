/*
 *  ResourceManager.h  - This manager sends it's workers to gather gas and minerals at maximum efficiency.
 */
#pragma once
#include "Manager.h"

class ResourceManager : public Manager
{
public:
	void update();
	int getMineralRate();

    virtual const std::string getName() const { return "ResourceMgr"; }
};

