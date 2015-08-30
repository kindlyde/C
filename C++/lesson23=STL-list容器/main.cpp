#include <iostream>
#include <vector>
#include <list>
#include <string> 

using std::string;
using namespace std;

int main(int argc, char *argv[]) {
	
	string s;
	list<string> slist;
	while(cin >> s)
	{
		slist.push_back(s);	
	}
	
	
	
	list<string>::iterator iter = slist.begin();
	
	while(cin>>s)
	{
		slist.insert(iter, s);	
	} 
	
	return 0;
}
