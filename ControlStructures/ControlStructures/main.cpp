#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int temperature;	//����������� �������
	cout << "������� ����������� �������: ";
	cin >> temperature;
	if (temperature > 0)
	{
		cout << "�����" << endl;
	}
	else
	{
		cout << "�������" << endl;
	}
}