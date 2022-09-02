#include <iostream>
using namespace std;

// when printing below recursive call, order follows ulta
int funcUlta(int a)
{
    if (a == 0)
        return 1;
    funcUlta(a - 1);
    cout << a;
}
// when printing above recursive call, order follows saral
int funcSaral(int a)
{
    if (a == 0)
        return 1;
    cout << a;
    funcSaral(a - 1);
}

int main()
{
    funcSaral(5);
    cout << " \n";
    funcUlta(5);
    return 0;
}