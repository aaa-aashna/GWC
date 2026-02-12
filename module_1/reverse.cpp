#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
    
    vector<string> words;
    stringstream ss(s);
    string word;
    
    while( ss >> word )
        words.push_back(word);      
    reverse(words.begin(), words.end());    
    string result;
    for(string w : words)
        result += w + " ";
    result.pop_back(); // remove the last space
    return result;
}
