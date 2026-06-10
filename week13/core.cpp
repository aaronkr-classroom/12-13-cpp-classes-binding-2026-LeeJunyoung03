#include<iostream>
#include"grade.h"
#include"core.h"

using namespace std;

bool compare(const Core& x, const) {
	return x.getName()<y
}

istream& Core::read_common(istream& in) {
	in >> name >> midterm >> final;
	return in;
}
istream& Core::read(istream& in) {
	read_common();
}
