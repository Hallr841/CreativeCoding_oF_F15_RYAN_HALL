//
//
//reference cv code from https://dirtydebiandevil.wordpress.com/2013/01/21/color-tracking-in-openframework/
// by kunal Gupta
//Created by Ryan Hall on 11/12/15.
//
//
//
//



#pragma once

#include "ofMain.h"
#include "ofxCv.h"
#include "pdroid.h"
#include "mastersaber.h"
#include "ofxOpenCv.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

    ofVideoGrabber movie;                          // movie object for capturing Video from Cam
    ofxCvColorImage rgb;                           //rgb object for storing color image data
    ofxCvGrayscaleImage filtered,red,green,blue;  //objects for storing grayscale image data
    ofxCvContourFinder contours;                         //object to store contours of the filtered image
    int w,h;
    vector<pdroid> droidVector;
    vector <mastersaber> saberList;
    int numSaber;
    int numDroid;
    int saberhits;
    bool collision;

    

    
		
};
