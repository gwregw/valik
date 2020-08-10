#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	int G[3][8];
	for (int i = 0; i < 3; i++) {
		for (int e = 0; e < 8; e++) {
			G[i][e] =  rand() % 78;
		}
	}


	for (int i = 0; i < 3; i++) {
		for (int e = 0; e < 8; e++) {
			cout << setw(4) << G[i][e];
		}
		cout << endl;
	}

	cout << endl;
	for (int i = 0; i < 3; i++) {
		int ex=7;
		for (int e = 0; e < ex; e++) {
				int ni=G[i][e];
				G[i][e] = G[i][ex];
				G[i][ex] = ni;
				ex--;

		}
	}

	for (int i = 0; i < 3; i++) {
		for (int e = 0; e < 8; e++) {
			cout << setw(4) << G[i][e];
		}
		cout << endl;
	}
}
