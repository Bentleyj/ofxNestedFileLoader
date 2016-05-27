//
//  ofxNestedFileLoader.h
//  nestedFileLoader
//
//  Created by James Bentley on 1/27/16.
//
//

#ifndef ofxNestedFileLoader_h
#define ofxNestedFileLoader_h

#include "ofMain.h"

class ofxNestedFileLoader {
public:
    ofxNestedFileLoader();
    void findNestedFilePaths(string root);
    vector<string> load(string root);
    vector<string> getPaths() { return paths; };
    void clearPaths();
    void printPaths();
    
    string getFileExtension(string filePath);
    vector<string> getFolderStructure(string filePath);


private:
    vector<string> paths;
};

#endif /* ofxNestedFileLoader_hpp */
