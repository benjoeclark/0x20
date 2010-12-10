// testSuite.h
// This is the home for the unit tests created using cxxtest
#include <cxxtest/TestSuite.h>

class TestNewGame : public CxxTest::TestSuite
{
public:
    void setUp() { Game game("Test"); }
    void tearDown() { system( "rm -Rf ./Test") }
    void testCreatedGame(void)
    {
        TS_FAIL("Test that game folder has been created");
    }
};
