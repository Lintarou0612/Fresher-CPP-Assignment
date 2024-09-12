/*Check cấp phát động
1. Tạo 1 con trỏ kiểu int, int *p. Cấp phát động cho con trỏ p và gán giá trị cho vùng nhớ đó, *p=10;
2. Khai báo 1 con trỏ int *q. q = p;
3. delete p →
- In giá trị của vùng nhớ đang trỏ bởi q xem bằng bao nhiêu?
- Thử compare p với NULL xem bằng NULL hay khác NULL?
Coding tips: Sau khi delete con trỏ thì phải luôn gán con trỏ bằng NULL, nếu không con trỏ vẫn khác NULL
(tức vẫn báo là vẫn đang trỏ vào một vùng nhớ nào đó).*/

#include <iostream>

using namespace std;

int main() {
    int *p = new int;
    *p = 10;
    
    int *q;
    q = p;

    delete p;
    p = NULL;
    if(p == NULL) cout << "null pointer" << '\n';
    else cout << "not null pointer" << '\n';
    cout << &q << '\n';
    cout << *q << '\n';
    cout << p << '\n';
}