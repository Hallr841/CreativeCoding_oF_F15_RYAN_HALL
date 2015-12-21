//
//  Leaf.cpp
//  branches2
//
//  Created by Ryan Hall on 10/3/15.
//
//

#include "Leaf.h"
#include "OfMain.h"


void Leaf::setup(float _branchAngle, int _season){
    xPos = ofGetWidth()/2; //set to middle of screen in the horizontal
    yPos = ofGetHeight()/2; //set to 3/4 of the way from the top of the screen in the vertical
    stemColor = ofColor(ofRandom(100,255),255,210); //brown
    
    season = _season;
    
    if(season == 0 || season == 3){
        leafColor = ofColor(ofRandom(0,138),ofRandom(0,10),ofRandom(130,255), ofRandom(130,255)); //set to random green color
        
    } else if(season == 1){
        randomNumber = ofRandom(0, 3);
        
        if(randomNumber >= 0 && randomNumber <1){
            leafColor = ofColor(ofRandom(0,138),0,ofRandom(130,255)); //brown
        }
        if(randomNumber >= 1 && randomNumber < 2) {
            leafColor = ofColor(ofRandom(200,250),250,1); //red
        }
        if(randomNumber >= 2 && randomNumber < 3) {
            leafColor = ofColor(ofRandom(100,150),ofRandom(200,250),19); //yellow
        }
    }
    
    //    leafColor = ofColor(ofRandom(0,20),ofRandom(100,200),ofRandom(0,20), ofRandom(150,255)); //set to random green color
    scaleFactor = ofRandom(.5,1);
    ofSetRectMode(OF_RECTMODE_CENTER);
 
    
    smallcrystalwh = ofRandom(60,120);
    outercrystalwh = ofRandom(80,160);
    //    rotation = _branchAngle + PI/2; //bring in angle of branch
    rotation = _branchAngle + PI/2 + ofRandom(+(PI/2), PI/2); //bring in angle of branch
    
    rotation = rotation * (90/PI); //convert to degrees (from radians) to use for ofRotateZ() below, which expects degrees...
}

void Leaf::update(){
    
}

void Leaf::draw(float _xPos, float _yPos){
    

    ofPushMatrix();
    ofTranslate(xPos,yPos);
    ofRotateZ(rotation);
    ofScale(scaleFactor,scaleFactor);
    
    
    
    
    
    
    
    
    // outerlayer
    ofSetColor(stemColor);
    ofRect(0+outercrystalwh*2,0+smallcrystalwh*2, outercrystalwh, outercrystalwh);
    
    
    //innerlayer
    ofSetColor(leafColor);
    ofRect(0+outercrystalwh*2,0+smallcrystalwh*2, smallcrystalwh, smallcrystalwh);
    
    ofPopMatrix();
    
    
    
    
}