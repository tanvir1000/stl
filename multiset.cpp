#include<bits/stdc++.h>
 using namespace std;


 //multimap

 int main () {
 	multimap <string, int> m;
 	multimap <string, int>:: iterator it;

 	m.insert(make_pair("dipto",43));
 	m.insert(make_pair("dipto",44));
 	m.insert(make_pair("dipto",45));


 	for(it= m.begin(); it != m.end(); it++ ) {

 		//map a amra * use korte 
 		// parbo na tai map emne print kora lage
 		
 		cout << it->first << " " << it->second << endl;
 	}



 	return 0;

 }