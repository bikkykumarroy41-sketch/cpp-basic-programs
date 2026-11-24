#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string s;
    map<char, int> frequency;
    cout << "Enter a string: ";
    getline(cin, s);

    for (char ch : s) frequency[ch]++;

    cout << "Character frequencies:\n";
    for (const auto& item : frequency) {
        if (item.first == ' ') cout << "[space] : " << item.second << '\n';
        else if (item.first == '\t') cout << "[tab] : " << item.second << '\n';
        else cout << item.first << " : " << item.second << '\n';
    }
    return 0;
}
