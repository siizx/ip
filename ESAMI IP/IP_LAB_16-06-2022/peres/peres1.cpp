#include "hist.h"

// Aggiunge
void add(Hist &h, const int v)
{
    for (int i = 0; i < h.size(); i++)
    {
        if (h[i].value == v)
            h[i].num++;
        return;
    }

    Bin pp;
    pp.value = v;
    pp.num = 1;
    h.push_back(pp);
    return;
}

// ordina
void sort(Hist &h)
{
    for (int i = 0; i < h.size(); i++)
    {
        for (int o = 0; o < h.size() - 1 - i; o++)
            if (h[o].value > h[o + 1].value)
            {
                Bin aux;
                aux.value = h[o].value;
                aux.num = h[o].num;

                h[o].value = h[o + 1].value;
                h[o].num = h[o + 1].num;

                h[o + 1].value = aux.value;
                h[o + 1].num = aux.num;
            }
    }
}

// Cerca, restituisce conteggio
int count(const Hist &h, int v)
{
    for (int j = 0; j < h.size(); j++)
    {
        if (h[j].value == v)
            return h.at(j).num;
    }
    return 0;
}