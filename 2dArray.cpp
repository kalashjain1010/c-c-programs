#include <iostream>
 using namespace std;

int main(){
    int tut[3][2] = {
                    {2,3},
                    {5,4},
                    {7,8}
                    } ;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << tut[i][j] ;
        }
        cout << endl;
    }
     
    return 0;
}