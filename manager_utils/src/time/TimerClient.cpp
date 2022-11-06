//Coresponding Header
#include "manager_utils/time/TimerClient.h"
//C system includes

//C++ system includes
#include <iostream>

//3rd-party includes

//Own includes
#include "manager_utils/managers/TimerMgr.h"

void TimerClient::startTimer( int64_t interval, int32_t timerId,	TimerType timerType){

	const TimerData data(interval,interval, this, timerType);
	gTimerMgr->startTimer(timerId);
}

void TimerClient::stopTimer(int32_t timerId){

}

bool TimerClient::isActiveTimerId(int32_t timerId) const{

}
