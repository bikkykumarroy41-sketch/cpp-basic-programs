#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    cout << "Enter a string: ";
    getline(cin, s);

    for (char ch : s) {
        unsigned char c = static_cast<unsigned char>(ch);
        if (isalpha(c)) {
            char lower = static_cast<char>(tolower(c));
            if (lower == 'a' || lower == 'e' || lower == 'i' ||
                lower == 'o' || lower == 'u') vowels++;
            else consonants++;
        } else if (isdigit(c)) digits++;
        else if (ch == ' ') spaces++;
    }

    cout << "Vowels = " << vowels << '\n'
         << "Consonants = " << consonants << '\n'
         << "Digits = " << digits << '\n'
         << "Spaces = " << spaces << '\n';
    return 0;
}
