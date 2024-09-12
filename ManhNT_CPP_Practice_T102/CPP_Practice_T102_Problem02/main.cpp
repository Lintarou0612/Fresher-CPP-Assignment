#include <iostream>
#include <string>

using namespace std;

string encrypt(char letter)
{
    //string tmp;
    int iniLetter = char(letter);
    int n = static_cast<int>(letter);
    int last = n % 10;
    int first {};
    while(n != 0)
    {
        first = n % 10;
        n /= 10;
    }
    //tmp = to_string(first) + to_string(last);
    int numStep3 = iniLetter + last;
    //char step3 = (char) numStep3;
    int numStep4 = iniLetter - first;
    //char step4 = (char) numStep4;
    string result;
    result = char(numStep3) + to_string(first) + to_string(last) + char(numStep4);
    return result;
}
string stringEncryption(string s)
{
    string result {};
    for(int i = 0;i < s.length(); i++)
    {
        result += encrypt(s[i]);
    }
    return result;
}
int main()
{
    string str;
    string s;
    int n; cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        getline(cin,s);
        str += s;
    }

    cout << stringEncryption(str) << endl;

    return 0;
}
