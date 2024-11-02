#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string s = "ababca";
    char c = 'a';
  
    // Remove all occurrences of 'c' from 's'
    s.erase(remove(s.begin(), s.end(), c), s.end());

    cout << s;
    return 0;
}
