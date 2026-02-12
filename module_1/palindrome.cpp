#include <iostream>
using namespace std;

int expand(string s, int left, int right) {
    int cnt = 0;
    while(left >= 0 && right < s.length() && s[left] == s[right]) {
        cnt++;
        left--;
        right++;
    }
    return cnt;
}

int main() {
    string s;
    cin >> s;

    int result = 0;

    for(int i = 0; i < s.length(); i++) {
        result += expand(s, i, i);     // odd length
        result += expand(s, i, i+1);   // even length
    }

    cout << result;
}