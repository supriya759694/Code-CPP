
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, result;

    cout << "Enter base and exponent respectively:  ";
    cin >> a >> b;

    result = pow(a, b);

    cout << a << "^" << b << " = " << result;

    return 0;
}
