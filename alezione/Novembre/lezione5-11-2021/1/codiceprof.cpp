#include <iostream>

struct data {​​​​​​​​​

  int anno;

  int mese;

  int giorno;

}​​​​​​​​​;

 

const int N = 10;

data giorni[N];

int main()

{​​​​​​​​​

  std::cout << "Scrivi "<<N<<" date nel formato AAAA MM GG:\n";

  for (int i=0; i<N; i++) {​​​​​​​​​

    data d;

    std::cout << i+1 << ")\n";

    std::cin >> d.anno;

    std::cin >> d.mese;

    std::cin >> d.giorno;

    giorni[i] = d;

  }​​​​​​​​​

 

  std::cout << "Hai scritto:\n";

  for (int i=0; i<N; i++) {​​​​​​​​​

    std::cout << i+1 << ") ";

    std::cout << giorni[i].anno << "-";

    std::cout << giorni[i].mese << "-";

    std::cout << giorni[i].giorno << "\n";

  }​​​​​​​​​

  for (int i=0; i<N-1; i++) {​​​​​​​​​

    int imin = i;

    for (int j = i+1; j<N; j++) {​​​​​​​​​

      if (listaDate[j].anno < listaDate[imin].anno

          || (listaDate[j].anno == listaDate[imin].anno &&

              listaDate[j].mese < listaDate[imin].mese)

          || (listaDate[j].anno == listaDate[imin].anno &&

              listaDate[j].mese == listaDate[imin].mese &&

              listaDate[j].giorno < listaDate[imin].giorno)

          )          imin = j;

    }​​​​​​​​​  

    if (imin != i) {​​​​​​​​​

      data tmp = listaDate[i];

      listaDate[i] = listaDate[imin];

      listaDate[imin] = tmp;

    }​​​​​​​​​

  }​​​​​​​​​

}​​​​​​​​​

