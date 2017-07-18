### Makefile for building tensorflow application
# link pre-build libtensorflow_cc.so to your personal build project
# param:
# INCLUDES: -I, remember to include eigen3 and tf libs
# LDLIBS : -L path of folder where libtensorflow_cc.so exist
# ACTUAL_LIBS: -l   name of actual lib(name).so


SOURCE_DIR =./src
BIN_DIR = ./bin

CPP     = g++ -std=c++11
LDFLAGS = -g -Wall -D_DEBUG -Wshadow -Wno-sign-compare -w 
LDLIBS  = -L/usr/local/lib
INCLUDES = -I/usr/local/include/tf -I/usr/local/include/eigen3
ACTUAL_LIBS = `pkg-config --cflags --libs protobuf` -ltensorflow_cc

INPUT_FILE = $(SOURCE_DIR)/main.cpp $(SOURCE_DIR)/ann_model_loader.cpp
OBJET_FILE = $(BIN_DIR)/tfcpp_demo

tfcpp_demo:
	$(CPP) -o $(OBJET_FILE) $(INCLUDES) $(LDFLAGS) $(LDLIBS) $(ACTUAL_LIBS) $(INPUT_FILE)
