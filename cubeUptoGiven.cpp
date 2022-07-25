#include <iostream>
 using namespace std;
int main(){
int a,b;
cout << "write a no.:";
cin >> a;

for (b = 1; b <= a; b++)
{
    cout << "cube till that no. is " <<  b * b * b << endl; 
}
return 0;
}