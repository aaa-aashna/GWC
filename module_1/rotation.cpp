#include <iostream>
using namespace std;

bool isRotation(string s1, string s2) {
    if(s1.length() != s2.length()) return false;

    string temp = s1 + s1;

    if(temp.find(s2) != string::npos)
        return true;

    return false;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if(isRotation(s1,s2))
        cout << "Rotation";
    else
        cout << "Not Rotation";
}