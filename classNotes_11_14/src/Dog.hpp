//
//  Dog.hpp
//  classNotes_11_14
//
//  Created by Nicole Lloyd on 11/14/17.
//

#pragma once
#include "ofMain.h"

class Dog{
public:
    Dog();
    ~Dog(){}
    
    void setup();
    void update();
    void draw();
    void sit();
    
    string name;
    ofPoint position;
    
private:
    ofColor furColor;
    
    
    
    
};
