#ifndef COMMON_COMMONDEFINES_H_
#define COMMON_COMMONDEFINES_H_		//this is where we define our objects we want to include in our game

//C system includes

//C++ system includes
#include<cstdint>

//3rd-party includes

//Own includes

namespace TextureId {	//we make a unique ID for every object we include later on

	enum ResourceId {

		RUNNING_GIRL,
		WHEEL,
		BLACK_BACKGROUND,
		START_BUTTON,
		STOP_BUTTON
	};


}	//end of namespace TextureId

namespace FontId{		//same for the FontId

	enum FontIdKeys{
	ANGELINE_VINTAGE_40
	};

} //end of namespace FontIdKeys


#endif /* COMMON_COMMONDEFINES_H_ */
