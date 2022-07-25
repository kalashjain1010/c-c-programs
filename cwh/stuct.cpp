#include <iostream>
 using namespace std;
 
 struct abc
 {
     int eId;
     char favChar;
     float salary;
 };
 
int main(){
    struct abc kalash;
    kalash.eId = 1;
    kalash.favChar = 'c';
    kalash.salary = 120000;
    cout <<"his salary is " <<kalash.salary << endl;
    cout << kalash.eId << endl;
    
    return 0;
}
