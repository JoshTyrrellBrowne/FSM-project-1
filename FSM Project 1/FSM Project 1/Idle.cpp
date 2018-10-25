#include "Idle.h"

void Idle::jumping(Animation* a)
{
	std::cout << "Going from Idle to Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Idle::climbing(Animation* a)
{
	std::cout << "Going from Idle to Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Idle::shoveling(Animation * a)
{
	std::cout << "Going from Idle to Shoveling" << std::endl;
	a->setCurrent(new Shoveling());
	delete this;
}

void Idle::hammering(Animation * a)
{
	std::cout << "Going from Idle to Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
