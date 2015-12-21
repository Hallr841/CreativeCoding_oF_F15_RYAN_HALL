//
//  bag.cpp
//  
//
//  Created by Ryan Hall on 12/17/15.
//
//

#include "bag.h"

bag::bag(){
    

            
            
}

void bag::setup() {
    
    //pos.set();
    pos.set(ofRandomHeight(), ofRandomWidth());
    pos.x = ofRandomWidth();
    pos.y = ofRandomHeight();
    size =3;
    
    
    
}

void bag ::update() {
    vel += acc;
    pos += vel;
    
    if(pos.x >= ofGetWidth()){
        pos.x = ofGetWidth();
        vel.x *= -1;
    
    }
    if(pos.x <= 0){
        pos.x = 0;
        vel.x *= -1;
    
     }
    if(pos.y >= ofGetHeight()){
        pos.y  = ofGetHeight();
        vel.y *= -1;
        
    }
    
    if(pos.y <= 0){
        pos.y = 0;
        vel.y *= -1;
        
    }
}

void bag::resetForces() {
    acc *= 0;
}

void bag::applyForce(ofVec2f force) {
    acc += force;
}

void bag::applyDampingForce(float damping) {
    acc -= vel * damping;
}

void bag::applyAttraction(bag &p, float radius, float scale) {
    
    ofVec2f diff	= pos - p.pos;
    float length	= diff.length();
    
    if (length < radius){
        float pct = 1 - (length / radius);
        diff.normalize();
        ofVec2f force = diff * scale * pct;
        applyForce(force * -1);
        p.applyForce(force);
    }
    
}

void bag::applyRepulsion(bag &p, float radius, float scale) {
    
    ofVec2f diff	= pos - p.pos;
    float length	= diff.length();
    
    if (length < radius){
        float pct = 1 - (length / radius);
        diff.normalize();
        ofVec2f force = diff * scale * pct;
        applyForce(force);
        p.applyForce(force * -1);
    }
    
}

void bag::applyRepulsion(ofVec2f _pos, float radius, float scale) {
    
    ofVec2f diff	= pos - _pos;
    float length	= diff.length();
    
    if (length < radius){
        float pct = 1 - (length / radius);
        diff.normalize();
        ofVec2f force = diff * scale * pct;
        applyForce(force);
    }
    
}


void bag ::draw() {
    ofPushStyle();
        ofCircle(pos, size);
    ofPopStyle();
}