#ifndef INCLUDE_GAME_ENTITIES_WHEEL_H_
#define INCLUDE_GAME_ENTITIES_WHEEL_H_

//C system includes

//C++ system includes
#include<cstdint>

//3rd-party includes

//Own includes
#include"manager_utils/drawing/Image.h"
#include"manager_utils/time/TimerClient.h"
//Forward Declaration
struct InputEvent;

class Wheel : public TimerClient{
public:
	int32_t init(int32_t wheelRsrcId, int32_t rotateAnimTimerId);
	//void deinit(); //no need to deinit cuz it will call the destructor of Image
	void draw();
	void handleEvent(const InputEvent& e);

	void startAnimation();
	void stopAnimation();

	void process();
private:
	void onTimeout(int32_t timerId) final;

	bool _isAnimationActive = false;
	Image _wheelImg;
	int32_t rotateAnimTimerId = -1; //since we have 0 element timerIdMgr, we set it to -1
};


#endif /* INCLUDE_GAME_ENTITIES_WHEEL_H_ */


