//
//  leaf.cpp
//  leafs
//
//  Created by Ryan Hall on 9/10/15.
//
//

#include "leaf.h"



//-------------------------------------------------
void leaf::setup(){
    ofBackground(255, 255, 255);
    stemColor = ofColor(ofRandom(100,150), 69 ,19); // randombrown
    leafColor = ofColor(ofRandom(0,20), ofRandom(150,255), ofRandom(0,20),ofRandom(225,255));//random leaf color
    xPos = ofGetWidth()/2;
    yPos = ofGetHeight()/2;
    scaleFactor = ofRandom(.5 ,1);
    rotation = ofRandom(0,360);
    ofSetRectMode(OF_RECTMODE_CENTER);
    stemLength = ofRandom(30,60);
    stemWidth = ofRandom(3,6);
    leafLength = ofRandom(100,150);
    leafWidth = ofRandom(100,200);
    rotation = ofRandom(0,360);
    
   
}

//--------------------------------------------------------------
void leaf::update(){
   
  
    
}

//--------------------------------------------------------------
void leaf::draw(){
   
    
    
    //Drawing Pratice
    
    //ofRect(xPos, yPos, 100,100);
    
    // draw leaf rightside
    
    ofPushMatrix();
     ofTranslate(xPos,yPos);
     ofRotateZ(rotation);
     ofScale(scaleFactor, scaleFactor);
    
     ofSetColor(leafColor);
     ofBeginShape();
    
     float x0 = 0;
     float x1 = x0 - leafWidth/2;
     float x2 = x0 - leafWidth/4;
     float x3 = x0;
    
    
    float y0 = 0 + stemLength;
    float y1 = y0 + leafLength/3;
    float y2 = y1 + leafLength/3;
    float y3 = y0 +leafLength;

    ofVertex(x0,y0);
    ofBezierVertex(x1,y1,x2,y2,x3,y3);
    //cout<< x1 << endl;
    //cout<< y1 << endl;
    
    
    ofEndShape();
    //leaf side
    
    ofBeginShape();
    
     x0 = 0;
     x1 = x0 + leafWidth/2;
     x2 = x0 + leafWidth/4;
     x3 = x0;
    
    
    y0 = 0 +stemLength;
    y1 = y0 + leafLength/3;
    y2 = y1 + leafLength/3;
    y3 = y0 + leafLength;
    
    ofVertex(x0,y0);
    ofBezierVertex(x1,y1,x2,y2,x3,y3);
    //cout<< x1 << endl;
    //cout<< y1 << endl;
    
    
    ofEndShape();
    

    
    //draw a stem
    ofSetColor(stemColor);
    ofRect(0, 0+stemLength/2, stemWidth, stemLength);
    
    ofTriangle(0 - stemWidth/2, 0+stemLength, 0 + stemWidth/2, 0 + stemLength , 0 , 0+stemLength + 2*(leafLength/3)) ;
    
    ofPopMatrix();
    
}
