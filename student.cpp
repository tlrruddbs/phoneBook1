#include "student.h"
#include <iostream>
using namespace std;
extern int num1;
extern int number;
void student::insert1(student a[]) {
	for (int i = num1; i < 100; i++) {
		std::cout << num1 << "��°" << std::endl;
		std::cin >> a[num1].name;
		break;
	}
}
void student::erase1(student a[]) {
	std::cout << "���° �̸��� �����Ͻðڽ��ϱ�?" << std::endl;
	std::cin >> number;
	for (int i = 0; i < 50; i++) {
		a[number].name[i] = { 0, };
	}
}
void student::nameadjust1(student a[]) {
	std::cout << "���°�� �����Ͻðڽ��ϱ�?" << std::endl;
	std::cin >> number;
	for (int i = 0; i < 100; i++) {
		std::cout << "�̸��� �����ϼ���" << std::endl;
		std::cin >> a[number].name;
		break;
	}
}
