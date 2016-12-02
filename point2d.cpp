//
//  point2d.cpp
//  EX 4
//
//  Created by Nadav Gilron on 10/01/2016.
//  Copyright © 2016 Nadav Gilron. All rights reserved.
//

#include <stdio.h>
#include "point2d.h"

point2d::point2d(int x, int y)
{
    setX(x);
    setY(y);
}

point2d:: point2d()
{
    
}

point2d:: ~point2d(){}

int point2d::getX(){return x;}
int point2d::getY(){return y;}

void point2d::setX(int newx) {x=newx;}
void point2d::setY(int newy) {y=newy;}