//
//  Particle.cpp
//  particleSystem_11_21
//
//  Created by Nicole Lloyd on 11/21/17.
//

#include "Particle.hpp"


Particle :: Particle(){}

void Particle:: setup(int x, int y, ofColor _color){
    
    pos.set(x, y);
    ofColor color = _color;
    
    vel.set(ofRandom(-1.2, 1.2), ofRandom(-1,1));
    acc.set(0, ofRandom(0,0.01));
    
    alpha = 255;
    
}

void Particle:: update(){
    
    vel += acc;
    pos += vel;
    
    alpha--;
    
}

void Particle:: draw(){
    
    ofSetColor(color.r, color.g, color.b, alpha);
    ofDrawCircle(pos, 2);
}
