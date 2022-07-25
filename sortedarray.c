#include <stdio.h>

int main(){
    int a[10]={6,12,0,18,11,99,55,45,34,2};
   int n=10;
    int i,j,min,temp;
    for (i = 0; i < (n - 1); i++) {
        min = i;
        for ( j = i+1; j < n; j++) {
            if (a[j] < a[min])
            {
                min = j;
            }
            
        }
       if (min != i) {
         temp = a[i];
         a[i] = a[min];
         a[min] = temp;
      }
    }
   printf("sorted array\n");
   for (int i= 0; i < n; i++)
   {
      printf("%d\t", a[i]);
   }
    return 0;
}