#include <iostream>
#include <math.h>
#include <cstdlib>2
using namespace std;

int main()
{
	double l[11], max;
	for (int i = 0; i < 11; i++) {
		cout << "Input a[" << i + 1 << "]: \n";
		cin >> l[i];
	}
	max = l[0];
	for (int i = 0; i < 11; i++) {
		if (l[i] > max) {
			max = l[i];
		}
	}

	for (int i = 0; i < 11; i++) {
		cout << l[i] << " ";

	}

	for (int i = 0; i < 11; i++) {
		if (l[i] <0) {
			l[i]/=max;
		}
	}


	cout << endl;
	for (int i = 0; i < 11; i++) {
		cout << l[i] << " ";

	}
	cout << endl << max;
}
