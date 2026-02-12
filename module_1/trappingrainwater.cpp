#include <iostream>
#include <vector>
using namespace std;

//logic used ( two pointer approach ) :
// we will maintain two pointers one at the start and one at the end of the array and
//water[i] = min(maxLeft, maxRight) - height[i]


int trap( vector<int>& h)
{
    int l = 0 , r = h.size()-1 ;
    int leftMax = 0 , rightMax = 0 ;
    int ans = 0 ;   
    while ( l <= r ) {
        if ( h[l] < h[r] ) {
            if ( h[l] > leftMax ) {
                leftMax = h[l] ; 
            }
            else {
                ans += leftMax - h[l] ; 
            }
            l++ ; 
        }
        else {
            if ( h[r] > rightMax ) {
                rightMax = h[r] ; 
            }
            else {
                ans += rightMax - h[r] ; 
            }
            r-- ; 
        }
    }
}