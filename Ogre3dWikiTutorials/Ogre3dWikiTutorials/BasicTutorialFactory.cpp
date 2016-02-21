#include "BasicTutorialFactory.h"
#include "TutorialApplication.h"
#include "BasicTutorial1.h"
#include "BasicTutorial3.h"

BasicTutorialFactory::BasicTutorialFactory(): baseApplicationRef(nullptr)
{
}

BasicTutorialFactory::~BasicTutorialFactory()
{
	if (baseApplicationRef)
	{
		delete baseApplicationRef;
	}
}

BaseApplication* BasicTutorialFactory::MakeBasicTutorial(int number)
{
	if (baseApplicationRef)
		delete baseApplicationRef;

	switch (number)
	{
	case 1:
		baseApplicationRef = new BasicTutorial1;
		break;
	case 2:
		baseApplicationRef = new TutorialApplication;
		break;
	case 3:
		baseApplicationRef = new BasicTutorial3;
		break;
	default:
		baseApplicationRef = new BasicTutorial1;
		break;
	}

	return baseApplicationRef;
}
