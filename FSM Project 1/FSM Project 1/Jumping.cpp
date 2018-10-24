#include "Jumping.h"

void Jumping::idle(Animation * a)
{
	std::cout << "Going from Jumping to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Jumping::climbing(Animation * a)
{
	std::cout << "Going from Jumping to Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
