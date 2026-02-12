#include <iostream>
#include <algorithm>
using namespace std;

/*
void anagrams ( int center , int length , string s ) {
    if ( center == length ) {
        cout << s << endl ;
        return ;
    }
    for ( int i = center ; i < length ; i++ ) {
        swap ( s[center] , s[i] ) ;
        anagrams ( center + 1 , length , s ) ;
        swap ( s[center] , s[i] ) ;
    }
} 


int main () {
    string s ;
    cin >> s ;
    anagrams ( 0 , s.length() , s ) ;
    return 0 ;
}
*/

#include <iostream>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.length() != t.length()) return false;

    unordered_map<char,int> mp;

    
    for(char c : s)
        mp[c]++;

    for(char c : t)
        mp[c]--;

    for(auto it : mp) {
        if(it.second != 0)
            return false;
    }

    return true;
}

int main() {
    string s, t;
    cin >> s >> t;

    if(isAnagram(s,t))
        cout << "Anagram";
    else
        cout << "Not Anagram";
}