#include <iostream>
#include <vector>
using namespace std;

int binarysearch(int a , int low , int high ) {
    while(low<=high)
    {
        int mid =(low+high)/2 ; 
        if (a == mid){
            return mid ; 
        }
        else if (a <mid)
        {
            high = mid -1 ; 
        }
        else{
            low = mid +1 ; 
        }
    }
    return -1 ; 
}