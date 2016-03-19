#include "Cross.h"

using namespace cocos2d;

Cross::Cross(int x, int y, Layer* layer)
{
    mCrossSprite = Sprite::create("Cross.png");
    mCrossSprite->setPosition(x, y);
    
    layer->addChild(mCrossSprite);
    
}