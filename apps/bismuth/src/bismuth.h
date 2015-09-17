//
//  bismuth.h
//  bismuth
//
//  Created by Ryan Hall on 9/17/15.
//
//

#ifndef __bismuth__bismuth__
#define __bismuth__bismuth__

#include <ofmain.h>

#endif /* defined(__bismuth__bismuth__) */


class bismuth {
    
public:
    void setup();
    void update();
    void draw();
    
    //what is bismuth bistmuth metal when metal forms cystal in a kinda of fractal from with  silvers and purples
    
    ofColor crystalcolor;
    ofColor outercrystalcolor;
    float xPos,yPos;
    float rotation;
    float scaleFactor;
    float smallcrystalwh;
    float outercrystalwh;
   
};