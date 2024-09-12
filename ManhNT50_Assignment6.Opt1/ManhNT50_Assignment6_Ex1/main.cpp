#include <iostream>
#include <newcgoods.h>

using namespace std;

int main()
{
    newCGoods goods1;
    goods1.input();
    cout << "=====================================" << '\n';
    goods1.output();
    //goods1.transportationCosts();
    goods1.payment();
    return 0;
}
