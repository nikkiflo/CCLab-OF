//
//  Cloud.hpp
//  rainingMoney
//
//  Created by Nicole Lloyd on 11/21/17.
//

#include "ofMain.h"
#pragma once

class Cloud{
public:
    Cloud();
    ~Cloud(){}
    
    void setup();
    void update();
    void draw();
    
    void select();
    void lightening();
    void raining();
    
    
    int radius;
    ofPoint pos;
    ofColor color;
    
    
    
    
};
