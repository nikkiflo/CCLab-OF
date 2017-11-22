//
//  Particle.hpp
//  particleSystem_11_21
//
//  Created by Nicole Lloyd on 11/21/17.
//

#pragma once
#include "ofMain.h"

class Particle{
public:
    Particle();
    ~Particle(){} 
    
    void setup(int x, int y, ofColor _color);
    void update();
    void draw();
    
    ofPoint pos;
    ofPoint vel;
    ofPoint acc;
    ofColor color;
    int alpha;
    
    int x;
    int y;
    
    
    
    
};
