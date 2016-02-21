#pragma once

#include "BaseApplication.h"

class BasicTutorialFactory
{
public:
	BasicTutorialFactory();
	~BasicTutorialFactory();

	BaseApplication* MakeBasicTutorial(int number);

private:
	BaseApplication* baseApplicationRef;
};
