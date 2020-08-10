#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void min(int **a, int &rb) {
	int min =a[0][0];
	cout << endl << endl;
	for (int i = 0; i < rb; i++) {
			for (int e = 0; e < rb; e++) {
				if (a[i][e]<min) {
					min = a[i][e];
				}
		}
	}
	for (int i = 0; i < rb; i++) {
		for (int e = 0; e < rb; e++) {
			if (a[i][e] == min) {
				cout<<"a["<<i+1<<"]["<<e+1<<"]: "<< a[i][e]<<"   "<<&a[i][e];
			}
		}
	}
}

int main()
{
	int pol;
	cout << "Vvedit rozmirnist masyvu: \n";
	cin >> pol;
	int **a = new int*[pol];
	for (int i = 0; i < pol; i++) {
		a[i] = new int[pol];
	}
	for (int i = 0; i < pol; i++) {
		for (int e = 0; e < pol; e++) {
			a[i][e] = rand() % 17;
		}
	}



	for (int i = 0; i < pol; i++) {
		for (int e = 0; e < pol; e++) {
			cout << setw(4) << a[i][e];
		}
		cout << endl;
	}


	min(a, pol);

	for (int i = 0; i < pol; i++) {
		delete(a[i]);
	}
	delete(a);
}
