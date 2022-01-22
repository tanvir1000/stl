#include<bits/stdc++.h>

using namespace std;

// print all element stack

int main() {

	stack <string> s;

	s.push("dipto");
	s.push("aditto");
	s.push("dip");

	while(!s.empty()) {
		string x;
		x = s.top();
		cout << x << endl;
		s.pop();
	}

	return 0;
}