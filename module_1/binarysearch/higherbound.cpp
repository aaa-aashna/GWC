#include <iostream>
#include <vector>
using namespace std;

int higherbound( vector<int>& num , int low , int high , int targer)
{
    int ans=-1 ; 
    while ( low<= high)
    {
        int mid= low+( high-low)/2;
        if ( num[mid] == targer ) {
            ans = mid ; 
            low = mid +1 ; 
        }
        else if ( num[mid] < targer ) {
            low = mid +1 ; 
        }
        else {
            high = mid -1 ; 
        }
    }
    return ans ; 
}