// recursively finding sum digits for some given number
#include <iostream>
using namespace std;

//
// sum(n, arr) = a[n] + sum(a-1, arr)
// int sum(int n) {
//     if (n == 0)
//         return 0;

//     return arr[n-1] + sum(n -1);

// }

// String to Int conversion
int stringToIntAndLoops(long long number) {
    cout << "stringToIntAndLoops`````````" << endl;
    int numLength = to_string(number).length();
    int sum = 0;
    for (int i = 0; i < numLength; i++) {
        sum += int(to_string(number)[i]) - int('0');
        cout << "[" << i << "]"  << " " << int(to_string(number)[i]) - int('0') << " " << sum << endl;
    }
    return sum;

}

// extracting digits from number using % and / and loops
int extractDigits(long long number) {
    cout << "extractDigits `````````" << endl;
    int numLength = to_string(number).length();

    int sum = 0, curDigit;
    for (int i = numLength ; i > 0; i--) {
        curDigit = number % 10;
        number /= 10;
        sum += curDigit;
        cout << "[" << i << "]"  << " " << curDigit << endl;
    }
    return sum;
}


int main() {

    long long num;
    cin >> num;

    cout << endl << stringToIntAndLoops(num) << endl;
    cout << endl << extractDigits(num) << endl;

    return 0;
}

