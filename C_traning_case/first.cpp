#include <iostream>
#include <Windows.h>
#include "employee.h"

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

int maxint(int *arr, int n)
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
	int* arr = NULL;
	int* arr_old = NULL;
	int count = 0;
	int new_el;
	cout << "Введите числа (для окончания ввода введите E)" << endl;
	do
	{
		string char_new_el;
		cin >> char_new_el;
		if (char_new_el == "e")
			break;
		new_el = stoi(char_new_el);
		if (new_el == NULL)
			break;
		if (count > 0)
		{
			arr_old = new int[count];
			for (int i = 0; i < count; i++)
			{
				arr_old[i] = arr[i];
			}
			delete[]arr;
			arr = NULL;
		}
		count++;
		arr = new int[count];
		if (count > 0)
		{
			int i = 0;
			for (; i < count - 1; i++)
			{
				arr[i] = arr_old[i];
			}
			arr[i] = new_el;
			delete[] arr_old;
			arr_old = NULL;
		}
		else
			arr[0] = new_el;
	} while (true);
	for (int i = 0; i < count; i++)
	{
		cout << arr[i] << endl;
	}
	cout << "Максимальное число: " << maxint(arr, count);
	delete[] arr;
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