/*
 *  AttackState.h
 */
#pragma once
#include "State.h"

class AttackState: public State
{
public:
  AttackState(ActorAgent &a, UnitTarget &t);
  void onEnter();
  void onUpdate();
  void onExit();
};