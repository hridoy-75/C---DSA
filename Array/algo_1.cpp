
#include <bits/stdc++.h>
using namespace std;
int main()
{

   int a[50],size; 
   cout << "Enter the size of array: " << endl;
   cin >> size;

   cout << "Enter the element of array: " << endl;

   for(int i=0; i<size; i++){
    cin >> a[i];
   }
   cout << "Element of array: " << endl;
    for(int i=0; i<size; i++){
    cout << a[i]<<" ";
   }
    return 0;
}