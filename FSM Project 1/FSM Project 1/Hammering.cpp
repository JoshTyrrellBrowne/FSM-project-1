#include "Hammering.h"

void Hammering::idle(Animation * a)
{
	std::cout << "Going from Hammering to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Hammering::climbing(Animation * a)
{
	std::cout << "Cannot go from Hammering to Climbing" << std::endl;
	//a->setCurrent(new Climbing());
	//delete this;
}

void Hammering::jumping(Animation * a)
{
	std::cout << "Cannot go from Hammering to Jumping" << std::endl;
	//a->setCurrent(new Jumping());
	//delete this;
}

void Hammering::shoveling(Animation * a)
{
	std::cout << "Going from Hammering to Shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}
