#include <bits/stdc++.h>

using namespace std;

int main () {
	vector <int> v = {1, 2, 5, 8, 9 ,12};
	bool ans = binary_search(v.begin(), v.end(), 8);

	if (ans) cout << "found" << endl;
	else cout << " nai vai" << endl;

	return 0;
}