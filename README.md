libsndfile
===
module for godot


# This is very experimental, only tested compiling on windows

## Setup:
### via submodule
- open a terminal inside the godot source folder and run the following commands:  
`cd modules`  
`git submodule add https://github.com/sebastian-heinz/libsndfile.git`  
`git submodule update --init --recursive`  

### via download 
- Download the zip (https://github.com/sebastian-heinz/libsndfile/archive/master.zip) and extract it into the godot/modules-folder.
  Since it is missing the libsndfile source, it has to be manually added. Get it from https://github.com/erikd/libsndfile/releases/tag/1.0.29 and paste it into the empty libsndfile folder. (./libsndfile/libsndfile/).

## Dependencies
- Godot: `3.2`
- libsndfile: `1.0.29`

## Links
libsndfile:  
https://github.com/erikd/libsndfile  
http://www.mega-nerd.com/libsndfile/  
  
Godot:  
https://github.com/godotengine/godot  
