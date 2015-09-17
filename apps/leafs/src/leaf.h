//
//  leaf.h
//  leafs
//
//  Created by Ryan Hall on 9/10/15.
//
//

#ifndef __leafs__leaf__
#define __leafs__leaf__

#include <ofMain.h>

#endif /* defined(__leafs__leaf__) */

class leaf {
    
public:
    
    void setup();
    void update();
    void draw();
    
    
// stuff that makes a leaf

    
    ofColor stemColor;
    ofColor leafColor;
    float xPos, yPos;
    float scaleFactor;
    float rotation;
    
    float stemLength, stemWidth;
    float leafLength, leafWidth;
    
};
