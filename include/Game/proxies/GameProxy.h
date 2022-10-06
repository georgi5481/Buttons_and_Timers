#ifndef INCLUDE_GAME_PROXIES_GAMEPROXY_H_
#define INCLUDE_GAME_PROXIES_GAMEPROXY_H_		//an interface to the game

//C system includes


//C++ system includes
#include<cstdint>

//3rd-party includes


//Own includes


//Forward Declaration


class GameProxy{
public:
	virtual ~GameProxy() = default;			//ALWAYS add the default destructor when you have virtual function/s
	virtual void onButtonPressed(int32_t buttonId) = 0;		//when compiled this will dispatch to our inherited override method
};



#endif /* INCLUDE_GAME_PROXIES_GAMEPROXY_H_ */
