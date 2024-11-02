#include <iostream>
using namespace std;

string removeCharAtPosition(string s, int pos) {
    if (pos < 0 || pos >= s.length()) {
        return s;
    }
    s.erase(pos, 1);
    return s;
}

int main() {
    string s = "abcde";
    int pos = 1;
    cout << "Output: " << removeCharAtPosition(s, pos) << endl; 
    return 0;
}
