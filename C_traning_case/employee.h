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
		cout << "Имя: " << name << endl;
		cout << "Номер: " << number << endl;
	}
	void putdata() {
		cout << "Введите имя: ";
		cin >> name;
		cout << "Введите номер: ";
		cin >> number;
	}
};