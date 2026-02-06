#include <iostream>
using namespace std;

void traversing2darray(int arr[3][3], int rows, int cols) {
for(int i=0;i<rows;i++)
{
    for(int j=0;j<cols;j++)
    {
        printf("%d ", arr[i][j]);
    }
}

// Time Complexity: O(rows*cols)
// Space Complexity: O(1)