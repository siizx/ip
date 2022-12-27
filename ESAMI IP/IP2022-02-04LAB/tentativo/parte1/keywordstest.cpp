#include <iostream>

#include "keywords.h"

using namespace std;

void printvectorstrings(vector<string> result)
{
  if (result.size()>0)
    for (int i=0; i<result.size(); i++) cout << result[i] << endl;
  else
    cout << "nessun risultato\n";
}

int main()
{
  string tweet1("#pippo #pluto #paperino messaggio");
  string tweet2("questo tweet non contiene hashtags");
  string tweet3("@pippo @pluto @paperoga altro messaggio @paperopoli");
  string tweet4("#pippo #pippo #paperoga altro messaggio");
  cout<<"\n\n-----TEST substrings\n";
  cout << "--------hashtags in tweet1:\n";
  printvectorstrings(substrings(tweet1, '#',' '));
  cout << "\n--------hashtags in tweet2:\n";
  printvectorstrings(substrings(tweet2, '#',' '));
  cout << "\n--------at-mentions in tweet3:\n";
  printvectorstrings(substrings(tweet3, '@',' '));

  vector<string> s1;
  s1.push_back("aaa");
  s1.push_back("bbb");
  s1.push_back("ccc");
  vector<string> s2;
  s2.push_back("aaa");
  s2.push_back("ccc");
  s2.push_back("ddd");
  s2.push_back("eee");
  cout<<"\n\n-----TEST match\n";
  cout<<"-----stringhe 1\n";
  printvectorstrings(s1);
  cout<<"-----stringhe 2\n";
  printvectorstrings(s2);
  cout<<"-----stringhe comuni a s1 e s2:\n";
  cout<<match(s1,s2)<<endl;
  cout<<"-----stringhe non comuni tra s1 e s2:\n";
  cout<<nomatch(s1,s2)<<endl;
  cout<<"-----coefficiente di Jaccard:\n";
  cout<<(float)match(s1,s2)/((float)nomatch(s1,s2)+(float)match(s1,s2))<<endl;

  cout<<"\n\n-----TEST COMBINATO\n";
  cout<<"-----hashtags in tweet4 che sono anche at-mentions in tweet3:\n";
  cout<<match(substrings(tweet4, '#',' '),substrings(tweet3, '@',' '))<<endl;
}
