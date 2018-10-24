#pragma once

#include "State.h"
#include "Jumping.h"
#include "Climbing.h"


class Idle : public State
{
public:
	Idle() {};
	~Idle() {};
	void jumping(Animation* a);
	void climbing(Animation* a);
};

