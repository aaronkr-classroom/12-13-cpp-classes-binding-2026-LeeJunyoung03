#include<iostream>
#include"Lis.h"

using namespace std;

int main(void) {
	Lis<int> list;
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);

	for (Lis<int>::const_iterator it = list.begin(); it != list.end(); ++it) {
		cout << *it << "	";
	}
	cout << endl;
	return 0;
}
