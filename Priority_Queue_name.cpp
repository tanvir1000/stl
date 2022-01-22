#include <bits/stdc++.h>

using namespace std;

int main () 
{

	priority_queue <string> q;
	q.push("adi");
	q.push("abir");
	q.push("kabir");
	q.push("tabil");

	while (!q.empty()) {
		string x;
		x= q.top();
		cout << x << endl;
		q.pop();
	}
}