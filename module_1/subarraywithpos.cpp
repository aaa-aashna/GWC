#include <iostream>
using namespace std;

void subarrayWithPos(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            cout << "Subarray from index " << i << " to " << j << ": ";
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}