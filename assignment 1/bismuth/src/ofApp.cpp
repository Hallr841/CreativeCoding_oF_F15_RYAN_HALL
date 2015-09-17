#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    ofEnableAlphaBlending();
    ofEnableAntiAliasing();
    ofEnableSmoothing();
    
    numcrystals = (int)ofRandom(5,80);
    for (int i=0 ; i < numcrystals; i++){
        
        bismuth tempcrystal;
        tempcrystal.setup();
        crystals.push_back(tempcrystal);
        
    }

   

}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i = 0 ; i < numcrystals ; i++) {
        crystals[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for (int i=0 ; i < numcrystals ; i++) {
        crystals[i].draw();
    }

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

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    crystals.clear();
    setup();

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
