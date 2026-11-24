#include <iostream>
#include <string>
using namespace std;


string reverseString(string s) {
    int left = 0, right = static_cast<int>(s.size()) - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    return s;
}
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Reversed string: " << reverseString(s) << '\n';
    return 0;
}
