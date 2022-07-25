#include <iostream>
using namespace std;

int main(){

    for (int k,i = 1; i <= 4; i++)
    {
        k=1;
        for (int j = 1; j <= 7 ; j++)
        {
            if (j>=i && j<= 8-i && k)
            {
                cout<<"1";
                k=0;
            }
            else if (j>= i && j<= 8-i)
            {
                cout<<"0";
                k=1;
            }
            else
            {
                cout<<" ";
                k = 1;
            }
        }
        cout<<endl;
    }
return 0;
}
