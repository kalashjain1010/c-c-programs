#include <iostream>
 using namespace std;
int main(){
bool male = false;
bool tall = true;

if(male && tall){
cout << "you are male and tall" << endl;
}
else if(male && !tall){
    cout << "you are male but not tall" << endl;
}
else if(!male && tall){
    cout << "you are not male but tall" << endl;
}
else{
    cout << "you are not male and not tall";
}
return 0;
}