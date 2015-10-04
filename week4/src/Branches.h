//
//  Branches.h
//  branches2
//
//  Created by Ryan Hall on 10/2/15.
//
//

#ifndef __branches2__Branches__
#define __branches2__Branches__

#include "OfMain.h"
#include "Leaf.h"


class Branches : public ofBaseApp{
    
public:
    void setup(float _xPos,
               float _yPos,
               float _width,
               float _length,
               float _splitPercentage,
               float _maxSplitAngle,
               int _maxSubdivisons,
               int _maxSegments,
               int _segmentsSinceStart,
               float _angle,
               float _curvature,
               ofColor _color,
               int _season
               );
    void update();
    void draw();
    
private:
    
    float xPos, yPos;
    float width,length;
    float splitPercentage;
    float maxSplitAngle;
    int maxSubdivisons;
    int maxSegments;
    int segmentsSinceStart;
    float angle;
    float curvature;
    bool  hasleaves;
    ofColor color;
    
//leaf myLeaf;
    int numLeaves;
    vector <Leaf>leaves;
    bool split;
    int season;
    
    
    
    
};

#endif /* defined(__branches2__Branches__) */
