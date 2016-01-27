#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    string root = "";
    loader.findNestedFilePaths(root);
    vector<string> names = loader.getPaths();
    for(int i = 0; i < names.size(); i++) {
        cout<<names[i]<<endl;
    }
    cout<<"/--------------/"<<endl;
    loader.clearPaths();
    root = "images";
    names.clear();
    loader.findNestedFilePaths(root);
    names = loader.getPaths();
    for(int i = 0; i < names.size(); i++) {
        cout<<names[i]<<endl;
    }
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
