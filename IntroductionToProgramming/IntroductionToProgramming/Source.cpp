#include<iostream>	//Потоки Ввода/Вывода cin/cout
using namespace std;//Говорит компилятору использовать 
					//пространство имен (namespace) std.
					//В этом пространстве объявлены потоки cin/cout.

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "\t\t\t\tHello \"World\"\n";
	cout << "\t\t\t\tHello there\n";
	cout << "C:\\Windows\\System32\\\n";
	cout << "Привет Мир!\n";
}

//Ctrl+F7 - Компиляция.
//Ctrl+F5 - Запуск.