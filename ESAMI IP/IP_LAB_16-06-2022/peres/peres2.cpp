#include "ll.h"

void addhead(ll &s, char &c)
{
    elem *temp;
    temp = new elem;
    temp->next = s;
    temp->c = c;
    s->c = temp->c;
}

bool removehead(ll &s, char &c)
{
    if (s != nullptr)
    {
        c = s->c;
        ll *aux = &s;
        s = s->next;
        delete aux;
        return true;
    }
    return false;
}

int size(ll s)
{
    int count = 0;
    if (s == nullptr)
        return 0;
    elem *cc = s;
    while (cc != nullptr)
    {
        cc = cc->next;
        count++;
    }
    return count;
}
