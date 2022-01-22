#include<bits/stdc++.h>

using namespace std;

int main() {
	
	priority_queue <int> q;
	q.push(400);
	q.push(100);
	q.push(300);
	q.push(10);
	q.push(7);
	q.push(9);


	while (!q.empty()){
		int x;
		x = q.top();
		cout << x << endl;
		q.pop();
	}


	return 0;
}