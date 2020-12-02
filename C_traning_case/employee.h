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
		cout << "Имя: " << get_name() << endl;
		cout << "Номер: " << get_number() << endl;
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
		cout << "Введите имя: ";
		cin >> name;
		cout << "Введите номер: ";
		cin >> number;
	}
};