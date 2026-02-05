#include <iostream>
#include <unordered_map>

using namespace std;

void subarraywithnegatives( int arr[] , int n , int target ){
    unordered_map<int , int> mp; 
    int prefixsum = 0 ; 
    for( int i = 0 ; i < n ; i++ ){
        prefixsum += arr[i]; 

        if( prefixsum == target ){
            cout << "Subarray found from index 0 to " << i << endl; 
        }

        if( mp.find( prefixsum - target ) != mp.end() ){
            cout << "Subarray found from index " << mp[ prefixsum - target ] + 1 << " to " << i << endl; 
        }

        mp[ prefixsum ] = i; 
    }
}