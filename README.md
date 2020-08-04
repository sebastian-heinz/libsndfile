libsndfile
===
module for godot

## Setup:
### via submodule
- open a terminal inside the godot source folder and run the following commands:  
`cd modules`  
`git submodule add https://github.com/sebastian-heinz/libsndfile.git`  
`git submodule update --init --recursive`  

### via download 
- Download the zip (https://github.com/sebastian-heinz/libsndfile/archive/master.zip) and extract it into the godot/modules-folder.
  Since it is missing the libsndfile source, it has to be manually added. Get it from https://github.com/erikd/libsndfile/releases/tag/1.0.28 and paste it into the empty libsndfile folder. (./libsndfile/libsndfile/).  
  <img src="/doc/libsndfile_example.png" width="400">

## Dependencies
- libsndfile: `1.0.28`

## Links
libsndfile:  
https://github.com/erikd/libsndfile
http://www.mega-nerd.com/libsndfile/
  
Godot:  
https://github.com/godotengine/godot  