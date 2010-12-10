// testSuite.h
// This is the home for the unit tests created using cxxtest
#include <cxxtest/TestSuite.h>
#include <stdlib.h>
#include <stdio.h>
#include "game.h"

using namespace std;

class TestNewGame : public CxxTest::TestSuite
{
public:
    void setUp() { Game game("Test"); }
    void tearDown() { remove("Test"); }
    void testCreatedGame(void)
    {
        TS_FAIL("Test that game folder has been created");
    }
};
