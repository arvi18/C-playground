
// Given array a of N integers. Given Q queries 3 and in each query given a number X, print. count of that number in array.

//  1 << N<= 10^5
//  1 <= a[i] <= 10^7
//  1 <=Q <= 10^5

#include <iostream>
using namespace std;

int N, Q;
// int arr[N+1];

int main() {
	cin >> N;
	int arr[N + 1];
	int hashN = 1e7 + 10;
	int hash[hashN];

	//input array
	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		arr[i] = x;
		cout << i << " " << arr[i] << endl;
	}

	cout << endl;

	// hashmaps



	// testcases
	int Q;
	cin >> Q;
	while (Q--) {

	}


	// print array
	// for (int i = 0; i < N; i++)
	// {
	// 	cout << i << " " <<arr[i] << endl;
	// }

	return 0;
}

