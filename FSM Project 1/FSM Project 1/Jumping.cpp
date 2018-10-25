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

void Jumping::shoveling(Animation * a)
{
	std::cout << "Cannot go from Jumping to Shoveling" << std::endl;
	//a->setCurrent(new Shoveling());
	//delete this;
}

void Jumping::hammering(Animation * a)
{
	std::cout << "Cannot go from Jumping to Hammering" << std::endl;
	//a->setCurrent(new Hammering());
	//delete this;
}
