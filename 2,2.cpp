#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int main()
{
	int A[8], B[8];
	for (int i = 0; i < 8; i++) {
		cout << "Input a[" << i + 1 << "]: \n";
		//cin >> l[i];
		A[i] = rand() % 10;
		B[i] = rand() % 10;
	}


	for (int i = 0; i < 8; i++) {
		cout << A[i] << " ";

	}



	cout << endl;
	for (int i = 0; i < 8; i++) {
		cout << B[i] << " ";

	}

	for (int i = 0; i < 8; i++) {
		for (int e = 7; e > 0; e--) {
			if (A[e] < A[e - 1]) {
				int ll = A[e];
				A[e] = A[e - 1];
				A[e - 1] = ll;
			}
			if (B[e] < B[e - 1]) {
				int ll = B[e];
				B[e] = B[e - 1];
				B[e - 1] = ll;
			}
		}
	}

	for (int i = 0; i < 8; i++) {
		int tst = 0;
		for (int e = 0; e < 8; e++) {
			if (A[i] == B[e]) {
				tst++;
			}
			if (A[i] == A[e]) {
				tst++;
			}
		}
		if (tst > 1) {
			cout << endl<<A[i] << ": " << tst << endl;
		}

		while (A[i + 1] == A[i] && i < 8) {
			i++;
		}
	}

	for (int i = 0; i < 8; i++) {
		cout << A[i] << " ";

	}



	cout << endl;
	for (int i = 0; i < 8; i++) {
		cout << B[i] << " ";

	}
}
