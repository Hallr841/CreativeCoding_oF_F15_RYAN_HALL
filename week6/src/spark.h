//
//  spark.h
//  
//
//  Created by Ryan Hall on 10/15/15.
//
//

#ifndef ____spark__
#define ____spark__

#include <ofMain.h>

class spark{
    
public:
    void setup(float _x, float _y);
    void update();
    void draw();
    void reset();
    
    
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f acc;
    ofColor color;
    float diameter;
    float bounce;
    
};

#endif /* defined(____spark__) */
