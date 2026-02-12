#include <iostream>
#include <vector>
using namespace std;

int lower(vector<int>& a , int target , int low , int high )
{
    int ans=-1 ; 
    while (low<= high)
    {
        int mid = low + ( high - low)/2 ; 
        if ( a[mid] == target ) {
            ans = mid ; 
            high = mid -1 ; 
        }
        else if ( a[mid] < target ) {
            low = mid +1 ; 
        }
        else {
            high = mid -1 ; 
        }
    return ans ;
}