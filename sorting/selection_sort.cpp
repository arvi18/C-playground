#include <iostream>
#include <vector>
using namespace std;


// int arr[10];

void selectionSort(int n, int arr[])
{
    for (int i = 0; i < n; ++i)
    {

        int minIndexFromOneIteration = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[minIndexFromOneIteration]) {
                minIndexFromOneIteration = j;
            }
            swap(arr[minIndexFromOneIteration], arr[i]);
            for (int x = 0; x < n; ++x)
            {
                cout  << " " << arr[x];
            }
            cout << endl;
        }
    }
}


int main()
{
    int k;
    cin >> k;

    int arr[k];

    for (int i = 0; i < k; ++i)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }

    selectionSort(k, arr);

    cout << "Sorted Array:";
    for (int i = 0; i < k; ++i)
    {
        cout << " " << arr[i];
    }
    cout << endl;

    return 0;
}

