#include <iostream>
#include <string>
#include <cctype>
using namespace std;


bool isPalindrome(const string& s) {
    int left = 0, right = static_cast<int>(s.size()) - 1;
    while (left < right) {
        while (left < right && isspace(static_cast<unsigned char>(s[left]))) left++;
        while (left < right && isspace(static_cast<unsigned char>(s[right]))) right--;
        if (tolower(static_cast<unsigned char>(s[left])) !=
            tolower(static_cast<unsigned char>(s[right]))) return false;
        left++;
        right--;
    }
    return true;
}
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << (isPalindrome(s) ? "The string is a palindrome.\n"
                             : "The string is not a palindrome.\n");
    return 0;
}
