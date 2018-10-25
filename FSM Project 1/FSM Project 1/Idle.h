#pragma once

#include "State.h"
#include "Jumping.h"
#include "Climbing.h"
#include "Shoveling.h"
#include "Hammering.h"

class Idle : public State
{
public:
	Idle() {};
	~Idle() {};
	void jumping(Animation* a);
	void climbing(Animation* a);
	void shoveling(Animation * a);
	void hammering(Animation * a);
};

