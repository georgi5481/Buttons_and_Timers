#ifndef MANAGER_UTILS_INCLUDE_MANAGER_UTILS_MANAGERS_TIMERMGR_H_
#define MANAGER_UTILS_INCLUDE_MANAGER_UTILS_MANAGERS_TIMERMGR_H_

//C system includes

//C++ system includes
#include <map>
#include <set>
#include <cstdint>
//3rd-party includes

//Own includes
#include "MgrBase.h"
#include "time/TimerData.h"
#include "utils/Time/Time.h"
//Forward Declaration

class TimerMgr : public MgrBase {
public:
	int32_t init();

	void deinit() final;
	void process() final;
	void startTimer(TimerClient *tcInstance, int64_t interval, int32_t timerId,
						TimerType timerType);
	void stopTimer(int32_t timerId);
	void detachTimerClient (int32_t timerId);
	bool isActiveTimerId(int32_t timerId) const;
	void onInitEnd(); //Really important method

private:
	void removeTimersInternal();

	void onTimerTimeout(int32_t timerId, TimerData& timer);

	Time _elapsedTime;
	std::map<int32_t, TimerData> _timerMap;		//we separate them in order not to trigger double removals
	std::set<int32_t> _removeTimerSet;		//we place in the set first what to clear in the _timerMap
};

extern TimerMgr* gTimerMgr; //we will create only one instance of this class

#endif /* MANAGER_UTILS_INCLUDE_MANAGER_UTILS_MANAGERS_TIMERMGR_H_ */
