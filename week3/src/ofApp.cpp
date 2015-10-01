#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundAuto(false);
    bool hasDrawn = false;



}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
   
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
    myBranch.setup(ofGetWidth()/2, ofGetHeight()/2, 100, 40, 0.35, 2, 5, 0, PI/2, 0, ofColor(204, 204, 204));

//    float _xPos,
//    float _yPos,
//    float _width,
//    float _length,
//    float _SpiltPercentage,
//    int _maxSubdivisons,
//    int _maxSegments,
//    int _segmentSinceStart,
//    float _angle,
//    float _curvature,
//    ofColor _color;

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
