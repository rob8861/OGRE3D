#pragma once
#include "BaseApplication.h"

class BasicTutorial1 : public BaseApplication 
{
public:
	BasicTutorial1() { }
	virtual ~BasicTutorial1() { }

protected:
	void createScene() override;
	
private:
	void addOgreMeshToScene() const;
};
