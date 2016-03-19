#ifndef _CROSS_H_
#define _CROSS_H_

#include "cocos2d.h"

class Cross : public cocos2d::Node
{
public:
    Cross(int, int, cocos2d::Layer*);
private:
    cocos2d::Sprite* mCrossSprite;
};

#endif //_CROSS_H_