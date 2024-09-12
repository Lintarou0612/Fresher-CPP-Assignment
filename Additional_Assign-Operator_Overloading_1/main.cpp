#include <iostream>
#include <storage.h>

using namespace std;

int main()

{

    Storage st(10); //tạo 10 phần tử với default value = 0

    for(int i = 0; i < 10; i++)

    {

        st[i] = (10 - i) * 2;

    }

    //st: [20 18 16 14 12 10 8 6 4 2]

    st.push_back(0); //st: [20 18 16 14 12 10 8 6 4 2 0]

    st.push_front(11); //st: [11 20 18 16 14 12 10 8 6 4 2 0]

    st.sort();

    cout << st << endl;

    return 0;

}
