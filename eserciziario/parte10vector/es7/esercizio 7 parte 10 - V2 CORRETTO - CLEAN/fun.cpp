#include <iostream>
#include <vector>
#include "pro.h"
#include <fstream>

using namespace std;

void contactToUpper(Contact_Str &B)
{
    if (B.Surname[0] > 96 && B.Surname[0] < 123)
    {
        B.Surname[0] = B.Surname[0] - 32;
    }
    if (B.Name[0] > 96 && B.Name[0] < 123)
    {
        B.Name[0] = B.Name[0] - 32;
    }
}

void phonebookToUpper(PhoneBook &B)
{
    for (int i = 0; i < B.size(); i++)
    {
        if (B[i].Surname[0] > 96 && B[i].Surname[0] < 123)
        {
            B[i].Surname[0] = B[i].Surname[0] - 32;
        }
        if (B[i].Name[0] > 96 && B[i].Name[0] < 123)
        {
            B[i].Name[0] = B[i].Name[0] - 32;
        }
    }
}

void printPhonebook(PhoneBook pb)
{
    for (int i = 0; i < pb.size(); i++)
    {
        cout << pb[i].Surname << " " << pb[i].Name << ": " << pb[i].PhoneNumber << endl;
    }
}

void initContact(Contact_Str &C)
{
    cout << "Name: ";
    cin >> C.Name;
    cout << "\n";
    cout << "Surname: ";
    cin >> C.Surname;
    cout << "\n";
    cout << "Phone number: ";
    cin >> C.PhoneNumber;
    cout << endl;
    contactToUpper(C);
}

void addContact(PhoneBook &B, string surname, string name, long int phoneNumber)
{
    Contact_Str C;
    C.Name = name;
    C.Surname = surname;
    C.PhoneNumber = phoneNumber;
    B.push_back(C);
}

void addContactV2(PhoneBook &B)
{
    Contact_Str cont;
    initContact(cont);
    B.push_back(cont);
    phonebookToUpper(B);
    sortSurnames(B);
}

void sortSurnames(PhoneBook &B)
{
    unsigned int min;

    for (int i = 0; i < B.size(); i++)
    {
        min = i;
        for (int j = i + 1; j < B.size(); j++)
        {
            if (B[j].Surname < B[min].Surname)
            {
                min = j;
            }
        }
        swapContacts(B[i], B[min]);
    }
}

//////// DA CAPIRE, COPIATO DAL PROF //////////
int findPos(PhoneBook &r, std::string s)
{
    int first = 0;
    int last = r.size() - 1;
    int mid = (first + last) / 2;
    bool found = false;

    while (first <= last && !found)
    {
        mid = (first + last) / 2;
        if (r[mid].Surname == s)
            found = true;
        else if (r[mid].Surname > s)
            last = mid - 1;
        else
            first = mid + 1;
    }
    if (found)
        return mid;
    else if (mid > 0)
        return mid;
    else
        return 0;
}

void swapContacts(Contact_Str &a, Contact_Str &b)
{
    if (a.Surname != b.Surname || a.Name != b.Name)
    {
        Contact_Str c = a;
        a = b;
        b = c;
    }
}

void shiftPhonebook(PhoneBook &B, int pos)
{
    try
    {
        if (pos > B.size() || pos < 0)
        {
            std::string err = "ERROR: Shifting out of the memory block is not allowed.\nNo shifting will occur.\n";
            throw err;
        }
    }
    catch (std::string err)
    {
        cerr << err << endl;
        return;
    }
    B.resize(B.size() + 1);
    if (pos == B.size() - 1)
        return;
    else
    {
        for (int i = B.size() - 1; i > pos; i--)
        {
            swapContacts(B[i], B[i - 1]);
        }
    }
}

void addContOrd(PhoneBook &B, Contact_Str &o)
{
    if (o.Surname[0] > 96 && o.Surname[0] < 123)
    {
        o.Surname[0] = o.Surname[0] - 32;
    }
    int pos = findPos(B, o.Surname);
    cout << "//DEBUG: addInitContOrd findPos: " << pos; // DEBUG
    shiftPhonebook(B, pos);
    B[pos] = o;
}

void addInitContOrd(PhoneBook &B)
{
    Contact_Str o;
    initContact(o);
    int pos = findPos(B, o.Surname);
    cout << "\n//DEBUG: addInitContOrd findpos: " << pos; // DEBUG
    shiftPhonebook(B, pos);
    B[pos] = o;
}
