// C++ program to reverse a string using two pointers

#include <bits/stdc++.h>
using namespace std;

string reverseString(string &s) {
    int left = 0, right = s.length() - 1;

    // Swap characters from both ends till we reach
    // the middle of the string
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
  
    return s;
}

int main() {
    string s = "abdcfe";
    cout << reverseString(s);
    return 0;
}
