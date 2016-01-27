# ofxNestedFileLoader
openFrameworks addon for getting the names of all your files in the data folder

I found I needed frequently to load multiple files from my data folder into my app. This addon makes that much easier!

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

Then youcan use stuff this to load stuff or split strings to save their names etc.

Best of luck!


