//
//  Ball.hpp
//  Week11_Homework
//
//  Created by Nicole Lloyd on 11/13/17.
//

#pragma once
#include "ofMain.h"

class Ball{
    
public:
    Ball();
    ~Ball(){}
    
    void setup();
    void update();
    void draw();
    
    int radius;
    ofVec3f pos;
    ofVec3f vel;
    ofVec3f acc;
    
    
};
