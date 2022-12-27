//FUNZIONANTE CON FILESTREAM

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

    ofstream future;

    future.open("future.txt");

    cout << "Descrivi il tuo futuro: ";

    string ans;
    string ans2;
    
    getline(cin, ans);

    future << ans;
    

    future.close();

    cout << ans << endl;

    ifstream future_I;
    future_I.open("future.txt");

    

    getline(future_I, ans2);
    
    future_I.close();

    cout << ans2 << endl;


    return 0;
}