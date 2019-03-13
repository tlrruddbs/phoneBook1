#pragma once
#include "student.h"
#include "substudent.h"

class mainc {
public:
	int num;
	void start(student a[], substudent b[]);
	void insert(student a[], substudent b[]);
	void erase(student a[], substudent b[]);
	void search(student a[], substudent b[]);
	void nameadjust(student a[]);
	void addadjust(substudent b[]);
};
