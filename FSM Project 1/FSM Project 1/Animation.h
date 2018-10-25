#pragma once
//#include "State.h"
class State; // forward decleration


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
	void shoveling();
	void hammering();
};

#include "State.h"