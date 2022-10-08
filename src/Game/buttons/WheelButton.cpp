//Coresponding Header
#include "include/Game/buttons/WheelButton.h"
//C system includes

//C++ system includes
#include<iostream>
//3rd-party includes

//Own includes
#include "sdl_utils/InputEvent.h"

int32_t WheelButton::init(GameProxy* gameProxy, int32_t buttonId){

	if(_gameProxy == nullptr){
		std::cerr << "nullptr provided for gameProxy for ButtonId: " << buttonId << std::endl;
		return EXIT_FAILURE;
	}
_gameProxy = gameProxy;
_buttonId = buttonId;

	return EXIT_SUCCESS;
}


void WheelButton::handleEvent(const InputEvent &e){		//overriding the method
	if(e.type == TouchEvent::KEYBOARD_PRESS){
		setFrame(CLICKED);
	}
	else if(e.type == TouchEvent::KEYBOARD_RELEASE){
		setFrame(UNCLICKED);
		_gameProxy->onButtonPressed(_buttonId);
	}
}
