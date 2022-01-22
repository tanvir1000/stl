#include <bits/stdc++.h>
using namespace std;

 int main ()
 {

 	list<float> mylist;
 	list<float> :: iterator it;

 	mylist.push_back(10);
 	mylist.push_back(15);
 	mylist.push_back(30);
 	mylist.push_front(17);


 	//list ulta print korte caile

 	// mylist.reverse();

 	//list size

 	//cout << mylist.size() << endl;



 	for (it = mylist.begin(); it !=mylist.end(); it++){
 		cout << *it << endl;
 	}



 	return 0;
 }

