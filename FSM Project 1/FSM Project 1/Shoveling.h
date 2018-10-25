#pragma once



#include "State.h"
#include "Climbing.h"
#include "Idle.h"
#include "Jumping.h"
#include "Hammering.h"

class Shoveling : public State
{
public:
	Shoveling() {};
	~Shoveling() {};
	void idle(Animation* a);
	void climbing(Animation* a);
	void jumping(Animation * a);
	void hammering(Animation* a);
};