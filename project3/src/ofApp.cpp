#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //load spartacus love theme
    love.load("love.mp3");
    
    //setting the volume
    love.setVolume(0.5);
    
    //loop the song
    love.setLoop(true);
    
    //play the song
    love.play();
    
    
   // ofSetVerticalSync(true);
   // ofSetFrameRate(60);
    ofBackground(0);
    
    
    for(int i=0; i< 500 ;i++){
        bag myBag;
        myBag.setup();
        bagList.push_back(myBag);
    
    }
    
    
    
    
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    ofVec2f mousePos;
    mousePos.set(ofGetMouseX(), ofGetMouseY());
    
    
    for (int i = 0; i < bagList.size(); i++){
        bagList[i].resetForces();
    }
    
    for (int i = 0; i < bagList.size(); i++){
        
        
        bagList[i].applyRepulsion(mousePos, 800, 2.8);
        
        for (int j = 0; j < i; j++){
           bagList[i].applyRepulsion(bagList[j], 50, 0.4);
           bagList[i].applyAttraction(bagList[j], 1000, 0.005);
            
        }
    }
    
    for (int i = 0; i < bagList.size(); i++){
       bagList[i].applyDampingForce(0.9);
       bagList[i].update();
    }
    
 
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255);
    
    for(int i =0; i < bagList.size();i++){
        bagList[i].draw();
        
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

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
