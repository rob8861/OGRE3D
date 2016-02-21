#include "BasicTutorial1.h"

void BasicTutorial1::createScene()
{
	// set ambient light
	mSceneMgr->setAmbientLight(Ogre::ColourValue(0, 0.5, 0.5));
	// render scene
	addOgreMeshToScene();

}

void BasicTutorial1::addOgreMeshToScene() const
{
	mCamera->setPosition(0, 47, 222);

	Ogre::Entity* ogreEntity = mSceneMgr->createEntity("ogrehead.mesh");
	Ogre::SceneNode* ogreNode = mSceneMgr->getRootSceneNode()->createChildSceneNode();
	ogreNode->attachObject(ogreEntity);

	Ogre::Light* light = mSceneMgr->createLight("MainLight");
	light->setPosition(20, 80, 50);

	Ogre::Entity* ogreEntity2 = mSceneMgr->createEntity("ogrehead.mesh");
	Ogre::SceneNode* ogreNode2 = mSceneMgr->getRootSceneNode()->createChildSceneNode(Ogre::Vector3(84, 48, 0));
	ogreNode2->attachObject(ogreEntity2);

	Ogre::Entity* ogreEntity3 = mSceneMgr->createEntity("ogrehead.mesh");
	Ogre::SceneNode* ogreNode3 = mSceneMgr->getRootSceneNode()->createChildSceneNode();
	ogreNode3->setPosition(0, 104, 0);
	ogreNode3->setScale(2, 1.2, 1);
	ogreNode3->attachObject(ogreEntity3);

	Ogre::Entity* ogreEntity4 = mSceneMgr->createEntity("ogrehead.mesh");
	Ogre::SceneNode* ogreNode4 = mSceneMgr->getRootSceneNode()->createChildSceneNode();
	ogreNode4->setPosition(-84, 48, 0);
	ogreNode4->roll(Ogre::Degree(-90));
	ogreNode4->attachObject(ogreEntity4);
}
