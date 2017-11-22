#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    

}

//--------------------------------------------------------------
void ofApp::update(){
    cloud.update();
    
    for(int i = 0; i < coins.size(); i++){
    coins[i].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){

    cloud.draw();
    for(int i = 0; i < coins.size(); i++){
        coins[i].draw();
    }
    
    
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    nCoins = 5;
    
    cloud.pos.x = ofGetMouseX();
    cloud.pos.y = 200;
    cloud.setup();
    
    for(int i = 0; i < nCoins; i++){
        Coin coin;
        coins.push_back(coin);
        coins[i].setup();
        
        coins[i].pos.x = ofRandom(cloud.pos.x-100, cloud.pos.x +200);
        coins[i].pos.y = cloud.pos.y+200;
    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
