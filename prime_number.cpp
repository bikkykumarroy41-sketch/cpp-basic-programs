#include <iostream>
using namespace std;

int main() {
    int num;
    bool prime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 2) {
        prime = false;
    } else {
        for (int i = 2; i <= num / i; i++) {
            if (num % i == 0) {
                prime = false;
                break;
            }
        }
    }

    if (prime) {
        cout << "Prime number";
    } else {
        cout << "Not a prime number";
    }

    return 0;
}
