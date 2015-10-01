//
//  leaf.h
//  Branches
//
//  Created by Ryan Hall on 10/1/15.
//
//

#ifndef __Branches__leaf__
#define __Branches__leaf__


#include <ofmain.h>



class Leaf {
    
public:
    void setup();
    void update();
    void draw(float _xPos, float _yPos);
    
  
    ofColor stemColor;
    ofColor leafColor;
    float xPos, yPos;
    float scaleFactor;
    float rotation;
    
    float stemLength, stemWidth;
    float leafLength, leafWidth;
    float leafCurvature;
    
    
};

#endif /* defined(__Branches__leaf__) */
