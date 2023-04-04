/*
 * gcd.cpp
 */

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int a = 24, b = 36;
    int result = gcd(a, b);
    cout << "The GCD of " << a << " and " << b << " is " << result << endl;
    return 0;
}