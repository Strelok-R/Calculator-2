#include Calculator.h
#define CATCH_CONFIG_MAIN


TEST_CASE("Test Sum")
{
	cout << "-Check sum " << endl;
    if (c.Calculate(10, '+', 10) != 20) return false;
}
