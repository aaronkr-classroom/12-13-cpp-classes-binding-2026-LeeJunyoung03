#include<iostream>
#include<iterator>
#include<cstring>
#include"str.h"

using namespace std;

istream& operator>>(istream& is, Str& s) {	//입력엿나자
	//기존의 값 제거
	s.data.clear();

	//띄어쓰기까지 문자읽기
	char c;
	while (is.get(c) && isspace(c))
		;	//아무것도 안해도돼

	//계속 문자가 잇으면 다음 띄어쓰기까지 읽기
	if (is) {
		do s.data.push_back(c);
		while (is.get(c) && !isspace(c))
			;

		//띄어쓰기 이쓰면 다시 스트림으로 보내기
		if (is)
			is.unget();
	}
	return is;
}

ostream& operator<<(ostream& os, const Str& s) {//출력연산자
	for (Str::size_type i = 0; i != s.size(); ++i) {
		os << s[i];
	}
	return os;
}

Str operator+(const Str& s, const Str& t) {	//문자열 결합
	Str r = s;
	r += t;
	return r;
}
