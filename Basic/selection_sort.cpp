#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {7,8,3,1,2};
   int n = sizeof(arr) / sizeof(arr[0]);
    //selectionSort
    for (int i = 0; i < n-1; i++)
    {
        int smallest = i;
        for(int j=i+1; j<n; j++){
            if(arr[smallest]>arr[j]){
                smallest = j;
            }
        }
        int temp = arr[smallest];
        arr[smallest] = arr[i];
        arr[i] = temp;
    }
    
    cout << "Sorted array: \n";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}