#include<iostream>
#include "mainc.h"
using namespace std;



int main() {
	mainc main1;
	student* a[100];
	substudent* b[100];
	for (int i = 0; i < 100; i++) {
		a[i] = new student();
		b[i] = new substudent();
	}
	main1.start(*a,*b);
	return 0;
}




