#include<bits/stdc++.h>

bool ulta(int a, int b) {
	return (a > b);
}
using namespace std;

int main()
{
	vector <int> vec;
	vector <int>:: iterator it;

	vec.push_back(2);
	vec.push_back(4);
	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(7);
	vec.push_back(88);
	vec.push_back(56);

	//sort all number

	sort(vec.begin(), vec.end(), ulta);



//printing the vector
	for(it = vec.begin(); it != vec.end(); it++) {
		cout << *it << "\t";
	}
	puts("");

	return 0;
	
}

//ekhane just ekta function declaration 
// kora lagbe first a ,then oita pass kora lagbe


//just kichu onshow sort korte chai (first 3 ta)

// sort(vec.begin(), vec.begin() + 3);