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
		cout << "���: " << get_name() << endl;
		cout << "�����: " << get_number() << endl;
	}
	string get_name()
	{
		return name;
	}
	int get_number()
	{
		return number;
	}
	void putdata() {
		cout << "������� ���: ";
		cin >> name;
		cout << "������� �����: ";
		cin >> number;
	}
};