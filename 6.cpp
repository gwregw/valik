#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


int main()
{
	string slip = "", init = "";
	int a = 0;
	getline(cin, init);
	for (int i = 0; i < init.size(); i++) {
		slip+= init.at(i);
		if (init.at(i) == ' ') {
			if (a == 1) {
				cout << endl << "Kilk symvoliv: " << slip.size()-1 << endl;
			}
			if (a > 0) {
				cout << slip << " ";
			}
			a++;
			slip = "";
		}
		
	}
	cout << slip << endl;
}
