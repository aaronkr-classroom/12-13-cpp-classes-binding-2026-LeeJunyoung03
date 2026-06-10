#pragma once
#ifndef  GUARD_Core_h
#define GUARD_Core_h

#include<iostream>

using namespace std;

class Core {
private:
	string name;
	friend class;
public:
	Core() :midterm(0), final(0) { };
	Core(istream& is) { read(is); }
	
};

bool
#endif // ! GUARD_Core_h
