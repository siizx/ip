#include <iostream>

using namespace std;

int main(){

    const int N = 15;
    int item;
    cout << "Inserisci il valore da trovare nell'array: ";
    cin >> item;
    cout << endl;
    int v[N];
    


    cout << "Inserisci v: ";
    cin >> v; //FUNZIONA!
    cout << endl;

    // for(int i=0; i<N; i++){
    //     cout << "Inserisci il valore in posizione " << i << ": ";
    //     cin >> v[i]; // FUNZIONA ANCHE CON SOLO V?
    //     cout << endl;
    // };
    
    int loc = -1;
    bool found = false;
    for(int j =0; j<N; j++){
        if(v[j]==item){
        found = true;
        loc = j;
        cout << "Trovato in posizione " << loc << endl;
        };
        if(found = false) cout << "Non trovato." << endl;

    }

    return 0;
}