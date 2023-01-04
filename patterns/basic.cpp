#include <iostream>
using namespace std;


void simple4x4(int rows,  int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << "* ";
		}
		cout << "\n";
	}
}

void halfRightPyramid(int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		cout << "\n";
	}
}

void halfReversedRightPyramid(int rows, int cols) {
	for (int i = rows; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			cout << "* ";
		}
		if (i == 1) return;
		cout << "\n";
	}
}


void halfRightPyramidWithNums(int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j <= i; j++) {
			cout << j + 1 << " ";
		}
		cout << "\n";
	}
}

void halfRightPyramidWithSameNumsInRows(int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j <= i; j++) {
			cout << i + 1 << " ";
		}
		cout << "\n";
	}
}

void pyramid(int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		const int COL = 2 * cols + 1;
		// cout << COL;

		// space star space
		//  4 1 4
		//  3 3 3
		//  2 5 2
		//  1 7 1
		//  0 9 0

		// print spaces
		for (int j = rows - i - 1; j > 0; j--) {
			cout << "  ";
		}

		// print stars
		for (int j = 0; j < 2 * i + 1; j++) {
			cout << "* ";
		}

		// print spaces again
		for (int j = rows - i - 1; j > 0; j--) {
			cout << "  ";
		}
		if (i == rows - 1) return;
		cout << "\n";
	}
}

int main()
{
	int rows, cols;
	cin >> rows;
	cin >> cols;
	pyramid(rows, cols);
	return 0;
}