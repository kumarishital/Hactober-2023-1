// linear search
#include <bits/stdc++.h>
using namespace std;

 int search(int arr[], int N, int x)
 {
    for (int i = 0; i < N; i++)
        if (arr[i]==x)
            return i;
    return -1;

 }

 int main(void)
 {
    int arr[] = {1, 2, 3, 4, 10, 40};
    int x =10;
    int N = sizeof(arr)/ sizeof(arr[0]);


    // function call
    int result = search(arr, N, x);
    (result == -1)
    ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
 }
