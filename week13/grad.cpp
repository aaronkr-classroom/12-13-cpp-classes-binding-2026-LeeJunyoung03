#include<algorithm>
#include<vector>
#include"core.h"

//istream& read_hw(istream& in, vector<double>& hw);

istream& Grad::read(istream& in) {
	Core::read_common(in);
	in >> thesis;
	read_hw(in, homework);
	return in;
}

double Grad::grade() const {
	return min(Core::grade(), thesis);
}
