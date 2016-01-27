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