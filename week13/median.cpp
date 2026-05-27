#include<vector>
#include<algorithm>
#include<stdexcept>
#include"median.h"

using namespace std;	//domain_error()?뚮Ц??
double median(vector<double>vec) {
	typedef vector<double>::size_type vec_sz;

	vec_sz size = vec.size();
	if (size == 0) {
		throw domain_error("Median of empty vector!");
		//return 1;
	}

	sort(vec.begin(), vec.end());
	vec_sz mid = size / 2;
	return size % 2 == 0	//鈺곌퀗援?		? (vec[mid] + vec[mid - 1]) / 2	//筌〓챷???獄쏆꼹??		: vec[mid];	//椰꾧퀣彛????獄쏆꼹??}
