#include <bits/stdc++.h>

using namespace std;

int main() 
{
	map <string, int> m;
	map <string, int>:: iterator it;

	// m["adi"] = 10;
	
	m.insert(make_pair("nabil", 41));
	m.insert(make_pair("adi", 11));
	m.insert(make_pair("babil", 51));\

	for(it=m.begin(); it !=m.end(); ++it){
		cout << it->first << " " << it->second << endl;

	}


	return 0;
}