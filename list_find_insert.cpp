#include<bits/stdc++.h>

using namespace std;

int main () {

	int ar[5] = {5, 2, 6, 4, 9};

	list <int> mylist (ar , ar+5); //copy array ar+5
	list <int>::iterator it;

	// 1st rules

	// it = mylist.begin();
	// it++;


	//.......input in any possition...........//
	it= find(mylist.begin(),mylist.end() ,6);

	cout << *it << "\t";

	mylist.insert(it,7);



	for(it =mylist.begin(); it != mylist.end(); it++)
	{
		cout << *it << "\t";
	} 
	cout << "\n";

}