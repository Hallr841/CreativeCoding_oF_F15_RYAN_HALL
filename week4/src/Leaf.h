//
//  Leaf.h
//  branches2
//
//  Created by Ryan Hall on 10/3/15.
//
//

#ifndef __branches2__Leaf__
#define __branches2__Leaf__

#include "ofMain.h"


class Leaf{
    
public:
    void setup(float _branchAngle, int _season);
    void update();
    void draw(float _xPos, float _yPos);
    
    private :
    
    ofColor stemColor;  //innercolor
    ofColor leafColor; //outercolor
    float xPos, yPos;
    float scaleFactor;
    float rotation;
    
    float smallcrystalwh;
    float outercrystalwh;
    
    float randomNumber;
    int season;
    
//    void setup(int _season);
//    void update();
//    void draw(float _xPos, Float _yPos);
//    
//    //what is bismuth bistmuth metal when metal forms cystal in a kinda of fractal from with  silvers and purples
//    private
    
//    ofColor crystalcolor;
//    ofColor outercrystalcolor;
//    float xPos,yPos;
//    float rotation;
//    float scaleFactor;
//    float smallcrystalwh;
//    float outercrystalwh;
//    int season;
//
};

    

#endif /* defined(__branches2__Leaf__) */
