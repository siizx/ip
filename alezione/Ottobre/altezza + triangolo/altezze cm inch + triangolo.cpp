// LEZIONE DEL 15/10/2021

#include <iostream>

// si può anche usare const float CM2FOOT = 0.0328 ecc
#define CM2FOOT 0.0328
#define CM2INCH 0.3937

int main()
{
	
	//ESERCIZIO con i booleani
	
	//std::cout << std::boolalpha << "\n";
	//std::cout << "Tre è maggiore di uno = " << (3 > 1) << "\n";
	//std::cout << "Quattro diviso 2 è minore di zero = " << (4 / 2 < 0) << "\n";
	
	//std::cout << sizeof static_cast<double> (4) << "\n";
	
	
	
	//ESERCIZIO  convertire altezza da cm a piedi. e poi pollici
	//int h_cm = 0;
	
	//std::cout << "Inserisci la tua altezza in cm: " << "\n";
	//std::cin >> h_cm;
	
	//float h_feet = (h_cm * CM2FOOT);
	//std::cout << "La tua altezza in piedi è: " << h_feet << "\n";
	
	//float h_inch = (h_cm * CM2INCH);
	//std::cout << "La tua altezza in pollici è: " << h_inch << "\n";
	
	// ora l'altezza in piedi e pollici
	
	//int h_footpart = static_cast<int>(h_feet);
	//int h_inchpart = h_inch - h_inchpart*12;
	
	//std::cout << "La tua altezza in piedi è: " << h_footpart << " piedi e " << h_inchpart << " pollici." << "\n";
	
	//ESERCIZIO TRIANGOLO
	
	float a = 0.;
	float b = 0.;
	float c = 0.;
	
	std::cout << "Scrivi tre numeri positivi: " << "\n";
	std::cin >> a >> b >> c;
	
	if (a > 0 && b > 0 && c > 0) 
		std::cout << "I numeri sono giusti." << "\n";
	else { 
		std::cout << "NO Negativi PLease..." << "\n";
		return 0; 
		}
	float absdiff = b - c;
	if (absdiff < 0) absdiff = -absdiff;
	
	if (a < b+c && a > absdiff)
		std::cout << "Questi numeri possono essere i lati di un triangolo \n";
	else
	
	
	
	
	
	
	return 0;
}
