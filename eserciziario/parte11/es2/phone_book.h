#ifndef PHONEBOOK
#define PHONEBOOK

struct Contact_Str_Impl
{
    std::string Name;
    std::string Surname;
    long int PhoneNumber;
};

typedef struct Contact_Str_Impl Contact_Str;
typedef std::vector<Contact_Str> PhoneBook;

void contactToUpper(Contact_Str &B);
void phonebookToUpper(PhoneBook &B);
void printPhonebook(PhoneBook pb);
void initContact(Contact_Str &C);
void addContact(PhoneBook &B, std::string surname, std::string name, long int phoneNumber);
void addContactV2(PhoneBook &B);
void sortSurnames(PhoneBook &B);
int findPos(PhoneBook &r, std::string s);
void swapContacts(Contact_Str &a, Contact_Str &b);
void shiftPhonebook(PhoneBook &, int pos);
void addContOrd(PhoneBook &B, Contact_Str &o);
void addInitContOrd(PhoneBook &B);

#endif
