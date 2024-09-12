/*Author:ManhNT50
 *File: Assignment 2 - Ex3
 */

#include <iostream>
#include <string>

using namespace std;
//check valid digit in string
bool isValid(const string& str) {
  for(char c : str) {
    if(c < '0' || c > '9')
      return false;
  }
  return true;
}
// delete first nth zeros in string
string deleteFirstNthZeros(const string& str) {
  string result;
  int count = 0;
  //count the number of first nth '0'
  for(char c : str) {
    if(c == '0') count++;
    else break;
  }

  int removed = 0;
  for(char c : str) {
    if(c == '0' && removed < count) removed++;
    else
      result += c;
  }
  return result;
}

string findGreaterStr(const string& str1, const string& str2) {
  string str1Aft, str2Aft;
  string exactEqual = "Hai chuoi bang nhau";
  str1Aft = deleteFirstNthZeros(str1);
  str2Aft = deleteFirstNthZeros(str2);

  if(str1Aft.length() > str2Aft.length()) {
    return str1;
  } 
  else if(str1Aft.length() < str2Aft.length()) {
    return str2;
  }
  else {
    for(int i = 0; i < str1Aft.length(); i++) {
      if(str1Aft[i] > str2Aft[i])
        return str1;
      else if(str1Aft[i] < str2Aft[i])
        return str2;
    }
  }
  return exactEqual;
}
void print(const string& str) {
  for(int i = 0; i < str.length(); i++)
      cout << str[i];
}

int main() {
  string s1, s2;
  
  while(true) {
    cout << "s1 = ";
    cin >> s1;
    cout << "s2 = ";
    cin >> s2;

    if(!isValid(s1) && !isValid(s2)) {
      cout << "Hai chuoi khong hop le";
      break;
    }
    if(!isValid(s1)) {
      cout << "Chuoi s1 khong hop le";
      break;
    } 
    if(!isValid(s2)) {
      cout << "Chuoi s2 khong hop le";
      break;
    }

    string result = findGreaterStr(s1, s2);
    if(result == s1) {
      cout << "Chuoi can tim la: s1 = ";
      print(result);
    } 
    else if(result == s2) {
      cout << "Chuoi can tim la: s2 = ";
      print(result);
    }
    else cout << result;
    cout << endl;
  }
}