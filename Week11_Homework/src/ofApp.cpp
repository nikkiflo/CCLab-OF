#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    spos.set(250,250);
    
    
    //pos2.set(ofGetWidth()-spos.x, ofGetHeight()-spos.y);
    radius = 50;
    vel1.set(0,0);
    vel2.set(0,0);
    collide = false;
    offset.set(250,250);
    change = false;
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    mousePos.set(ofVec3f(ofGetMouseX(), ofGetMouseY()));
    if (collide == false){
    pos1.set(mousePos-offset);
    pos2.set(mousePos+offset);
    //dir1.set(mousePos);
    //pos1 += ofVec3f (10,10);
        }
    
    //pos1 = dir1;
    else if (collide == true){
        vel1.set(10, 10);
        vel2.set(-10,-10);
        pos1 += vel1;
        pos2 += vel2;
    //pos2 += vel2;
}
    if (change == true){
        
        ofSetColor(255, 0, 0);
        ofDrawCircle(pos1.x, pos1.y, radius);
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
        
        ofDrawCircle(pos1.x, pos1.y, radius);
        ofDrawCircle(pos2.x, pos2.y, radius);
    cout << pos1.x << pos1.x-pos2.x << endl;
        collision();
    
        
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    float re = ofMap(mouseX, 0, ofGetWidth(), 0 , 255);
    float gr = ofMap(mouseX, 0, ofGetHeight(), 0, 255);
    ofSetColor(255-re,gr,re);

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    //ofDrawCircle(pos1.x, pos1.y, radius);
    pos1 += 10;
    vel1.set(10,10);
    collide = true;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
    ofSetColor(255,0,0);

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

void ofApp::collision(){
    
    if (pos1.x - pos1.y <= 0 && pos2.x - pos2.y <= 10){
        change = true;
        
        ofSetColor(255, 0, 0);
        ofDrawCircle(pos1.x, pos1.y, radius);
        cout << "collide!" << endl;
        ofSetBackgroundColor(0);
        
        ofDrawBitmapString("BAM!", 300, 300);
        
    }
    
    
}
