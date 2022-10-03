#ifndef MANAGER_UTILS_INCLUDE_MANAGER_UTILS_INPUT_BUTTONBASE_H_
#define MANAGER_UTILS_INCLUDE_MANAGER_UTILS_INPUT_BUTTONBASE_H_

//C system includes

//C++ system includes

//3rd-party includes

//Own includes
#include "manager_utils/drawing/Image.h"
//Forward Declaration
class InputEvent;

enum ButtonStates{
	UNCLICKED, CLICKED, DISABLED
};


class ButtonBase : public Image {	//we inherit image so that we can use it's set and get members
virtual ~ButtonBase() = default;
virtual void handleEvent(const InputEvent & e);


void create (int32_t rsrcId, const Point &pos = Point::ZERO);

virtual void void draw();

void lockInput();

void unlockInput;

bool isInputUnlocked() const;

bool containsEvent(const InputEvent & e);

private :
	//	Rectangle _boundRect = Rectangle::ZERO;		//bound rectangle is the actual dimensions of the button. We can have bigger dimensions(transparrent) for better visual effect.
		bool _isInputUnlocked = true;


};


#endif /* MANAGER_UTILS_INCLUDE_MANAGER_UTILS_INPUT_BUTTONBASE_H_ */
