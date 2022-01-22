#include<bits/stdc++.h>

using namespace std;

int main() {
	
	set <int> s;
	set <int>::iterator it;
	s.insert(10);
	s.insert(15);
	s.insert(20);


	//>>>>>it 15 er dike point kore ase
	// it = s.find(15)
	//>>>>>it 15 er dike point kore ase

	
	s.erase(s.find(15));




	for (it = s.begin(); it !=s.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}