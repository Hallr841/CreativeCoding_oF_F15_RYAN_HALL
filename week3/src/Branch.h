//
//  Branch.h
//  Branches
//
//  Created by Ryan Hall on 9/27/15.
//
//

#ifndef __Branches__Branch__
#define __Branches__Branch__

#include "ofMain.h"

class Branch : public ofBaseApp{
    
public:
    void setup(float _xPos,
               float _yPos,
               float _width,
               float _length,
               float _split,
               int _maxSubdivisons,
               int _maxSegments,
               int _segmentSinceStart,
               float _angle,
               float _curvature,
               ofColor _color);
    void update();
    void draw();
    
private:
    float xPos;
    float yPos;
    float width;
    float length;
    float split;
    int maxSubdivisons;
    int maxSegments;
    int segmentSinceStart;
    float angle;
    float curvature;
    ofColor color;


    

};




#endif /* defined(__Branches__Branch__) */
