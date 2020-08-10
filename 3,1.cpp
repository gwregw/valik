#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	int G[6][6], notnull=0;
	for (int i = 0; i < 6; i++) {
		for (int e = 0; e < 6; e++) {
			G[i][e] =  rand() % 15;
		}
	}

	for (int i = 0; i < 6; i++) {
		for (int e = 0; e < 6; e++) {
			if (G[i][e] != 0) {
				notnull++;
			}
		}
	}

	for (int i = 0; i < 6; i++) {
		for (int e = 0; e < 6; e++) {
			cout << setw(4) << G[i][e];
		}
		cout << endl;
	}
	cout << "Not null elements: "<<notnull;
}
