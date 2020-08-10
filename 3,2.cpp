#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	int G[8][3];
	for (int i = 0; i < 8; i++) {
		for (int e = 0; e < 3; e++) {
			G[i][e] =  rand() % 78;
		}
	}



	for (int i = 0; i < 8; i++) {
		int min = G[i][0];
		for (int e = 0; e < 3; e++) {
			if (G[i][e] < min) {
				min = G[i][e];
			}

		}
		cout << endl << "min G[" << i << "]: " << min;
	}

	for (int i = 0; i < 8; i++) {
		for (int e = 0; e < 3; e++) {
			cout << setw(4) << G[i][e];
		}
		cout << endl;
	}
}
