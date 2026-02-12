#include <iostream>
#include <vector>
using namespace std;

int kadane(vector<int>& a)
{
    int current = 0 ; 
    int best = INT_MIN; 
    for ( int i = 0 ; i < a.size() ; i++ ) {
        current += a[i] ; 
        if ( current > best ) {
            best = current ; 
        }
        if ( current < 0 ) {
            current = 0 ; 
        }
    }
    return best;
}