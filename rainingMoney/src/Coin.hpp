//
//  Coin.hpp
//  rainingMoney
//
//  Created by Nicole Lloyd on 11/21/17.
//

#pragma once
#include "ofMain.h"

class Coin{
public:
    Coin();
    ~Coin(){}
    
    
    void setup();
    void update();
    void draw();
    
    ofPoint pos;
    ofPoint vel;
    ofPoint acc;
    
    
    
    
};
