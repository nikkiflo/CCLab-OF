//
//  Ball.cpp
//  BouncingBalls_11_14
//
//  Created by Nicole Lloyd on 11/14/17.
//

#include "Ball.hpp"

void Ball:: setup(int x, int y){
    position.x = x;
    position.y = y;
    
    velocity.set(0,0);
    deceleration.set(0.99, 0.99);
    color.setHSB(ofRandom(360), 128, 128);
    
    radius = 20;
    
}

void Ball::update(){
    position += velocity;
    
    
    if(position.x <0 || position.x > ofGetWidth()){
    velocity *= -1;
    
    }
    
    if(position.y < 0 || position.y > ofGetHeight()){
        
        velocity *= -1;
    }
    
    
}

void Ball::kick(){
    
    velocity.x += ofRandom(-5,5);
    velocity.y += ofRandom(-5,5);
    
}
