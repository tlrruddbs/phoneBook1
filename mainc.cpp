#include"mainc.h"
#include<iostream>
using namespace std;
int num1 = 1;

int number;
void mainc::start(student a[], substudent b[]) {
	while (1) {
		std::cout << "1.추가" << std::endl;
		std::cout << "2.삭제" << std::endl;
		std::cout << "3.이름수정" << std::endl;
		std::cout << "4.검색" << std::endl;
		std::cout << "5.번호수정" << std::endl;
		std::cout << "6.종료" << std::endl;
		std::cin >> num;




		if (num == 1) {
			insert(a, b);
			std::cout << "추가되었습니다" << std::endl;
		}
		if (num == 2) {
			erase(a, b);
		}
		if (num == 3) {
			nameadjust(a);
		}
		if (num == 4) {
			search(a, b);
		}
		if (num == 5) {
			addadjust(b);
		}
		if (num == 6) {
			return;
		}
	}
}
void mainc::insert(student a[], substudent b[]) {
	for (int i = 1; i < 100; i++) {
		a[i].insert1(a);
		b[i].insert2(b);
		break;
	}
}
void mainc::erase(student a[], substudent b[]) {
	for (int i = 1; i < 100; i++) {
		a[i].erase1(a);
		b[i].erase2(b);
		break;
	}
}
void mainc::search(student a[], substudent b[]) {

	for (int i = 1; i < num1; i++) {
		std::cout << a[i].name << ' ';
		std::cout << b[i].phone;
		std::cout << std::endl;
	}
}
void mainc::nameadjust(student a[]) {
	for (int i = 1; i < 100; i++) {
		a[i].nameadjust1(a);
		break;
	}
}
void mainc::addadjust(substudent b[]) {
	for (int i = 1; i < 100; i++) {
		b[i].addadjust1(b);
		break;
	}
}
