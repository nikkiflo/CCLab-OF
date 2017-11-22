#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetBackgroundAuto(false);
    
    int numParticles = 350;
    for (int i = 0; i < numParticles; i++){
        Particle part;
        particles.push_back(part);
    }
    
    fireworksRestart();

}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i = 0; i < particles.size(); i++){
        particles[i].update();
    }
    
    if (particles[0].alpha <=0){
        fireworksRestart();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(0, 0, 0,18);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    for (int i = 0; i < particles.size(); i++){
        particles[i].draw();
    }

}

//--------------------------------------------------------------

void ofApp::fireworksRestart(){
    ofPoint fpos;
    fpos.set(ofRandomWidth(), ofRandomHeight());
    
    ofColor particleColor;
    particleColor.setHsb(ofRandom(255), 255, 192);
    
    for(int i = 0; i < particles.size(); i++){
        particles[i].setup(fpos.x, fpos.y, particleColor);
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
