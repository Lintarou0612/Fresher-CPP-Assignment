#include <iostream>
#include "mystring.h"

using namespace std;

int main()
{
    String str1;
    String str2;
    cout << "Enter string 1: ";
    cin >> str1;
    cout << "Entered string 1: " << str1 << '\n';

    cout << "Enter string 2: ";
    cin >> str2;
    cout << "Entered string 2: " << str2 << '\n';

    String str3 = String();
    str3 = str1 + ' ' + str2;
    cout << "String 3: " << str3 << endl;
    cout << "Length of string 3: " << str3.getLength() << endl;

    str3.Reverse();
    cout << "String 3 after reversing: " << str3 << endl;
    if(str1 == str3)
        cout << "String 3 is equal to string 1." << endl;
    else
        cout << "String 3 is different to string 1." << endl;
    str1.Delete();
    cout << "String 1 after deleting: " << str1 << endl;
    return 0;
}
