#include "keywords.h"

using namespace std;

vector<string> substrings(string s, char opening, char closing)
{
	vector<string> substringlist;
	string substring;
	bool copysubstring = false;
	
	int scorr = 0;
	
	while(s[scorr] != '\0'){
		if(s[scorr] == opening){
			copysubstring = true;
			substring.clear();
		}
		else if(copysubstring){
			if(s[scorr] == closing){
				copysubstring = false;
				substringlist.push_back(substring);
			}
			else{
				substring.push_back(s[scorr]);
			}
		}
		
		scorr++;
	}
	
	if(copysubstring) substringlist.push_back(substring);
	
	return substringlist;
}

int match(vector<string> kwlist1, vector<string> kwlist2)
{
	int match = 0;
	
	//Comparazione primo vector con secondo vector
	for(int i = 0; i < kwlist1.size(); ++i){
		for(int j = 0; j < kwlist2.size(); ++j)
			if(kwlist1[i] == kwlist2[j]) ++match;
	}
	
	return match;
}

int nomatch(vector<string> kwlist1, vector<string> kwlist2)
{
	int no_match = 0;
	bool is_match;
	
	//comparazione elementi primo vector
	for(int i = 0; i < kwlist1.size(); ++i){
		is_match = false;
		
		for(int j = 0; j < kwlist2.size(); ++j){
			if(kwlist1[i] == kwlist2[j]){
				is_match = true;
				j = kwlist2.size();
			}
		}
		
		if(!is_match) ++no_match;
	}
	
	//comparazione elementi secondo vector
	for(int i = 0; i < kwlist2.size(); ++i){
		is_match = false;
		
		for(int j = 0; j < kwlist1.size(); ++j){
			if(kwlist2[i] == kwlist1[j]){
				is_match = true;
				j = kwlist1.size();
			}
		}
		
		if(!is_match) ++no_match;
	}
	
	return no_match;
}
