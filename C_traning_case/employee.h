#pragma once
#include <iostream>
#include <string>

using namespace std;

class employee
{
protected:
	string name;
	int number;
public:
	void getdata() {
		cout << "���: " << name << endl;
		cout << "�����: " << number << endl;
	}
	void putdata() {
		cout << "������� ���: ";
		cin >> name;
		cout << "������� �����: ";
		cin >> number;
	}
};