#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main() {
	int num;
	vector<int> vec;

	while (cin >> num) {
		vec.push_back(num);
	}
	
	sort(vec.rbegin(), vec.rend());

	for (auto i : vec) {
		cout << i;
	}
	cout << endl;

	system("pause");
}