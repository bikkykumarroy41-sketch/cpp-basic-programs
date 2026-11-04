#include <iostream>
#include <vector>
using namespace std;


int calculateSum(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
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

    int sum = calculateSum(arr.data(), n);
    double average = static_cast<double>(sum) / n;

    cout << "Sum = " << sum << '\n';
    cout << "Average = " << average << '\n';

    return 0;
}
