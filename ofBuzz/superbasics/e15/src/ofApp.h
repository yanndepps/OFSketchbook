#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);

		void loadVocal();
		void loadPiano();

		vector<ofSoundPlayer> voices;
		ofSoundPlayer voice1, voice2, voice3, voice4, voice5, voice6, voice7;
		bool b_autoPlay;
		float tempo, currTime;
		int totalVoices;
};
