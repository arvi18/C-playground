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

// approach 1 (reversed)
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



// recursively calculating sum
// sum(5431) = sum(543) + 1
#include <cmath>
int sum = 0;
int recursively(int num) {
    int numLength = int(to_string(num).length());
    int firstDig = num / int(pow(10, numLength - 1));
    int nextNum = num % int(pow(10, numLength - 1));
    if (numLength <= 1) return firstDig;
    sum += firstDig;
    cout << sum << " " << firstDig << " " << nextNum << "\n";
    return firstDig + recursively(nextNum);
}


int main() {

    int num;
    cin >> num;

    cout << endl << stringToIntAndLoops(num) << endl;
    cout << endl << extractDigits(num) << endl;
    cout << "recursively `````````" << endl<< recursively(num) << endl;

    return 0;
}

