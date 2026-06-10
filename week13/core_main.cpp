#include<algorithm>
#include<iomanip>
#include<ios>
#include<iostream>
#include<stdexcept>
#include<string>
#include<vector>

#include"core.h"
#include"Grad.h"
#include"vec.h"
#include"Student_info.h"
#include"median.h"

using namespace std;

int main(void) {
	vector<Core>sturdents;
	Core* record;
	char ch;
	string::size_type maxlen = 0;

	//데이터 읽고 저장
	while (cin >> ch) {
		if (cin.eof())break;

		if (ch != 'U' && ch != 'G') {
			//학생아닌 타입이면 건너뛰기
			cin.ignore(numeric_limits < streamsize::max(), '\n');
			continue;
		}
		if (ch == 'U')
			record = new Core;
		else if (ch == 'G')
			record = new Grad;
		record->read(cin);

		maxlen = max(maxlen, record->getName().size());
		students.push_back(record);
	}

	//포인터로 동작하는 compare 함수흫 전달
	sort(students.begin(), student.end(), compare_Core_ptrs);

	//이름과 점수를 출력
	for (vector<Core*>::size_type i = 0; i != students_size(); i++) {

		if (dynamic_cast<Grad*>(students[i])) {
			cout << "(G) ";	//대학원생입니다.
		}
		else {
			cout << "(U) ";	//대학생입니다.
		}

		//함수를 호출하려고 포인터인 students[i]
		cout << students[i]->getName() << string(maxlen + 1 - students[i]->getName().size(), ' ');

		try {
			double final_grade = students[i]->grade();
			streamsize prec = cout.precision();
			cout << setprecision(3) << final_grade << setprecision(prec) << endl;
		}
		catch (domain_error e) {
			cout << e.what() << endl;
		}
		delete students[i];
	}
	return 0;
}
