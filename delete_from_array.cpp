#include <bits/stdc++.h>

using namespace std;

int main() 
{
	int ar[6] = {5, 2, 1, 30 , 42 , 18};

	list <int> mylist (ar, ar+6);
	list <int> :: iterator it;

	//.........remove  element

	it = find (mylist.begin(), mylist.end(), 30);
	mylist.erase(it);





	for (it= mylist.begin(); it !=mylist.end(); it++){
		cout << *it << "\t";
	}
	cout << "\n";


	return 0;
}