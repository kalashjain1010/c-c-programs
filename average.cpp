#include <iostream>
using namespace std;

int main (){
   int arr[7] = { 2, 5, 7, 8, 2, 6, 9 };
   int n = 7;
   double sum = 0;
   for(int i = 0; i<n ; i++){
      sum+=arr[i];
   }
   sum =sum/7;
   cout<<"The array sum is "<<sum;
   return 0;
}