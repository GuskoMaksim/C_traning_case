#include <iostream>
#include <Windows.h>
#include "employee.h"
#include <vector>

using namespace std;

void Z1()
{
	employee arr[100];
	int col;
	cout << "Введите количество ";
	cin >> col;
	if (col > 100)
		col = 100;
	if (col <= 0)
		col = 1;
	for (int i = 0; i < col; i++)
	{
		arr->putdata();
	}
	for (int i = 0; i < col; i++)
	{
		arr->getdata();
	}
}

int maxint(vector<int> arr, int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

void Z2()
{
	vector<int> arr;
	cout << "Введите числа (для окончания ввода введите e)" << endl;
	do
	{
		string char_new_el;
		cin >> char_new_el;
		if (char_new_el == "e")
			break;
		int num;
		num = stoi(char_new_el);
		arr.push_back(num);
		
	} while (true);
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}
	cout << "Максимальное число: " << maxint(arr, arr.size());
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Задание: " << endl;
	int vib;
	cin >> vib;
	switch (vib)
	{
	case 1:
	{
		Z1();
		break;
	}
	case 2:
	{
		Z2();
		break;
	}
	default:
		break;
	}
}