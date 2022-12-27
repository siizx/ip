// prendere in input un numero
// controllare che sia maggiore di 0 e minore o uguale di 3000
// preso il numero proviamo a sottrargli M (1000) 
// ciclo (numero >= 1000)
// 	se numero - M > 0
// 		Stampiamo una M
// 		numero = numero - 1000
// ciclo (numero >= 500)
//	...
// 	Altrimenti niente

#include<iostream>

int main(){
	int numero;
	std::cout << "Inserire un numero tra 1 e 3000: ";
	std::cin >> numero;
	if (numero < 1 || numero > 3000){
		std::cout << "Brutto mascalzone, metti un numero decente" << std::endl;
		return -1;
	}

	std::cout << "Il numero scelto in numeri romani è :";
	while(numero >= 1000){
		std::cout << "M";
		numero -= 1000;
	}
	if (numero >= 900){
		std::cout << "CM";
		numero -= 900;
	}
	while (numero >= 500){
		std::cout << "D";
		numero -= 500;
	}
	if (numero >= 400){
		std::cout << "CD";
		numero -= 400;
	}
	while (numero >= 100){
		std::cout << "C";
		numero -= 100;
	}
	if (numero >= 90){
		std::cout << "XC";
		numero -= 90;
	}
	std::cout << std::endl;
	return 0;
}
