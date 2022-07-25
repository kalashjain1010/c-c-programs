#include <iostream>
 using namespace std;

int power (int a,int b){
    int result =1;
    for (int i = 0; i < b; i++)
    {
        result = result * a;
    }
    return result;
}
int main(){
    
    cout << power(2,3) << endl;
    return 0;
}