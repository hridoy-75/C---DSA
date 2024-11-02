#include <bits/stdc++.h>
using namespace std;

// Function to check if a string is a palindrome
int isPalindrome(string & s){

    // Initialize two pointers: one at the beginning (left)
    // and one at the end (right)
    int left = 0;
    int right = s.length() - 1;

    // Continue looping while the two pointers
    //  have not crossed each other
    while (left < right)
    {

        // If the characters at the current positions are not equal,
        // return 0 (not a palindrome)
        if (s[left] != s[right])
            return 0;

        // Move the left pointer to the right
        // and the right pointer to the left
        left++;
        right--;
    }

    // If no mismatch is found,
    // return 1 (the string is a palindrome)
    return 1;
}

int main(){
    string s = "abba";
    cout << isPalindrome(s) << endl;

    return 0;
}
