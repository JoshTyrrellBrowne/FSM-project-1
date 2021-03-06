#pragma once

#include "State.h"
#include "Climbing.h"
#include "Idle.h"
#include "Shoveling.h"
#include "Hammering.h"

class Jumping : public State
{
public:
	Jumping() {};
	~Jumping() {};
	void idle(Animation* a);
	void climbing(Animation* a);
	void shoveling(Animation* a);
	void hammering(Animation* a);
};

