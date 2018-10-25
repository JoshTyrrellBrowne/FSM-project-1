/// <summary>
/// Author: Josh Tyrrell Browne
/// Date: October 2018
/// </summary>

#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 
#pragma comment(lib,"opengl32.lib") 
#pragma comment(lib,"glu32.lib") 

#include <SFML/Graphics.hpp>

#include <chrono>
#include <thread>


#include "State.h"
//#include "Animation.h"
#include "Climbing.h"
#include "Idle.h"
#include "Jumping.h"
#include "Shoveling.h"
#include "Hammering.h"


int main() {
	Animation fsm; 
	int i = 0;

	std::chrono::milliseconds dura(1000);

	fsm.idle(); // initially idle

	while (true) {


		if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
		{
			fsm.jumping();
			std::this_thread::sleep_for(dura);
		}
	
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
		{
			fsm.climbing();
			std::this_thread::sleep_for(dura);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
		{
			fsm.idle();
			std::this_thread::sleep_for(dura);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			fsm.shoveling();
			std::this_thread::sleep_for(dura);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
		{
			fsm.hammering();
			std::this_thread::sleep_for(dura);
		}





		/*if (i == 0) {
			fsm.jumping();
			std::this_thread::sleep_for(dura);
			i = 1;
		}
		else {
			fsm.climbing();
			std::this_thread::sleep_for(dura);
			i = 0;
		}*/
	}
}