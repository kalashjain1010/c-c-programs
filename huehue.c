#include <stdio.h>

int main()
{
    int sum=0;

    int a[5]= {1,2,3,4,5};
    for (int i=0; i<6; i++  ){
        sum+=a[i];
        int size = sizeof(a);
        
    }
    sum=sum/5;
    printf("%d",sum);
       
}