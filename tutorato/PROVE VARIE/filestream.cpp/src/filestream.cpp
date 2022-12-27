#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

	ifstream inFile;
	ofstream outFile;

	inFile.open("numbers.txt");

	if(inFile.fail()||outFile.fail()) {
		cerr << "Error opening file" << endl;
		exit(1);
	}

	int x;
	int y;
	inFile >> x >> y;
	cout << "Num1 = " << x << endl;
	cout << "Num2 = " << y << endl;
	inFile.close();

	outFile.open("numbers.txt");
	outFile.close();


	return 0;
}
