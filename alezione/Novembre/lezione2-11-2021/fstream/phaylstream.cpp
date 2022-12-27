#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
	ifstream inFile;
	ofstream outFile;
	
	inFile.open("numbers.txt");
	
	//check for error
	if (inFile.fail()) {
		cerr << "Error opening file." << endl;
		exit(1);
	}
	
	int x,y;
	inFile >> x >> y;
	cout << "Num1 = " << x << endl;
	cout << "Num2 = " << y << endl;
	inFile.close();
	outFile.open("numbers.txt");
	
	for (int i = 0; i< 5; i++) {
		int num;
		cin >> num;
		outFile << num;
		outFile << "\n";
	}
	
	
	
	outFile.close();
	
	return 0;	
}


