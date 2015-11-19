//
//  mastersaber.h
//  
//
//  Created by Ryan Hall on 11/12/15.
//
//

#ifndef ____mastersaber__
#define ____mastersaber__

#include <ofMain.h>

class mastersaber{

public:
void setup();
void update();
void draw();

void keyPressed(int key);
void keyReleased(int key);
void mouseMoved(int x, int y);
void mouseDragged(int x, int y, int button);
void mousePressed(int x, int y, int button);
void mouseReleased(int x, int y, int button);
void windowResized(int w, int h);
void dragEvent(ofDragInfo dragInfo);
void gotMessage(ofMessage msg);


int saberW;
int saberH;
int handleW;
int handleH;
float pX,pY;

ofColor SaberColor;
ofColor SaberHandle;
    
};

#endif /* defined(____mastersaber__) */
