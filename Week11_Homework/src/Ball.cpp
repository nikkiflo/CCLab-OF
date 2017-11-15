//
//  Ball.cpp
//  Week11_Homework
//
//  Created by Nicole Lloyd on 11/13/17.
//

#include "Ball.hpp"


Ball::Ball(){
    
    radius = 6;
    pos.set(ofRandom(ofGetWidth(), ofGetHeight()));
}

void Ball::update(){
    //pos.x++;
    //pos.y++;
    
}

void Ball::draw(){
    
    ofDrawCircle(pos.x, pos.y, radius);
    
}
