//Corresponding header
#include "include/Game/Game.h"
//C system includes

//C++ system includes
#include<cstdint>
#include<iostream>
//3rd-party includes


//Own components includes
//#include "sdl_utils/config/MonitorWindowCfg.h"
#include "sdl_utils/InputEvent.h"

int32_t Game::init(const GameCfg& cfg){

	if(EXIT_SUCCESS != _hero.init(cfg.runningGirlRsrcId)){
		return EXIT_FAILURE;
	}

	if(EXIT_SUCCESS != _wheel.init(cfg.wheelRsrcId)){
		return EXIT_FAILURE;
	}
	_blackBgrImage.create(cfg.blackBgrImage);
	_blackBgrImage.activateAlphaModulation();
	_blackBgrImage.setOpacity(ZERO_OPACITY);


	return EXIT_SUCCESS;
}

void Game::deinit(){
	_hero.deinit();
}

void Game::draw(){
	_wheel.draw();
	_hero.draw();

	_blackBgrImage.draw();	//want to draw it lastly
}

void Game::handleEvent([[maybe_unused]]const InputEvent& e){
	_wheel.handleEvent(e);
	_hero.handleEvent(e);

	if(TouchEvent::KEYBOARD_RELEASE != e.type){	//if we don't touch with the mouse - do nothing
			if(Keyboard::KEY_NUMPAD_1 == e.key){
			_blackBgrImage.setOpacity(_blackBgrImage.getOpacity() + 10);
		}
		else if(Keyboard::KEY_NUMPAD_2 == e.key){
			_blackBgrImage.setOpacity(_blackBgrImage.getOpacity() - 10);
		}
	}

}


void Game::onButtonPressed(int32_t buttonId){

	std::cout << "Button with Id " << buttonId << " was pressed." << std::endl;
}





