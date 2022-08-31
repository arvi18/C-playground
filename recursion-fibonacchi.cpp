// cout<< pow(10, int(to_string(num).length()));

#include <bits/stdc++.h>
using namespace std;

vector<long long> FibVector;


template <typename S>
ostream& operator<<(ostream& os,
                    const vector<S>& vector)
{
    // Printing all the elements
    // using <<
    for (auto element : vector) {
        os << element << " ";
    }
    return os;
}

// Function to return fibonaccnumber at nth index
// index:  1  2  3  4  5  6 ...
// value:  0  1  1  2  3  5 ...
int fibonaccchi(int n) {
    if (n <= 0) return 0;
    if (n == 1)return 1;
    int currNum = fibonaccchi(n - 1) + fibonaccchi(n - 2);
    return currNum;
}


int main() {

    int num;
    cin >> num;

    for (int i = 0; i < num; ++i)
    {
        FibVector.push_back(fibonaccchi(i));
    }

    // printing elements form vector FibVector
    cout << FibVector << endl;


    return 0;
}
