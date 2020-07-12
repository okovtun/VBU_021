#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	//cout << (bool)0.0000003 << endl;

	/*char symbol = '@';
	cout << symbol << endl;*/

	/*cout << "short:\n";
	cout << sizeof(short) << endl;
	cout << SHRT_MIN << "..." << SHRT_MAX << endl;
	cout << "\n----------------------\n";

	cout << "long:\n";
	cout << sizeof(long) << endl;
	cout << 0 << "..." << ULONG_MAX << endl;
	cout << LONG_MIN << "..." << LONG_MAX << endl;
	cout << "\n----------------------\n";

	cout << "int:\n";
	cout << sizeof(int) << endl;
	cout << 0 << "..." << UINT_MAX << endl;
	cout << INT_MIN << "..." << INT_MAX << endl;
	cout << "\n----------------------\n";

	cout << "long long:\n";
	cout << sizeof(long long) << endl;
	cout << 0 << "..." << ULLONG_MAX << endl;
	cout << LLONG_MIN << "..." << LLONG_MAX << endl;
	cout << "\n----------------------\n";*/

	/*
	Вещественные типы:
	float
	double
	*/

	/*cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << "..." << FLT_MAX << endl;
	cout << "\n----------------------\n";

	cout << "double:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << "..." << DBL_MAX << endl;
	cout << "\n----------------------\n";*/

	//Объявляем переменные:
	float price_of_cucumbers;	//Цена одного килограмма огурцов
	float weight_of_cucumbers;	//Вес огурцов
	
	//Ввод данных с клавиатуры:
	cout << "Введите цену: "; 
	cin >> price_of_cucumbers;	//Ввод значения переменной с клавиатуры

	cout << "Введите вес: ";
	cin >> weight_of_cucumbers;

	cout << "Цена одного килограмма огуроцов: " << price_of_cucumbers << " грн.\n";
	cout << "Вес огурцов: " << weight_of_cucumbers << " кг.\n";

	float total_price = price_of_cucumbers * weight_of_cucumbers;
	cout << "Общая стоимость огурцов: " << total_price << " грн.\n";
}