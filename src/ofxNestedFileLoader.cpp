//
//  ofxNestedFileLoader.cpp
//  nestedFileLoader
//
//  Created by James Bentley on 1/27/16.
//
//

#include "ofxNestedFileLoader.h"

ofxNestedFileLoader::ofxNestedFileLoader() {
}

vector<string> ofxNestedFileLoader::load(string root) {
    findNestedFilePaths(root);
    return getPaths();
}

void ofxNestedFileLoader::findNestedFilePaths(string root) {
    ofDirectory dir(root);
    dir.listDir();
    for(int i = 0; i < dir.size(); i++) {
        ofDirectory newDir(dir.getPath(i));
        if(newDir.isDirectory()) {
            findNestedFilePaths(dir.getPath(i));
        } else {
            paths.push_back(dir.getPath(i));
        }
    }
}

void ofxNestedFileLoader::clearPaths() {
    paths.clear();
}

void ofxNestedFileLoader::printPaths() {
    if(!paths.size()) {
        cout<<"No Paths Loaded!"<<endl;
        return;
    }
    for(int i = 0; i < paths.size(); i++) {
        cout<<paths[i]<<endl;
    }
}

string ofxNestedFileLoader::getFileExtension(string filePath) {
    vector<string> stringAtoms = ofSplitString(filePath, ".");
    if(stringAtoms.size() > 0) {
        return stringAtoms[stringAtoms.size() - 1];
    } else {
        ofLogError("getFileExtension: string %s has no '.' symbols", filePath);
    }
}

vecotr<string> ofxNestedFileLoader::getFolderStructure(string filePath) {
    vector<string> stringAtoms = ofSplitString(filePath, "/");
    if(stringAtoms.size() > 0) {
        return stringAtoms;
    } else {
        ofLogError("getFolderStructure: string %s has no '/' symbols", filePath);
    }
}