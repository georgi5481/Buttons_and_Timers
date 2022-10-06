#ifndef GAME_GAME_H_
#define GAME_GAME_H_		//the game class should be the one that holds the game specific logic

//C system includes

//C++ system includes
#include <cstdint>
#include <string>

//3rd-party includes

//Own includes
#include "include/Game/config/GameCfg.h"
#include "manager_utils/drawing/Image.h"
#include "entities/Hero.h"
#include "entities/Wheel.h"
#include "proxies/GameProxy.h"

//Forward Declaration
struct InputEvent;

class Game : public GameProxy{
public:

	int32_t init(const GameCfg& cfg);
	void deinit();
	void draw();
	void handleEvent(const InputEvent& e);

private:

	void onButtonPressed(int32_t buttonId) final;	//this is the final override of the function we inherited from GameProxy

	Hero _hero;
	Wheel _wheel;
	Image _blackBgrImage;
};

#endif /* GAME_GAME_H_ */
