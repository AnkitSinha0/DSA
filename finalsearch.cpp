#include <iostream>
using namespace std;

int main() {
    int n, searchElement, found = 0;
    
    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];  // Declare the array of size n

    // Input the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the element to search
    cout << "Enter the element to search for: ";
    cin >> searchElement;

    // Search for the element
    for (int i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            cout << "Element found at index " << i << endl;
            found = 1;  // Mark that the element was found
            break;  // Exit the loop after finding the element
        }
    }

    // If the element is not found
    if (!found) {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
