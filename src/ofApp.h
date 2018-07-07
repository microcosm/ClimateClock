#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "Clock.h"
#include "ofxProjectionMask.h"
#include "ofxLayerMask.h"

class ofApp : public ofBaseApp{

public:
    void setup();
    void setupImages();
    void update();
    void draw();
    void exit();
    void keyPressed(int key);
  
private:
    bool hideGui = false;
    Clock clock;

    ofxPanel gui;
    ofxColorSlider backgroundColor;
    ofxColorSlider textColor;

    ofxProjectionMask projectionMask;
    ofxLayerMask *clockFace, *background;
    ofImage backgroundImage;
    map<string, ofImage> backgrounds;
    string backgroundsDir;

    vector<string> cities;
    int currentCity;
};
