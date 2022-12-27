#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main () {

    int num = 0;
    int counter = 1;

    do {
    cout << "Inserisci un numero positivo, per verificare se è palindromo o no: ";
    cin >> num;
    } while (num <= 0);

    int temp = num;
    int input = num;

    cout << endl;

    for (int i=1; temp>0; i++) {
        temp = temp/10;
        counter = i;
    }

    int num2 = 0;

    for (int j=0; j<counter; j++) {
          temp = num%10;
          num = (num-temp)/10;
          num2 = num2*10+temp;
      }

    if (num2 == input) cout << input << " è un numero palindromo!" << endl;
    else cout << input << " non è un numero palindromo." << endl;

    return 0;
}
