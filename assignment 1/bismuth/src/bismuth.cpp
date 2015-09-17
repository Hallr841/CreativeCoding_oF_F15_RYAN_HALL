//
//  bismuth.cpp
//  bismuth
//
//  Created by Ryan Hall on 9/17/15.
//
//

#include "bismuth.h"






//--------------------------------------------------------------

void bismuth::setup(){
    
    
    ofBackground(0,0,0);
      crystalcolor = ofColor(ofRandom(0,138),0,ofRandom(130,255));
      outercrystalcolor= ofColor( 250,250, 210);
      xPos = ofGetWidth()/2;
      yPos = ofGetHeight()/2;
      rotation = ofRandom(yPos,360);
      scaleFactor=ofRandom(.5,1);
      ofSetRectMode(OF_RECTMODE_CENTER);
      smallcrystalwh = ofRandom(60,120);
      outercrystalwh = ofRandom(80,160);
    
    
    
    

    
}

//--------------------------------------------------------------
void bismuth::update(){
    
}

//--------------------------------------------------------------
void bismuth::draw(){
    
    ofPushMatrix();
    ofTranslate(xPos,yPos);
    ofRotateZ(rotation);
    ofScale(scaleFactor,scaleFactor);
    
    
    
    
    
    
    
    
   // outerlayer
    ofSetColor(outercrystalcolor);
    ofRect(0+outercrystalwh*2,0+smallcrystalwh*2, outercrystalwh, outercrystalwh);
    
    
    //innerlayer
    ofSetColor(crystalcolor);
    ofRect(0+outercrystalwh*2,0+smallcrystalwh*2, smallcrystalwh, smallcrystalwh);
    
    ofPopMatrix();
    
    
    

}