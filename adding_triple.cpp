#include <iostream>
using namespace std;
int main()
{

    int a, b, c;

    cout << "first no.:" << endl;
    cin >> a;
    cout << "second no.:" << endl;
    cin >> b;

    if (a == b)
    {
        cout << "first and second no. are same so it will be trippled that is " << a + a + a << endl;
    }
    else
    {
        cout << "sum of both is " << a + b << endl;
    }

    return 0;
}