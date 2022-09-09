#include <iostream>
#include <vector>
#include <climits>
using namespace std;


// int arr[10];
const int N = 10;
int arr[N];


void printArray(int *arr, int n) {
    cout << "[ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << " ]" << endl << endl;
}

void merge(int l, int r, int mid) {
    cout << "merge called for l=" << l << ", mid=" << mid << ", r=" << r << endl;
    int l_size = mid - l + 1;
    int l_array[l_size + 1];
    int r_size = r - mid;
    int r_array[r_size + 1];
    for (int i = 0; i < l_size; ++i)
    {
        l_array[i] = arr[i + l];
    }
    for (int i = 0; i < r_size; i++) {
        r_array[i] = arr[i + mid + 1];
    }

    l_array[l_size] = r_array[l_size] = INT_MAX;

    int l_index = 0, r_index = 0;
    for (int i = l; i <= r; i++) {
        if (l_array[l_index] <= r_array[r_index]) {
            arr[i] = l_array[l_index];
            l_index++;
        }
        else {
            arr[i] = r_array[r_index];
            r_index++;
        }
    }
    cout << "L_array for l_size=" << l_size << endl;
    printArray(l_array, l_size);

    cout << "R_array for r_size=" << r_size << endl;
    printArray(r_array, r_size);
}


void mergeSort(int l, int r) {
    if (l == r) return;
    int mid = (l + r) / 2;
    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    merge(l, r, mid);
}

int main()
{
    int k;
    cin >> k;


    for (int i = 0; i < k; ++i)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }
    printArray(arr, k);

    mergeSort(0, k - 1);

    cout << "Sorted Array:";
    printArray(arr, k);

    return 0;
}

