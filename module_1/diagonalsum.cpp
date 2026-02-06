#include <iostream>
using namespace std;

//if(i == j)               principal diagonal
//if(i + j == n - 1)      secondary diagonal

void diagonalSum(int mat[3][3], int n)
{
    int principal = 0, secondary = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            
            if(i == j)
                principal += mat[i][j];

            
            if(i + j == n - 1)
                secondary += mat[i][j];
        }
    }

    cout << "Principal Diagonal Sum = " << principal << endl;
    cout << "Secondary Diagonal Sum = " << secondary << endl;
}

int main()
{
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    diagonalSum(matrix, 3);

    return 0;
}