#pragma once



#include "State.h"
#include "Climbing.h"
#include "Idle.h"
#include "Jumping.h"
#include "Shoveling.h"

class Hammering : public State
{
public:
	Hammering() {};
	~Hammering() {};
	void idle(Animation* a);
	void climbing(Animation* a);
	void jumping(Animation * a);
	void shoveling(Animation * a);
};