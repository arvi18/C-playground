#include <iostream>
using namespace std;

int func(){
    func();
    return 0;
}

int main()
{
    func();
    return 0;
}

