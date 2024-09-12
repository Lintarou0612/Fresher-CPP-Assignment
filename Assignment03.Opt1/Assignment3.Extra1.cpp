/*
1. Viết chương trình nhập vào 1 số nguyên dương < 1000, output: in cách đọc số đó.
	VD: a) input: 5 => output: "năm"
	b) input: 15 => output: "mười lăm"
	c) input: 105 => output: "một trăm lẻ năm"
	d) input: 135 => output: "một trăm ba mươi lăm"
*/

#include <iostream>
#include <string>

using namespace std;
string readNumber(int num) {
    string ones[] = {"", "một", "hai", "ba", "bốn", "năm", "sáu", "bảy", "tám", "chín"};
    string tens[] = {"", "mười", "hai mươi", "ba mươi", "bốn mươi", "năm mươi", "sáu mươi", "bảy mươi", "tám mươi", "chín mươi"};
    string hundreds[] = {"", "một trăm", "hai trăm", "ba trăm", "bốn trăm", "năm trăm", "sáu trăm", "bảy trăm", "tám trăm", "chín trăm"};
    string result;

    // Hang tram
    if (num >= 100) {
        result += hundreds[num / 100] + " ";
        num %= 100;
        if(num < 10) {
            result += "lẻ ";
        }
    }

    // Hang chuc
    if (num >= 10) {
        result += tens[num / 10] + " ";
        num %= 10;
        if(num == 5) {
            result += "lăm ";
            return result;
        }
    }

    // Hang don vi
    if (num > 0) {
        result += ones[num];
    }

    return result;
}

int main() {
    int num;
    cout << "Nhập vào số nguyên dương < 1000: ";
    cin >> num;

    string output = readNumber(num);
    cout << output << endl;

    return 0;
}
