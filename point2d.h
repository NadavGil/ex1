//
//  point2d.h
//  EX 4
//
//  Created by Nadav Gilron on 10/01/2016.
//  Copyright © 2016 Nadav Gilron. All rights reserved.
//

#ifndef point2d_h
#define point2d_h


class point2d{
    
private:
    int x;
    int y;
    
public:
    point2d(int x, int y);
    point2d();
    ~point2d();
    
    int getX();
    int getY();
    
    void setX(int x);
    void setY(int y);
    
};

#endif /* point2d_h */
