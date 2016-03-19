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
    
    EventListenerTouchOneByOne *touchListener = EventListenerTouchOneByOne::create();
    touchListener->setSwallowTouches(true);
    touchListener->onTouchBegan = CC_CALLBACK_2(TestScene::onTouchBegan, this);
    
    this->getEventDispatcher()->addEventListenerWithSceneGraphPriority(touchListener, this);
    
    return true;
    
}

bool TestScene::onTouchBegan(Touch* touch, Event* event)
{
    
    Vec2 touchPosition = touch->getLocation();
    
    Sprite *crossSprite = Sprite::create("Cross.png");
    crossSprite->setPosition(touchPosition.x, touchPosition.y);
    
    float rotateAmount = 360.0;
    
    if(RandomHelper::random_int(1, 2) == 2)
    {
        rotateAmount = -360.0;
    }
    
    RotateBy *rotateAction = RotateBy::create(2.0, rotateAmount);
    crossSprite->runAction(RepeatForever::create(rotateAction));
    
    this->addChild(crossSprite);
    
    return true;
}
