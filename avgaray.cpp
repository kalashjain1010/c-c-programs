#include <iostream>
using namespace std;

int main() {

    int arr[]= [1,3,4,5];
    int i, j, s, temp;

   
    s=arr[5];

    j = s - 1;
    for (i = 0; i < j; i++) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }

    cout << "After reverse array elements: ";
    for (i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }

return 0;
}