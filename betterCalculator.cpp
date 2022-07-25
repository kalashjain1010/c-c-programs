#include <iostream>
using namespace std;
int main()
{
    double a, b;
    char c;
    double result;

    cout << "type first no.:" << endl;
    cin >> a;

    cout << "type operator(+,-,*,/):" << endl;
    cin >> c;

    cout << "type second no.:" << endl;
    cin >> b;

    if (c == '+')
    {
        result = a + b;
    }
    else if (c == '-')
    {
        result = a - b;
    }
    else if (c == '*')
    {
        result = a * b;
    }
    else if (c == '/')
    {
        result = a / b;
    }
    else
    {
        cout << "wrong input\n";
    }

    cout << "your answer is " << result << endl;
    return 0;
}