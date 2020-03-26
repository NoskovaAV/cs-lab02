#include <iostream>

using namespace std;

int main()
{
int a, b, Max, Min;
cin >> a >> b;
Max = a + b;
    if (a-b>Max)
        Max = a-b;

    if (a*b>Max)
        Max = a*b;

    if (a/b>Max)
        Max=a/b;

Min = a + b;
    if (a-b<Min)
        Min = a-b;

    if (a*b<Min)
        Min = a*b;

    if (a/b<Min)
       Min=a/b;
cout << "A + B = " << a + b << '\n'
<< "A - B = " << a - b << '\n'
<< "A * B = " << a * b << '\n'
<< "A / B = " << a / b << '\n'
<< "Max = " << Max << '\n'
<<"Min = "<< Min <<'\n';
    return 0;
}
