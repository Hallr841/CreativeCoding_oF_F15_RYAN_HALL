//
//  mastersaber.cpp
//  
//
//  Created by Ryan Hall on 11/12/15.
//
//

#include "mastersaber.h"




void mastersaber :: setup(){
    
    
    pX=0;
    pY=0;
    saberW =100;
    saberH = 6000;
    handleW = 15;
    handleH = 80;
    SaberColor = ofColor(0,0,255,40);

    
    
    
}


void mastersaber::update(){
    
 
    
    
}

void mastersaber::draw(){
    
    
    
    ofSetColor(SaberColor);
    // ofEllipse(pX,pY, saberW, saberH);
    ofDrawEllipse(pX, pY, saberW, saberH);
    

    
    
    
    
}

void mastersaber::mouseMoved(int x, int y){
    
    
    
}