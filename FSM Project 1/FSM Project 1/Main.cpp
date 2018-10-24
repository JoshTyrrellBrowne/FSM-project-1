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


int main() {
	Animation fsm; 
	int i = 0;

	std::chrono::milliseconds dura(1000);

	fsm.idle(); // initially idle

	while (true) {


		if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
		{
			fsm.jumping();
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