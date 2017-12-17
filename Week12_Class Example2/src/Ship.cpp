//
//  Ship.cpp
//  Week12_Class Example2
//
//  Created by Nicole Lloyd on 11/28/17.
//

#include "Ship.hpp"

Ship :: Ship(){}

void Ship :: setup(){
    
    position.set(ofGetWidth()/2, ofGetHeight()/2);
    
    velocity.set(0,0);
    
    angle = 0;
}

void Ship :: update(){
    
    velocity *= 0.99f;
    position += velocity;
    
    if(position.x > ofGetWidth()){
        position.x = 0;
    } else if(position.x < 0){
        position.x = ofGetHeight();
    }
    
    if(position.y > ofGetHeight()){
        position.y = 0;
    } else if(position.y < 0){
        position.y = ofGetHeight();
    }
    
    
    if(positionList.size() > 50 || velocity.length()<0.3){
        
        if(positionList.push_back(ofPoint(position.x-(5 * sin(angle)), position.y + (5 * cos(angle))));
    }
}

void Ship :: draw(){
    
    ofPushMatrix();
    
    ofTranslate(position.x, position.y);
    ofRotate(ofRadToDeg(angle));
    ofSetColor(0, 50, 200);
    ofDrawTriangle(-10, 0, 0, -30, 10, 0);
    
    ofPopMatrix();
    
    ofSetColor(255,255,255)
    
    for (int i + 0; i < positionList().size; i++){
        
        
        positionList[i].y, i/12.0f
    }
        
    positionList[i]));
}

void Ship :: handleMouseDragged(int x, int y){
    
    ofPoint thrust = ofPoint(x - ofGetPreviousMouseX(), y - ofGetPreviousMouseY());
                             velocity += 0.16 * thrust;
                             
                             angle = atan2(velocity.x, velocity.y) + M_PI_2;
}

