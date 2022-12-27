#include <iostream>

using namespace std;

void printarray(const char s[], int size)
{

    const char *p = s;
    for (int i = 0; i < size; i++)
    {
        cout << *p;
        p++;
    }
    cout << endl;
}

int main()
{

    char msg[] = "Hello world";

    int N = sizeof(msg) / sizeof(char);

    printarray(msg, N);

    cout << "yolo" << endl;

    return 0;
}