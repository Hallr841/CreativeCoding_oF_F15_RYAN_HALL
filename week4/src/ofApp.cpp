#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    bool hasDrawn =false;
    ofRectMode(RECT_MODE_CENTER);
    season = 0;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    ofBackground(125, 125, 125);
    
    if(key == OF_KEY_RIGHT){
        season = 0;
        
        myBranches.setup(ofGetWidth()/2,      //float _xPos
                       (ofGetHeight()/2),     //float _yPos
                       //                   ofGetHeight()/2,     //float _yPos
                       1,                  //float _width
                       -1,                  //float _length
                       0.35,                //float _splitPercentage
                       PI/2,                //float _maxSplitAngle
                       2,                   //int _maxSubdivisions
                       5,                   //int _maxSegments
                       0,                   //int _segmentsSinceStart
                       -PI/2,                //float _angle
                       0,                   //float _curvature
                       ofColor(255,223,0),//ofColor _color
                       season
                       );                  //int numberOfBobs
        
        
        
        
    }
    if(key == OF_KEY_LEFT){
        season = 1;
        
        myBranches.setup(ofGetWidth()/2,      //float _xPos
                       (ofGetHeight()/2),     //float _yPos
                       //                   ofGetHeight()/2,     //float _yPos
                       1,                  //float _width
                       -1,                  //float _length
                       0.35,                //float _splitPercentage
                       PI/2,                //float _maxSplitAngle
                       2,                   //int _maxSubdivisions
                       5,                   //int _maxSegments
                       0,                   //int _segmentsSinceStart
                       -PI/2,                //float _angle
                       0,                   //float _curvature
                       ofColor(250,250,210),//ofColor _color
                       season
                       );                  //int numberOfBobs
    }
    
    
    if(key == OF_KEY_UP){
        season = 2;
        
        myBranches.setup(ofGetWidth()/2,      //float _xPos
                       (ofGetHeight()/2),     //float _yPos
                       //                   ofGetHeight()/2,     //float _yPos
                       1,                  //float _width
                       -1,                  //float _length
                       0.35,                //float _splitPercentage
                       PI/2,                //float _maxSplitAngle
                       2,                   //int _maxSubdivisions
                       5,                   //int _maxSegments
                       0,                   //int _segmentsSinceStart
                       -PI/2,                //float _angle
                       0,                   //float _curvature
                       ofColor(250,250,210),//ofColor _color
                       season
                       );                  //int numberOfBobs
    }
    if(key == OF_KEY_DOWN){
        season = 3;
        
        myBranches.setup(ofGetWidth()/2,      //float _xPos
                        (ofGetHeight()/2),     //float _yPos
                       //                   ofGetHeight()/2,     //float _yPos
                       1,                  //float _width
                       -1,                  //float _length
                       0.35,                //float _splitPercentage
                       PI/4,                //float _maxSplitAngle
                       2,                   //int _maxSubdivisions
                       5,                   //int _maxSegments
                       0,                   //int _segmentsSinceStart
                       -PI/2,                //float _angle
                       0,                   //float _curvature
                       ofColor(138,43,226),//ofColor _color
                       season
                       );                  //int numberOfBobs
        
       
        //138,43,226
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    ofBackground(125, 125, 125);
    
    //This is where your Tree begins!
    myBranches.setup(ofGetWidth()/2,      //float _xPos
                   (ofGetHeight()/2),     //float _yPos
                   //                   ofGetHeight()/2,     //float _yPos
                   5,                  //float _width
                   -5,                  //float _length
                   0.35,                //float _splitPercentage
                   PI/2,                //float _maxSplitAngle
                   2,                   //int _maxSubdivisions
                   5,                   //int _maxSegments
                   0,                   //int _segmentsSinceStart
                   -PI/2,                //float _angle
                   0,                   //float _curvature
                   ofColor(250,250,210),//ofColor _color
                   false
                   );                  //int numberOfBobs
    
}



//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
