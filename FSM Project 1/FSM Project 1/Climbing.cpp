#include "Climbing.h"

void Climbing::idle(Animation * a)
{
	std::cout << "Going from Climbing to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Climbing::jumping(Animation * a)
{
	std::cout << "Going from Climbing to Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
