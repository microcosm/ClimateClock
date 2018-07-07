#include "ofMain.h"
#include "ofApp.h"
#include "SecondApp.h"

//========================================================================
int main( ){
  ofGLFWWindowSettings settings;
  
  
  settings.setSize(400, 400);
  settings.setPosition(ofVec2f(0,0));
  settings.resizable = true;
  settings.multiMonitorFullScreen = true;
  shared_ptr<ofAppBaseWindow> secondWindow = ofCreateWindow(settings);
  
  
  settings.setSize(600, 600);
  settings.setPosition(ofVec2f(300,0));
  settings.resizable = true;
  settings.multiMonitorFullScreen = false;
  shared_ptr<ofAppBaseWindow> mainWindow = ofCreateWindow(settings);

  shared_ptr<ofApp> mainApp(new ofApp);
  shared_ptr<SecondApp> secondApp(new SecondApp);
  
  ofRunApp(secondWindow, secondApp);
  ofRunApp(mainWindow, mainApp);
  ofRunMainLoop();
  
}
