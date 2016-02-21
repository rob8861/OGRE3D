#pragma once

#include <Terrain/OgreTerrain.h>
#include <Terrain/OgreTerrainGroup.h>

#include "BaseApplication.h"

class BasicTutorial3 : public BaseApplication
{
public:
	BasicTutorial3();
	virtual ~BasicTutorial3();

protected:
	virtual void createFrameListener();
	virtual void createScene();
	virtual void destroyScene();
	virtual bool frameRenderingQueued(const Ogre::FrameEvent& evt);

private:
	void defineTerrain(long x, long y);
	void initBlendMaps(Ogre::Terrain* terrain);
	void configureTerrainDefaults(Ogre::Light* light);

	bool mTerrainsImported;
	Ogre::TerrainGroup* mTerrainGroup;
	Ogre::TerrainGlobalOptions* mTerrainGlobalOptions;
	OgreBites::Label* mInfoLabel;
};
