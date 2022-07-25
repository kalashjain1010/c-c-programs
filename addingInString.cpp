#include <iostream>
using namespace std;
int main()
{
    string str, a;

    cout << "type a word:" << endl;
    cin >> str;

    cout << "type a single alphabeat you wanna add before and after:" << endl;
    cin >> a;

    cout << a << str << a << endl;
    return 0;
}