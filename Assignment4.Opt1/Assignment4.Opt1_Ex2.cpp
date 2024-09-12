#include <iostream>

using namespace std;

string compareStr(string s1, string s2) {
    int len1 = s1.length();
    int len2 = s2.length();
    if(len1 > len2) 
        return s1;
    else if(len1 < len2) 
        return s2;
    return "equal length";
}
int main() { 
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;

    cout << compareStr(str1, str2);
}