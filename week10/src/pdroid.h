//
//  pdroid.h
//  
//
//  Created by Ryan Hall on 11/12/15.
//
//

#ifndef ____pdroid__
#define ____pdroid__

#include <ofMain.h>



class pdroid {
    
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
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofColor outside;
    ofColor inside;
    float diameter;
    float idiameter;
    float bounciness;
    ofVec2f vel;
    ofVec2f pos;
    ofVec2f acc;
    
    

    
    
    
    
};




#endif /* defined(____pdroid__) */
