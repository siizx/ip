#include <iostream>
#include <string>
#include <vector>
#include "phone_book.h"
#include "string_list.h"
#include <fstream>

using namespace std;

int main()
{

    PhoneBook B;

    // INPUT DA FILE //

    ifstream ContactsDisorg("contact.txt");
    Contact_Str o;
    while (ContactsDisorg >> o.Name &&
           ContactsDisorg >> o.Surname &&
           ContactsDisorg >> o.PhoneNumber)
    {
        // Contact_Str o;
        // ContactsDisorg >> o.Name;
        // ContactsDisorg >> o.Surname;
        // ContactsDisorg >> o.PhoneNumber;
        B.push_back(o);
    }
    ContactsDisorg.close();
    ////////// IFSTREAM CHIUSO /////////////

    // OPERATIONS ON PHONEBOOK B //
    phonebookToUpper(B);
    printPhonebook(B);
    sortSurnames(B);
    cout << "\n/////ORDINATI://///\n";
    printPhonebook(B);

    // OUTPUT TO FILE //
    // cin.ignore(34);
    ofstream OrdContacts("ordContact.txt");
    for (int i = 0; i < B.size(); i++)
    {
        OrdContacts << B[i].Name;
        OrdContacts << " ";
        OrdContacts << B[i].Surname;
        OrdContacts << " ";
        OrdContacts << B[i].PhoneNumber;
        OrdContacts << "\n";
    }
    OrdContacts.close();

    ///////// SHIFTPHONEBOOK /////
    // int pos = 9;
    // printf("\n\nShifting Phonebook from pos#%d: \n",pos);
    // printf("B.size()-1 = %ld\n\n", B.size()-1);
    // shiftPhonebook(B,pos);
    // printPhonebook(B);

    //////// addORD //////
    cout << "addContOrd:\n";
    Contact_Str q;
    initContact(q);
    addContOrd(B, q);
    printf("\n\n");
    printPhonebook(B);
    printf("\n\n");
    printf("addInitContOrd: ");
    addInitContOrd(B);
    printf("\n");
    printPhonebook(B);

    return 0;
}