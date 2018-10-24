#pragma once
//#include "State.h"
class State; // forward decleration

//#include "Idle.h"
//class Idle;

class Animation
{
	class State* current;
public:
	Animation();
	void setCurrent(State* s)
	{
		current = s;
	}
	void idle();
	void jumping();
	void climbing();
};

#include "State.h"
//#include "Idle.h"