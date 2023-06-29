# SMART CALCULATOR
This calculator is an app that runs on MACOS or LINUX. It allows you to calculate any mathematical and trigonometrical build the custom ones and draws the graphs for them.

# Usage

### Go to the build directory and make the app via ```make```.
This will automatically build the project and install the app into build directory.


### Open the app and go have fun with it.


### If you want to delete the app use `make uninstall`. 
this only will work if you didn't move the app.

### If you want to clean all the build files use `make clean`. 

### If you want to test C functions use `make test`. Use `make help` for more information about makefile targets.
You will need check v0.15.2 for test and 

# Dependensies
## project dependencies:
* qt-6
* gcc 10.3.0 
* g++ 10.3.0
* make GNU 3.81
* cmake 3.23.0

## test dependencies:
* lcov 2.0-1 
* lib check 0.15.2