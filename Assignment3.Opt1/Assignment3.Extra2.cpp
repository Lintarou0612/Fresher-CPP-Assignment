/*
2. Viết chương trình nhập vào 1 số nguyên dương < 1024, output: in cách hiển thị của số đó dưới dạng mã nhị phân 10 bit.
	VD: a) input: 1 => output: "0b0000000001"
	b) input: 1023 => output: "0b1111111111" 
*/

#include <iostream>
#include <string>

using namespace std;

string MyStrReverse(string str) {
    int len = str.length();
    for(int i = 0; i < len / 2; i++) {
        int tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
    }
    return str;
}

string convertBin(int num) {
    string result;
    int digit;
    while(num != 0) {
        digit = num % 2;
        result += to_string(digit);
        num /= 2;
    }
    result = MyStrReverse(result);
    return result;
}
int main() {
    int n;
    cin >> n;
    string bin;
    string binary = "0b0000000000";

    bin = convertBin(n);
    int lenBin = bin.length();
    int len = binary.length();
    int j = len - lenBin;
    for(int i = j; i < len; i++) {
        binary[i] = bin[i-j];
    }
    cout << binary << endl;
}