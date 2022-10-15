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


	const int32_t buttonRsrcIds[WHEEL_BTNS_COUNT] = {
			cfg.startButtonRsrcId, cfg.stopButtonRsrcId
	};
	const Point buttonStartPos[WHEEL_BTNS_COUNT] = {
			Point(500, 100), Point(680,100)
	};

	for(int32_t i = 0;  i < WHEEL_BTNS_COUNT; i++){

		//in init method down bellow-
		//since our first argument is and instance of gameProxy object, but we inherrit it on Game class
		//we will use 'this' pointer and it will downcast it to gameProxy
		if(EXIT_SUCCESS != _wheelBtns[i].init(this, i)){
			std::cerr << "_wheelBtns[" << i << "].init() failed." << std::endl;
			return EXIT_FAILURE;
		}
		_wheelBtns[i].create(buttonRsrcIds[i], buttonStartPos[i]);
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

	for(int32_t i = 0;  i < WHEEL_BTNS_COUNT; i++){
		_wheelBtns[i].draw();

	}

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





