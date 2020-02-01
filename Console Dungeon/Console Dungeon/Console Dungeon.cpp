#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
using namespace std;

string mapLoader(string a) {
	ifstream in;
	in.open(a);
	short int size;
	in >> size;
	string x;
	while (in >> x) {
		for (short int i = 0; i < size; i++) {
			if (x[i] == '.') {
				x[i] = ' ';
			}
			cout << x[i];
		}
		cout << endl;
	}
	in.close();
	return a;
}

int main() {
	char level = 49;
	string Input = "a", b;
	b = "map1.txt";
	do {
		mapLoader(b);
		cin >> Input;
		if (Input == "next") {
			level++;
			b.at(3) = level;
		}
		system("cls");
	} while (Input != "stop");
	return 0;
}