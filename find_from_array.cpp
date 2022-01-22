#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int ar[6] = {5, 2, 1, 30 , 42 , 18};

	list <int> mylist (ar, ar+6);
	list <int> :: iterator it;



	it = find(mylist.begin(),mylist.end(), 22); // 22 k kujtesilam

	if (it == mylist.end()) {
		cout << "not found" << endl;
	}
	else {
		cout << "Found" << endl;
	}


	return 0;
}