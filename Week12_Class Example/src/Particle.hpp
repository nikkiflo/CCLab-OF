//
//  Particle.hpp
//  Week12_Class Example
//
//  Created by Nicole Lloyd on 11/28/17.
//

#pragma once
#include "ofMain.h"

class Particle {
    
    
    
public:
    
    Particle();
    ~Particle(){}
    
    
    void reset();
    void update();
    void draw();
    
    void toggleMode();
    
    ofPoint position;
    ofPoint velocity;
    ofPoint force;
    float drag;
    
    bool isAttracting = true;
    
    
    
};
