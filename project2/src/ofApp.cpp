#include "ofApp.h"

int circleX, circleY,i, red, green, blue;
//--------------------------------------------------------------
void ofApp::setup(){
    
 
    ofSetFrameRate(100);
    ofEnableAlphaBlending();
    ofEnableAntiAliasing();
    ofBackground(150,50,10);
    w = ofGetWidth();
    h =ofGetHeight();
    movie.initGrabber(w, h, true);
    //reserve memory for cv images
    rgb.allocate(w, h);
    filtered.allocate(w, h);
    red.allocate(w,h);
    green.allocate(w,h);
    blue.allocate(w,h);
    saberhits =0;
    collision = false;
    
    
    
    int numDroid=1;
    int numSaber=1;
    
    for(int i = 0; i < numDroid; i++){
        pdroid droid;
        droid.setup();
        droidVector.push_back(droid);
        
    }
    
    
    for(int i = 0; i < numSaber ; i++){
        mastersaber luke;
        luke.setup();
         saberList.push_back(luke);
     }
}

//--------------------------------------------------------------
void ofApp::update(){
    
    movie.update();
    
    if (movie.isFrameNew()) {
        
        //copy webcam pixels to rgb image
        rgb.setFromPixels(movie.getPixels(), w, h);
        
        //mirror horizontal
        rgb.mirror(false,false);
      
        
        //store the three channels as grayscale images
        
        rgb.convertToGrayscalePlanarImages(red, green, blue);
        
        green+=red;   // adding green and blue channels then will subtract from red chanel to filter out only red
        blue-=red;
        //filter image based on the hue value were looking for
        for (int i=0; i<w*h; i++) {
            filtered.getPixels()[i] = ofInRange(40,0,blue.getPixels()[i]) ? 0: 255;
        }
        
        filtered.flagImageChanged();
        //run the contour finder on the filtered image to find blobs with a certain hue
        contours.findContours(filtered, 50, w*h/2, 1, false);
    }
    
    for(int i = 0; i< droidVector.size() ;i++){
        droidVector[i].update();
    }
    
    
    for(int i = 0; i< saberList.size() ;i++){
       saberList[i].update();
    }
    

//    for (int j=0; j<10; j++) {
//        
//        if (i== j) continue;
//        
//        float distance = ofDist(droidVector[i].pos.x, droidVector[i].pos.y, saberList[j].pX, saberList[j].pY);
//        
//        if ((distance <= saberList[j].saberW/2) && (distance <= saberList[j].saberH/2)) {
//            
//          droidVector[i].vel.x += (droidVector[i].pos.x - saberList[j].pX) /20.0f;
//          droidVector[i].vel.y += (droidVector[i].pos.y - saberList[j].pY) /20.0f;
//        }
//        
//        
//    }
//    droidVector[i].vel.x	*= 0.996f;
//    droidVector[i].vel.y	*= 0.996f;
//    
//}
//
////
////    if((distance <= thisSaber.saberW/2) || ( distance <= thisSaber.saberH/2)){

    for(int i=0; i<saberList.size();i++){
        for(int d=0; d<droidVector.size(); d++){
            
            int  minX= (saberList[i].pX -saberList[i].saberW/2);
            int  maxX= (saberList[i].pX +saberList[i].saberW/2);
            int  minY= (saberList[i].pY -saberList[i].saberH/2);
            int  maxY= (saberList[i].pY +saberList[i].saberH/2);
            
            
            if(( droidVector[d].pos.x >=  minX )&&(droidVector[d].pos.x <= maxX)&&(droidVector[d].pos.y >= minY )&&( droidVector[d].pos.y <= maxY )){
                
                droidVector[d].vel.x += (droidVector[d].vel.x - saberList[i].pX) / 20.0f;
                droidVector[d].vel.y += (droidVector[d].vel.y - saberList[i].pY) / 20.0f;
                
                if ((collision = true)) {
                    saberhits ++;
                
                    }
            
     
                }
                    droidVector[d].vel.x	*= 0.996f;
                    droidVector[d].vel.y	*= 0.996f;
            
                    collision = false;
        
            }
        }

    
    
    }




//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255);
    
    
    
    //draw all cv images
     blue.draw(0, 0);
     filtered.draw(0,0);
     contours.draw(0,0);
     movie.draw(0, 0);
    
    ofSetColor(0, 0,255,0);
    ofFill();
    
  
    
    //draw blue circles for found blobs
    for (int i=0; i<contours.nBlobs; i++) {
     //ofEllipse(contours.blobs[i].centroid.x,contours.blobs[i].centroid.y,100,1000);
        saberList[i].pY = contours.blobs[i].centroid.y;
        saberList[i].pX = contours.blobs[i].centroid.x;
        saberList[i].saberH = contours.blobs[i].centroid.y;
        saberList[i].saberW = contours.blobs[i].centroid.x;
      
        saberList[i].saberH = contours.blobs[i].centroid.y;
        
        for(int i = 0; i< saberList.size() ;i++){
           saberList[i].draw();
        }
        
    }
    
    for(int i = 0; i< droidVector.size() ;i++){
        droidVector[i].draw();
    }
    
    //stats
    ofSetColor(255, 255, 255);
    ofDrawBitmapString("\nSaber hits:"+ofToString(saberhits),20,20);
    
    

    
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key==115) {
        i--;
    }
    if (key == 119) {
        i++;
    }



}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
    //cout << "mouseMoved: Ó << x << Ò, Ó << y << endl;
    circleX = x;
    circleY = y;


}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
   //calculate local mouse x,y in image
    int mx = x % w;
    int my = y % h;

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
