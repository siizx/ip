#include "keywords.h"

using namespace std;

vector<string> substrings(string s, char opening, char closing)
{
    vector <string> substringlist;
    string substring;
    bool copysubstring;
    
    int idx = 0;

    while (s[idx] != '\0'){
        if(s[idx] ==  opening) {
            copysubstring = true;
            substring.clear();
        }else if(copysubstring == true){
            if(s[idx] ==  closing){
                copysubstring = false;
                substringlist.push_back(substring);
            }
            else substring.push_back(s[idx]);
        }
        idx++;
    }
    if(copysubstring ==  true) substringlist.push_back(substring);
    return substringlist;
}

int match(vector<string> kwlist1, vector<string> kwlist2)
{
  
}

int nomatch(vector<string> kwlist1, vector<string> kwlist2)
{
  
}
