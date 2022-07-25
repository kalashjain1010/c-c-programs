#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "type 1st no\n";
    cin >> a;
    cout << "type 2nd no\n";
    cin >> b;
    cout << "type 3rd no\n";
    cin >> c;
    cout << "type 4th no\n";
    cin >> d;
    if (a > b && a > c && a > d)
    {
        cout << a << " is greater that is 1st number " << endl;
    }
    else if (b > a && b > c && b > d)
    {
        cout << b << " is greater that is 2nd number " << endl;
    }
    else if (c > a && c > b && c > d)
    {
        cout << c << " is greater that is 3rd number" << endl;
    }

    else if (d > a && d > b && d > c)
    {
        cout << d << " is greater that is 4th number" << endl;
    }
    else
    {
        cout << "two or more no. are same which is greatest";
    }

    return 0;
}