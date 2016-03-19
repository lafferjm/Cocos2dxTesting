#include "TestScene.h"

using namespace cocos2d;

Scene* TestScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = TestScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool TestScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    Sprite *crossSprite = Sprite::create("Cross.png");
    crossSprite->setPosition(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y);
    
    this->addChild(crossSprite);
    
    return true;
    
}
