#pragma once

#include "ofMain.h"
#include "Ball.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
        void collision();
	
    ofVec3f spos;
    ofVec3f pos1;
    ofVec3f pos2;
    
    ofVec3f mousePos;
    ofVec3f offset;
    ofVec3f dir1;
    
    ofVec3f vel1;
    ofVec3f vel2;
    
    int radius;
    bool collide;
    bool change;
};
