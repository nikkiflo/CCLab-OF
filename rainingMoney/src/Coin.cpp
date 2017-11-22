//
//  Coin.cpp
//  rainingMoney
//
//  Created by Nicole Lloyd on 11/21/17.
//

#include "Coin.hpp"

Coin::Coin(){}

void Coin::setup(){
    vel.set(0, ofRandom(-10,-5));
    acc.set(0, ofRandom(0,0.01));
    
}

void Coin::update(){
    
    vel -= acc;
    pos -= vel;
}

void Coin::draw(){
    
    ofSetColor(250,219,124);
    ofDrawCircle(pos.x, pos.y, 20);
    
    
    
}
