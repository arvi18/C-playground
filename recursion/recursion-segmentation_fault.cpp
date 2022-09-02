
#include <iostream>
using namespace std;
// const int N = 35;

void ArrayPrint(int N, int *arr)
{

    for (int i = 0; i < N; i++)

    {
        cout << arr[i]<<" ";
    }
}
int *ArrayInput(const int N)
{
    int arrToBeReturned[N];
    int n;
    cin>>n;
    for (int x, i = 0; i < N; i++)

    {
        cin >> x;
        arrToBeReturned[i] = x;
    }
    return arrToBeReturned;
}

int main()
{
    // int arr[] = {1, 2, 3, 5, 6, 4,5};
    int * arr ;
    cout<<(arr)<<"\n";
    arr=  ArrayInput(4);
    ArrayPrint(1, arr);
    return 0;
}

