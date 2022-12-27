#include <iostream>
#include <vector>
#include "structs.h"
#include "prototipi.h"

using namespace std;

void swap(int &a, int &b)
{
    if (a != b)
    {
        int c = a;
        a = b;
        b = c;
    }
}

void readVector(std::vector<int> &v)
{
    int N = 0;
    string input = "0";
    while (input != "y")
    {
        cout << "Inserisci un intero o per terminare 'y': ";
        cin >> input;
        if (input == "y")
        {
            break;
        }
        else
        {
            N = stoi(input); // string to integer function!!
            v.push_back(N);
            cout << endl;
        }
    };
}

void printVector(const std::vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    };
    cout << endl;
}

void SelectionSortVector(std::vector<int> &v)
{
    int min;
    for (int i = 0; i < v.size(); i++)
    {
        min = i;
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[min] > v[j])
            {
                min = j;
            }
        }
        swap(v[i], v[min]);
    }
}

int SequentialSearchVector(const std::vector<int> &v, int item)
{
    int loc = -1;
    bool found = false;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == item)
        {
            found = true;
            loc = i;
            break;
        };
    };

    return loc;
}

std::vector<int> reverseVect(std::vector<int> &v)
{
    std::vector<int> q = v;
    for (int i = 0; i <= q.size() / 2; i++)
    {
        swap(q[i], q[q.size() - 1 - i]);
    }

    return q;
}

std::vector<int> concatVect(std::vector<int> &v1, std::vector<int> &v2) // concatena 2 vector-
{
    std::vector<int> total = v1;
    for (int i = 0; i < v2.size(); i++)
    {
        total.push_back(v2[i]);
    }

    return total;
}

void insertVector(std::vector<int> &v, unsigned int pos, int val)
{
    try
    {
        if (pos > v.size())
        {

            int err = -1;
            throw err;
        }
        else if(pos==v.size()){
            v.push_back(val);
        }
        else
        {
            v.push_back(v[v.size()-1]);
            unsigned int last = v.size() - 1;
            for (int i = 0; i <= last -1 - pos; i++)
            {
                v[last - i] = v[last - 1 - i];
            }
            v[pos] = val;
        }
    }
    catch (int err)
    {
        cerr << err << " | ERROR: Chosen position out of bound." << endl;
    }
}
