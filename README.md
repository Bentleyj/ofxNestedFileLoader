# ofxNestedFileLoader
openFrameworks addon for getting the names of all your files in the data folder

I found I needed to frequently load multiple files from my data folder into my app. This addon makes that much easier. It loads the names of the file paths within a given folder and returns them as an std::vector of strings. You can then iterate over that vector to load stuff! Also has some useful class methods for finding file extensions and returning file names.

Currently Tested with oF 0.9.4 on OSX 10.11 but should work on most versions of oF because it's pretty generic.

## Usage
create a  instance and call
```C
ofxNestedFileLoader loader;

string root = "";
loader.findNestedFilePaths(root);
vector<string> files = loader.getPaths();

//Call clear before loading again to clear the list of names that it saves internally
loader.clearPaths();
```

ta-dah! You've now got a list of strings that describe every file in your data folder

You can start from any root folder path.

Then you can use the list to load stuff or split strings to save their names etc.

Happy Loading!


