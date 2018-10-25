#include "Shoveling.h"

void Shoveling::idle(Animation * a)
{
	std::cout << "Going from Shoveling to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Shoveling::climbing(Animation * a)
{
	std::cout << "Going from Shoveling to Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Shoveling::jumping(Animation * a)
{
	std::cout << "Going from Shoveling to Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Shoveling::hammering(Animation * a)
{
	std::cout << "Going from Shoveling to Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
