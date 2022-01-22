#include<bits/stdc++.h>

using namespace std;

int main() {
	
	set <string> s;
	set <string>::iterator it;
	s.insert("adi");
	s.insert("abi");
	s.insert("kona");
	s.insert("likhon");


	pair <set <string>::iterator, bool>p;
	p = s.insert("sabit");

	if(p.second == false) {
		cout << "can't insert" << endl;

	}
	else {
		cout << "insert done" << endl;

	}

	// for print 



	// for (it = s.begin(); it !=s.end(); ++it) {
	// 	cout << *it << " ";
	// }
	// cout << endl;

	return 0;
}