# This is the makefile for the libxml++ parser

# Project Name
PROJECT_NAME = example

# Set compiler
CXX = clang++

# libCIMParser
CIMParser = ../../build

# Include directories
INCDIR = \
	-I$(CIMParser)/include/CIMParser

# CXXFLAGS
CXXFLAGS = -Wall -g -DDEBUG -std=c++11 -Wno-inconsistent-missing-override \
	$(shell pkg-config --cflags libxml++-2.6)

# LDFLAGS
LDFLAGS = \
	-L$(CIMParser)/lib -lCIMParser \
	$(shell pkg-config --libs libxml++-2.6)

# Directories
PROJDIR = .

BIN = $(PROJECT_NAME)

# Build all
all: $(BIN) resource

# Clean target
.PHONY: clean
clean:
	@rm -f $(BIN)
	@rm *.csv

# Combile
$(BIN): ../src/main.cpp
	@$(CXX) $(INCDIR) $(CXXFLAGS) $(LDFLAGS) -o $(BIN) $<
	@echo "Compiled $@"

# Resource
resource:
	@cp -f ../../src/*.csv .
