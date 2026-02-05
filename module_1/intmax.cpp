#include <iostream>
#include <limits>
using namespace std;

int findMax(int arr[],int n){
    int maximum = INT_MIN;

    for(int i = 0; i < n; i++){
        if(arr[i] > maximum)
            maximum = arr[i];
    }

    return maximum;
}