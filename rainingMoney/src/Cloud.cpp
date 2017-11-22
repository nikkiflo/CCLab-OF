//
//  Cloud.cpp
//  rainingMoney
//
//  Created by Nicole Lloyd on 11/21/17.
//

#include "Cloud.hpp"

Cloud:: Cloud(){}

void Cloud::setup(){
    
    radius = 45;
    color.r = 111;
    color.g = 111;
    color.b = 111;
//    pos.x = 200;
//    pos.y = 200;
}

void Cloud::update(){}

void Cloud::draw(){
    
    ofSetColor(color.r, color.g, color.b);
    ofDrawCircle(pos.x, pos.y, radius); //bottom left
    ofDrawCircle(pos.x-radius+1, pos.y-radius+1, radius); //left
    ofDrawCircle(pos.x, pos.y-radius-radius+1, radius); //top left
    ofDrawCircle(pos.x+ radius+ radius-20, pos.y, radius);//bottom right
    ofDrawCircle(pos.x+ radius+ radius-20, pos.y-radius-radius+1, radius); //top right
    ofDrawCircle(pos.x+ radius+ radius-40, pos.y-radius+1, radius); //middle
    ofDrawCircle(pos.x+ radius+ radius+radius -20, pos.y-radius+1, radius); //right
    
}

void Cloud::select(){
    //pick a cloud
    //lightening
    //play thunder
    //let it rain
    //if its done raining, pick another
}
void Cloud::lightening(){
    
    //start raining
    //if its done raining, change value to false
    
    
    
}


