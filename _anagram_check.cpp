#include <iostream>
#include <string>
#include <map>
#include <cctype>
using namespace std;


bool areAnagrams(const string& a, const string& b) {
    map<char, int> counts;
    for (char ch : a) {
        unsigned char c = static_cast<unsigned char>(ch);
        if (isalpha(c)) counts[static_cast<char>(tolower(c))]++;
    }
    for (char ch : b) {
        unsigned char c = static_cast<unsigned char>(ch);
        if (isalpha(c)) counts[static_cast<char>(tolower(c))]--;
    }
    for (const auto& item : counts)
        if (item.second != 0) return false;
    return true;
}
int main() {
    string first, second;
    cout << "Enter the first string: ";
    getline(cin, first);
    cout << "Enter the second string: ";
    getline(cin, second);
    cout << (areAnagrams(first, second) ? "The strings are anagrams.\n"
                                       : "The strings are not anagrams.\n");
    return 0;
}
