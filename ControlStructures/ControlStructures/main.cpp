#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int temperature;	//температура воздуха
	cout << "Введите температуру воздуха: ";
	cin >> temperature;
	if (temperature > 0)
	{
		cout << "Тепло" << endl;
	}
	else
	{
		cout << "Холодно" << endl;
	}
}