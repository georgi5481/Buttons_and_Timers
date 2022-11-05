//Coresponding Header
#include "manager_utils/managers/TimerMgr.h"
//C system includes

//C++ system includes
#include <iostream>
//3rd-party includes

//Own includes
extern TimerMgr* gTimerMgr = nullptr;


int32_t TimerMgr::init(){
_elapsedTime.getElapsed();

	return EXIT_SUCCESS;
}

void TimerMgr::deinit() {

}

void TimerMgr::process() {
	//when we get the time segment that passed we convert it intoo miliseconds
const int64_t msElapsed = _elapsedTime.getElapsed().toMilliseconds();

	for(auto it = _timerMap.begin(); it != _timerMap.end(); ++it){
		it->second.remaining -= msElapsed;
		if(0 > it->second.remaining){
			onTimerTimeout(it->first, it->second);
		}

	}
	removeTimersInternal();
}

void TimerMgr::startTimer(TimerClient *tcInstance, int64_t interval, int32_t timerId,
					TimerType timerType){

}

void TimerMgr::stopTimer(int32_t timerId){

}

void TimerMgr::detachTimerClient (int32_t timerId){

}

void TimerMgr::isActiveTimerId(int32_t timerId) const{

}

void TimerMgr::onInitEnd(){

}


