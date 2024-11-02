#include <bits/stdc++.h>
using namespace std;

int main()
{
   int arr[] = {7,8,3,1,2};
   int n = sizeof(arr) / sizeof(arr[0]);

   //insertionsort
   for(int i=0; i<n; i++){
    int current = arr[i];
    int j= i-1;
    while(j>=0 && current< arr[j]) {
        arr[j+1]= arr[j];
        j--;
        }
        arr[j+1] = current;
     }

    cout << "Sorted array: \n";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}