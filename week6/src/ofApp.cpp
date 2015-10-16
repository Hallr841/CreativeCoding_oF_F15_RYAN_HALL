#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(139,110,85);
    ofSetFrameRate(60);
    ofEnableAlphaBlending();
    ofSetBackgroundAuto(true);
    
    
    numKindle = 1;
    
    for (int i = 0; i < numKindle; i++){
        spark spark;
        spark.setup(ofRandomWidth(), ofRandomHeight());
        sparkvector.push_back(spark);
    }
    

}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i <sparkvector.size();i++){
        sparkvector[i].update();
    }
    for (int i = 0; i < 1; i++){
        spark spark;
        spark.setup(ofRandomWidth(), ofRandomHeight());
        sparkvector.push_back(spark);
    }
    
   
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){
   
    for(int i = 0; i <sparkvector.size();i++){
        sparkvector[i].draw();
    }
    

    
  

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(sparkvector.size() >= 400);{
        
        sparkvector.clear();
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
