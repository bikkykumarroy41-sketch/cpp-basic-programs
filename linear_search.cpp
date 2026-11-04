#include <iostream>
#include <vector>
using namespace std;


int linearSearch(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
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

    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    int index = linearSearch(arr.data(), n, target);

    if (index != -1) {
        cout << target << " found at position " << index + 1
             << " (index " << index << ").\n";
    } else {
        cout << target << " was not found in the array.\n";
    }

    return 0;
}
