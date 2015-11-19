//
//  pdroid.cpp
//  
//
//  Created by Ryan Hall on 11/12/15.
//
//

#include "pdroid.h"


//==========================================================

void pdroid::setup(){
    
    pos.x=300;
    pos.y=300;
    acc.x=0;
    acc.y=0;
    vel.x= ofRandom(-1,1);
    vel.y= ofRandom(-1,-1);
    diameter = 160;
    idiameter = 80;
    bounciness = 1;
    inside = ofColor(255,0 ,0);
    outside = ofColor(216,230,216);
    
    //timeX =  ofGetElapsedTimef()*ofRandom(0.1,1);
    //timeY =   ofGetElapsedTimef()*ofRandom(1);
}


//=========================================================

void pdroid::update(){
    
    
    
    
    //update speed by acceleration
    
    vel.x += acc.x;
    vel.y += acc.y;
    
    
    //update position by speed
    
    pos.x += vel.x;
    pos.y += vel.y;
    
    
    if(pos.x >= ofGetWidth()){
        pos.x = ofGetWidth();
        vel.x *= -bounciness;
        
    }
    
    
    if( pos.x <= 0){
        pos.x = 0 ;
        vel.x *= -bounciness;
        
        
    }
    
    
    if( pos.y >=  ofGetHeight()){
        pos.y  = ofGetHeight();
        vel.y *= -bounciness;
    }
    
    
    
    if(pos.y <= 0){
        pos.y  = 0 ;
        vel.y *= -bounciness;
    }
    
    
    
    
}









//=========================================================

void pdroid:: draw(){
    
    
    ofPushStyle();
    ofSetColor(outside);
    ofEllipse(pos.x,pos.y,diameter,diameter);
    ofSetColor(inside);
    ofEllipse(pos.x,pos.y,idiameter,idiameter);
    
    
    
    ofPopStyle();
    
    
    
    
    
    
    
    
    
}