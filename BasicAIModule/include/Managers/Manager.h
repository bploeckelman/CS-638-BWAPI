/*
 *  Manager.h  - Managers control Agents.
 */
#pragma once
#include "Agent.h"
#include "State.h"
#include "./Task.h"
#include "queue"

typedef priority_queue<Priority> TaskQueue;

class Manager
{
  std::set<Agent*> agents;
  TaskQueue tasks;
  
public:
  /********************************************************************************
   *  Act to complete tasks
   ********************************************************************************/
  /* update - Called on each frame */
  virtual void update();

  /********************************************************************************
   *  Managers complete Tasks using Agents
   ********************************************************************************/
  /* addAgent - Add an Agent to the Managers Agent set */
  virtual void addAgent(Agent &t);
  /* removeAgent - Remove an Agent of @type from the Managers Agent set */
  virtual Agent& removeAgent(BWAPI::UnitType &ut);

  /********************************************************************************
   *  Control Managers through tasks
   ********************************************************************************/ 
  /* addTask  -  Add this task to the task queue */
  virtual void addTask(Task &t);
  /*  doTask  -  Do this task without entering the queue */
  virtual void doTask(Task &t);

  /********************************************************************************
   *  Cost benefit analysis used by the Arbitrator and Strategizer
   ********************************************************************************/
  /* mwtpNext  -  Value currently placed on accepting one more of this unit type */
  virtual int mwtpNext(BWAPI::UnitType &ut);
  /* mwtpLast  - Value currently placed on the last of this unit type */
  virtual int mwtpLast(BWAPI::UnitType &ut);
  /*  estimateCost  -  best estimate at the cost of completing this task */
  virtual int estimateCost(Task &t);
};
