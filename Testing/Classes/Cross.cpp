#include "Cross.h"
#include "cocos2d.h"

using namespace cocos2d;

Cross::Cross(int x, int y, Layer* layer)
{
    mCrossSprite = Sprite::create("Cross.png");
    mCrossSprite->setPosition(x, y);
    
    float rotateAmount = -360.0;
    
    if(RandomHelper::random_int(1, 2) == 2)
    {
        rotateAmount = 360.0;
    }
    
    RotateBy *rotateByAction = RotateBy::create(2.0, rotateAmount);
    mCrossSprite->runAction(RepeatForever::create(rotateByAction));
    
    layer->addChild(mCrossSprite);
    
}