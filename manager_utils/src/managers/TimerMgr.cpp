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

		const int32_t timerId = it->first;
		TimerData& timerData = it->second;

		it->second.remaining -= msElapsed;
		if(0 > it->second.remaining){
			onTimerTimeout(timerId, timerData);
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

bool TimerMgr::isActiveTimerId(int32_t timerId) const{
/* if we don't find it in the set
 * and we find it in the timerMap
 * then it is active*/
	return (_removeTimerSet.end() == _removeTimerSet.find(timerId))
		&& (_timerMap.end() != _timerMap.find(timerId));
}

void TimerMgr::onInitEnd(){

}

void TimerMgr::removeTimersInternal(){
	for(const int32_t timerId : _removeTimerSet){
		auto mapIt = _timerMap.find(timerId);
		if(mapIt != _timerMap.end()) {
			_timerMap.erase(mapIt);
		}
	}

	//clear the removeTimerSet
	_removeTimerSet.clear();

}

void TimerMgr::onTimerTimeout(int32_t timerId, TimerData& timer){

	if(TimerType::ONESHOT == timer.timerType) {
		return;
	}
	timer.remaining += timer.interval ;
}


