//
//  Branch.cpp
//  Branches
//
//  Created by Ryan Hall on 9/27/15.
//
//

#include "Branch.h"

//--------------------------------------------------------------
void Branch::setup(float _xPos,
                   float _yPos,
                   float _width,
                   float _length,
                   float _split,
                   int _maxSubdivisons,
                   int _maxSegments,
                   int _segmentSinceStart,
                   float _angle,
                   float _curvature,
                   ofColor _color){
    
    
    xPos = _xPos;
    yPos = _yPos;
    width = _width;
    length = _length;
    split = _split;
    maxSubdivisons = _maxSubdivisons;
    maxSegments = _maxSegments;
    segmentSinceStart = _segmentSinceStart;
    angle = _angle;
    curvature = _curvature;
    color = _color;
    
    //store brac=k in main vector<> of Branches ...
    
    cout << "new Branch" <<endl;
    cout << "Segment Count=" ;
    cout << segmentSinceStart<< endl;
    //draw current branch instance
    ofSetColor(color);
    ofSetLineWidth((int)width);
    ofLine(xPos, yPos, xPos + length*cos(angle),yPos+length*sin(angle));
    
    //update varibles to pass to next sub branch
    xPos += length * cos(angle);
    yPos += length * sin(angle);
    width = width * (ofRandom(0.5,0.8));
    segmentSinceStart += 1;
    angle += curvature;
    curvature += ofRandom(0,(float)(2*PI)/360.0);
    
   
    
    
    //Recurison
    if (segmentSinceStart <= maxSegments) {
        // split if chances
        if (ofRandom(0,1) > split){
            Branch subBranch;
            subBranch.setup(xPos, yPos, width, length, split, maxSubdivisons, maxSegments, segmentSinceStart, angle , curvature, color);
        }else{
            cout << "split" << endl;
            Branch subBranch1;
            float angle1 = angle + ofRandom(0, 3*(PI/8));
            Branch subBranch2;
            float angle2 = angle + ofRandom(0, 3*(PI/8));
            
            subBranch1.setup(xPos, yPos,width,length,split,maxSubdivisons,maxSegments,segmentSinceStart, angle1, curvature,color);
            subBranch2.setup(xPos, yPos, width, length, split, maxSubdivisons, maxSegments,segmentSinceStart, angle2 , curvature,color);
        
        }
    }
    
    
    
    
    

}

//--------------------------------------------------------------
void Branch::update(){
    
}

//--------------------------------------------------------------
void Branch::draw(){
    
}
