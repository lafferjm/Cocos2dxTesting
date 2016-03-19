#include "Cross.h"
#include "cocos2d.h"

using namespace cocos2d;

Cross::Cross(int x, int y, Layer* layer)
{
    mCrossSprite = Sprite::create("Cross.png");
    mCrossSprite->setPosition(x, y);
    
    RotateBy *rotateByAction = RotateBy::create(2.0, -360.0);
    mCrossSprite->runAction(RepeatForever::create(rotateByAction));
    
    layer->addChild(mCrossSprite);
    
}