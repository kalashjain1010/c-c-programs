#include <iostream>
 using namespace std;

 double cube(double num){
     return num * num * num;
 }
int main(){
double a;
cout << "choose a no.:" << endl;
cin >> a;
cout << cube(a) << endl;
return 0;
}