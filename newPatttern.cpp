#include <iostream>
 using namespace std;

int main(){
    int rows;
    cout << "no. of rows:" ;
    cin>>rows;

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
       cout<< endl;
    }
    
    return 0;
}
