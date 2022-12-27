#include <iostream>

using namespace std;

void merge(char [], char [], char []);

int main(){

    char s[] = "acdeg";
    char t[] = "bfhi";
    char r[(sizeof s + sizeof t)/sizeof(char)];

    cout << "s: " << s << endl;
    cout << "t: " << t << endl;
    merge(s,t,r);
    cout << "r: " << r << endl;


    return 0;
}

void merge(char s[], char t[], char r[])
{
  while(*s != '\0' && *t!='\0') {
      if(*s<*t) *r++ = *s++;
      else *r++ = *t++;
  }
  while(*s='\0') {
      *r++ = *s++;
  }
  while (*t!='\0') {
      *r++ = *t++;
  }
  *r = '\0';
}
