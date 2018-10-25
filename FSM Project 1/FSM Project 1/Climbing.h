#pragma once
#include "State.h"
#include "Idle.h"

class Climbing : public State
{
public:
	Climbing() {};
	~Climbing() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void shoveling(Animation * a);
	void hammering(Animation * a);
};
