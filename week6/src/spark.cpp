//
//  spark.cpp
//  
//
//  Created by Ryan Hall on 10/15/15.
//
//

#include "spark.h"
//--------------------------------------------------------------
void spark :: setup(float _x,float _y){
    
    pos.x = ofRandom(0,ofGetWindowWidth());
    pos.y = ofRandom(0,ofGetWindowHeight());
    color = ofColor(0,0,0);
    vel.x= (-10,10);
    vel.y= (-5,5);
    acc.x=0;
    acc.y=0.5;
    diameter = 7;
    bounce = .9;
    
    
    
    
    
    
}

//--------------------------------------------------------------
void spark::update(){
    

    
    vel.x += acc.x;
    vel.y += acc.y;
    
    pos.x += vel.x;
    pos.y += vel.y;
    
    
    if ((pos.x+ diameter/2) > ofGetWidth()){
        pos.x = ofGetWidth()-diameter/2;
        vel.x *= -bounce;
    }
    if ((pos.x -diameter/2) < 0){
        pos.x = 0 + diameter/2;
        vel.x *= -bounce;
     }
    if ((pos.y + diameter) > ofGetHeight()){
        pos.y = ofGetHeight() -diameter;
        vel.y *= -1;
        vel.x *= bounce;
    }
    if ((pos.y - diameter/2) < 0){
        pos.y = 0 + diameter/2;
        vel.y *= -1;
        vel.x *= bounce;
    }
    
}

//--------------------------------------------------------------
void spark::draw(){

    //ofSetColor(color);
     ofSetColor(ofRandom(200,255),ofRandom(0,100),0);
    ofCircle(pos.x, pos.y, diameter);

    
    
    
    
}

//-------------------------------------------------------------

void spark::reset(){
    
    pos.x = ofRandom(0,ofGetWindowWidth());
    pos.y = ofRandom(0,ofGetWindowHeight());
    color = ofColor(0,0,0);
    vel.x= (-10,10);
    vel.y= (-5,5);
    acc.x=0;
    acc.y=0.5;
    diameter = 7;
    bounce = .9;
    
    



}