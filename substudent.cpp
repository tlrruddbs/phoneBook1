#include "substudent.h"
#include <iostream>
using namespace std;
extern int num1;
extern int number;
void substudent::insert2(substudent b[]) {
	for (int i = 1; i < 100; i++) {
		std::cout << "��ȣ �Է�" << std::endl;
		std::cin >> b[num1].phone;
		num1++;
		break;
	}
}
void substudent::erase2(substudent b[]) {
	for (int i = 0; i < 50; i++) {
		b[number].phone[i] = { 0, };
	}
	std::cout << "�����Ǿ����ϴ�" << std::endl;
}
void substudent::addadjust1(substudent b[]) {
	std::cout << "���°�� �����Ͻðڽ��ϱ�?" << std::endl;
	std::cin >> number;
	for (int i = 0; i < 100; i++) {
		std::cout << "��ȣ�� �����ϼ���" << std::endl;
		std::cin >> b[number].phone;
		break;
	}
}