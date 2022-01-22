#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector <int> vec;
	vector <int>::iterator it;

	//..............iterator creation

	// vector <double> vec;
	// vector <double>:: iterator it2;

	//>>>>>>..print vector

	for(int i=1; i <= 5; i++) {
		vec.push_back(i);
	}

	//>>>>>>>>
	

	 for (int i=0; i < vec.size(); i++) {
	 	cout << vec[i] << "\t";
	 }

	 for(it = vec.begin(); it != vec.end() ; it++) {
	 	cout << *it << endl;

	 }







	return 0;
	
}