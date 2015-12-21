#pragma once

#include "ofMain.h"
#include "ofEvent.h"
#include  "bag.h"
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
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
    ofSoundPlayer love;
    ofArduino ard;
    ofArduino bSetupArduino;
    
    
private:
    void setupArduino(const int & pinNum);
    void digitalPinChanged(const int & pinNum);
    void analogPinChanged(const int & pinNum);
    void updateArudino();
    
    
    string buttonState;
    
    vector <bag> bagList;
    
    
};
