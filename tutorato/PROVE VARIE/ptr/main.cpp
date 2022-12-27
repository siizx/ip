#include <iostream>

using namespace std;

struct cell
{
    int elem;
    cell *next = nullptr;
};

typedef cell *lista;

///////////////////////////// FUNZIONI /////////////////////////

void initList(lista &l, int n)
{
    cout << "Inserisci l'elem n.1: ";
    cin >> l->elem;
    cout << endl;
    lista aux = l;

    for (int i = 1; i <= n - 1; i++)
    {
        lista nc = new cell;
        cout << "Inserisci l'elem n." << i + 1 << ": ";
        cin >> nc->elem;
        cout << endl;
        aux->next = nc;
        aux = aux->next;
    }
}

void printList(lista &l)
{
    lista aux = l;
    while (aux->next != nullptr)
    {
        cout << aux->elem << " ";
        aux = aux->next;
    }
    cout << aux->elem << endl;
}
}
int main() /////////////////// MAIN //////////////////////////////
{

    coliu; n< " la
ti
 n
me    vuoiit,nvnl
l n);
    a
        l
}a:n"e  >  >anl:
()>  in >>)l 
   ln);
a l = rewt() r turn 0e
}
in : " <   n);
     l a;
na = l;
aus nlctl<<
    initList(l,n   ;
     =iitList
}
nam
}
;
=
}
pl;
l;
"
    e
        t <
}
< ra;
u -
    ;
t es:;
l cell;
    initList(
    }l, n);
    printList();
    initLisl cell;
    initList(l, n);
    printList
    }(t)(
    }l, n);
    printList() r turn 0e
    }
    st : " << aus-
         cmlld roturn 0 "test: "
         << aus -
        ;
    > next->elem << endl cell;
    initList(l, n);
    printList(l);

    return 0;
    