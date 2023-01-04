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
		if(i==1) return;
		cout << "\n";
	}
}


void halfRightPyramidWithNums(int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j <= i; j++) {
			cout << j+1 << " ";
		}
		cout << "\n";
	}
}

void halfRightPyramidWithSameNumsInRows(int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j <= i; j++) {
			cout << i+1 << " ";
		}
		cout << "\n";
	}
}

int main()
{	
	int rows, cols;
	cin>>rows;
	cin>>cols;
	halfReversedRightPyramid(rows, cols);
	return 0;
}