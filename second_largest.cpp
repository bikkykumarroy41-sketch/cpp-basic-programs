#include <iostream>
#include <vector>
#include <climits>
using namespace std;


bool findSecondLargest(const int arr[], int size, int &secondLargest) {
    int largest = INT_MIN;
    secondLargest = INT_MIN;
    bool hasLargest = false;
    bool hasSecondLargest = false;

    for (int i = 0; i < size; i++) {
        int value = arr[i];

        if (!hasLargest || value > largest) {
            if (hasLargest) {
                secondLargest = largest;
                hasSecondLargest = true;
            }
            largest = value;
            hasLargest = true;
        } else if (value < largest &&
                   (!hasSecondLargest || value > secondLargest)) {
            secondLargest = value;
            hasSecondLargest = true;
        }
    }

    return hasSecondLargest;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be positive.\n";
        return 1;
    }

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int secondLargest;
    if (findSecondLargest(arr.data(), n, secondLargest)) {
        cout << "Second-largest distinct element = "
             << secondLargest << '\n';
    } else {
        cout << "A second-largest distinct element does not exist.\n";
    }

    return 0;
}
