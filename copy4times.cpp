#include <iostream>
using namespace std;
int main()
{
    string a;
    cout << "type a word:" << endl;
    cin >> a;

    if (a.length() <= 2) //it will not work if it has just 2 letters or less
    {
        cout << a << endl;
    }
    else
    {
        cout << a +" "+ a +" "+ a+" " + a << endl;
    }

    return 0;
}