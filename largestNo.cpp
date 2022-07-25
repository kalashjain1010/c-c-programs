#include <iostream>
using namespace std;

int main()
{
 int a,b,c,d;
 cout << "first no." << endl;
 cin>> a;
 cout << "second no." << endl;
 cin>> b;
 cout << "third no." << endl;
 cin>> c;
 cout << "fourth no." << endl;
 cin>> d;
cout<<"--------------------"<<endl<<endl;
if (a>b&&a>c&&a>d)
{
    cout<<a<<" is greatest"<<endl;
}
else if (b>a&&b>c&&b>c)
{
    cout<<b<<" is greatest"<<endl;   
}
else if (d>a&&d>c&&d>b)
{
    cout<<d<<" is greatest"<<endl;   
}
else
{
    cout<<c<<" is greatest";
}


return 0;
}