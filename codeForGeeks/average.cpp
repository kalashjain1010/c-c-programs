#include <iostream>
using namespace std;

int main()
{
 float sum=0;
 for (int i = 1; i < 11; i++)
 {
     float x;
   cout << "enter "<<i<< " number" << endl;
   cin>>x;
   sum =sum+x;
 }
 cout<<"average is "<< sum/10.0 <<endl;

return 0;
}