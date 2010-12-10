CXXTESTDIR=../cxxtest
CXXTESTGEN=$(CXXTESTDIR)/cxxtestgen.py
CC=g++

all: lib test game

lib: lib0x20.cpp
	g++ lib0x20.cpp

test: testRunner
	./testRunner

testRunner: testRunner.cpp game.cpp
	$(CC) -o testRunner -I $(CXXTESTDIR) game.cpp testRunner.cpp

testRunner.cpp: testSuite.h
	$(CXXTESTGEN) --error-printer -o testRunner.cpp testSuite.h

game: game.cpp
