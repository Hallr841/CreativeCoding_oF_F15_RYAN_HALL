//
//  bag.h
//  
//
//  Created by Ryan Hall on 12/17/15.
//
//

#ifndef ____bag__
#define ____bag__

#include "ofMain.h"


class bag{
public:

   bag();
    
    void setup();
    void resetForces();
    void applyForce(ofVec2f force);
    void applyDampingForce(float damping);
    
    void applyAttraction(bag &p,float radius,float scale);
    void applyRepulsion(bag &p, float radius ,float Scale);
    void applyRepulsion(ofVec2f _pos, float radius, float scale);
    void keyPressed(int key);

    void update();
    void draw();
    
    
    
    ofVec2f pos,vel,acc;
    
    int size;
    
    

};

#endif /* defined(____bag__) */
