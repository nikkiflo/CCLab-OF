//
//  Ship.hpp
//  Week12_Class Example2
//
//  Created by Nicole Lloyd on 11/28/17.
//

#pragma once
#include "ofMain.h"

class Ship{
public:
    Ship();
    ~Ship(){}
    
    void setup();
    void update();
    void draw();
    
    void handleMouseDragged(int x, int y);
    
    ofPoint position;
    ofPoint velocity;
    float angle;
    
    deque<ofPoint> positionList; //double ended queue, just repeats
    
    
};
