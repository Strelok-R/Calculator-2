#include Calculator.h
#define CATCH_CONFIG_MAIN
using namespace std;

TEST_CASE("Test Sum")
{
	cout << "-Check sum " << endl;
    if (c.Calculate(10, '+', 10) != 20) return false;
}

TEST_CASE("Test substraction")
{
if (c.Calculate(10, '-', 10) != 0) return false;
    cout << "-Check multiplying " << endl;	
}
TEST_CASE("Test substraction")
{
if (c.Calculate(10, '*', 10) != 100) return false;
    cout << "-Check division " << endl;
}
TEST_CASE("Test substraction")
{
 if (c.Calculate(10, '/', 10) != 1) return false;
    return true	
}
