#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
int a, b, Max;
cin >> a >> b;
Max = a + b;
    if (a-b>Max)
        Max = a-b;

    if (a*b>Max)
        Max = a*b;

    if (a/b>Max)
        Max=a/b;

cout << "A + B = " << a + b << '\n'
<< "A - B = " << a - b << '\n'
<< "A * B = " << a * b << '\n'
<< "A / B = " << a / b << '\n'
<< "Max = " << Max << '\n'
    return 0;
}
