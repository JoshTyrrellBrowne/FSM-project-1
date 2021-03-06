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

void Climbing::shoveling(Animation * a)
{
	std::cout << "Cannot go from Climbing to Shoveling" << std::endl;
	//a->setCurrent(new Shoveling());                                   NB nothing changes
	//delete this;
}

void Climbing::hammering(Animation * a)
{
	std::cout << "Cannot go from Climbing to Hammering" << std::endl;
	//a->setCurrent(new Shoveling());                                   NB nothing changes
	//delete this;
}
