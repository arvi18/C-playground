// recursively finding sum of array elements
#include <iostream>
using namespace std;

int arr[30];

// returns sum of array element till n index
// sum(n, arr) = a[n] + sum(a-1, arr)
int sum(int n) {
    if (n == 0)
        return 0;

    return arr[n-1] + sum(n -1);

}



int main()
{
    // array size input
    int n;
    cin >> n;

    // array input
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }


    for (int i = 0; i < n; ++i)
    {

        cout << arr[i] << " ";
    }
    cout<<"\n";

    cout<< sum(n);

    return 0;
}

