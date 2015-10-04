//
//  Branches.cpp
//  branches2
//
//  Created by Ryan Hall on 10/2/15.
//
//

#include "Branches.h"


//--------------------------------------------------------------
void Branches::setup(float _xPos, float _yPos, float _width, float _length, float _splitPercentage, float _maxSplitAngle, int _maxSubdivisons, int _maxSegments, int _segmentsSinceStart, float _angle, float _curvature, ofColor _color,int _season){
    
    
    xPos = _xPos;
    yPos = _yPos;
    width = _width;
    length = _length;
    splitPercentage = _splitPercentage;
    maxSplitAngle = _maxSplitAngle;
    maxSubdivisons = _maxSubdivisons;
    maxSegments = _maxSegments;
    segmentsSinceStart = _segmentsSinceStart;
    angle = _angle;
    curvature = _curvature;
    color = _color;
    season = _season;
    



// does the branches split??

if( ofRandom (0,1 ) > splitPercentage && segmentsSinceStart != maxSegments) {
  
  split = true;
    
}else{
    
  split = false;
}


//leaves class
    
    numLeaves = (int)ofRandom(0,4);
    if(segmentsSinceStart == maxSegments){ // make sure there are leaves at the end of the final branch
        numLeaves = (int)ofRandom(3,5);
    }
    if(segmentsSinceStart == 0){ // no leaves at the end of the first branch (aka the Trunk!)
        numLeaves = 0;
    }
    
    if(season != 2){
        for(int i = 0; i < numLeaves; i++){
            Leaf tempLeaf;
            tempLeaf.setup(angle, season);
            leaves.push_back(tempLeaf);
        }
    }

//draw current branch instance
    
    
    if(_season != 2){
        for(int i = 0; i < numLeaves; i++){
            leaves[i].draw(xPos + length*cos(angle), yPos + length*sin(angle)); //drawing leaves at the end of this branch...based on length and angle
        }
    }
    
    
    
    //subbranches

ofSetColor(color);
ofRect(xPos,yPos,xPos+length*cos(angle),yPos+length*sin(angle));

    

//draw leaves to current branch
    

//update varibales to the current branch
    xPos +=length*cos(angle);
    yPos +=length*sin(angle);
    width =width*(ofRandom(0.4,0.8));
    length =length*(ofRandom(0.5,0.9));
    angle +=curvature;
    curvature += ofRandom(0,(float)(2*PI/2)/ 360.0);
    
    
    
    //==================
    segmentsSinceStart += 1;
    //==================
    
    //====================
    // RECURISON!
    //====================
    
    if (segmentsSinceStart <= maxSegments ) {
        if(!split){
            Branches subBranches;
            subBranches.setup(xPos,yPos,width,length,splitPercentage,maxSplitAngle,maxSubdivisons,maxSegments,segmentsSinceStart,angle,curvature,color,season);
        }else{
            cout << "spilt" << endl; // some feedback
            Branches subBranches1;
            float angle1= angle + ofRandom(0,maxSplitAngle);
            Branches subBranches2;
            float angle2= angle + ofRandom(0,maxSplitAngle);
            
            subBranches1.setup(xPos,yPos,width,length,splitPercentage,maxSplitAngle,maxSubdivisons,maxSegments,segmentsSinceStart,angle1,curvature,color,season);
            
             subBranches2.setup(xPos,yPos,width,length,splitPercentage,maxSplitAngle,maxSubdivisons,maxSegments,segmentsSinceStart,angle2,curvature,color,season);
            
        }
    }
    
    
    //leaves class
    
    numLeaves = (int)ofRandom(0,4);
    if(segmentsSinceStart == maxSegments){ // make sure there are leaves at the end of the final branch
        numLeaves = (int)ofRandom(3,5);
    }
    if(segmentsSinceStart == 0){ // no leaves at the end of the first branch (aka the Trunk!)
        numLeaves = 0;
    }
    
    if(season != 2){
        for(int i = 0; i < numLeaves; i++){
            Leaf tempLeaf;
            tempLeaf.setup(angle, season);
            leaves.push_back(tempLeaf);
        }
    }
    
    //draw current branch instance
    
    
    if(_season != 2){
        for(int i = 0; i < numLeaves; i++){
            leaves[i].draw(xPos + length*cos(angle), yPos + length*sin(angle)); //drawing leaves at the end of this branch...based on length and angle
        }
    }
}

//--------------------------------------------------------------
void Branches::update(){
    
}

//--------------------------------------------------------------
void Branches :: draw(){
    
}