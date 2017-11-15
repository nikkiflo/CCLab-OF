//
//  Ball.hpp
//  BouncingBalls_11_14
//
//  Created by Nicole Lloyd on 11/14/17.
//
#pragma once
#include "ofMain.h"

class Ball{
    
public:
    void setup (int x, int y);
    void update();
    void draw();
    void kick();
    
    ofPoint position, velocity, deceleration;
    ofColor color;
    int radius;

    
    
};
