#include <iomanip>;
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");

	//���� ������ ������
	cout << "\n";
	//���� �����
	cout << "����������, ������� ����� � ��������:  \n";
	int seconds, minutes, hours;

	cin >> seconds;

	minutes = seconds / 60;
	seconds = seconds % 60;
	hours = minutes / 60;
	hours = minutes % 60;

	cout << "�������� �������: ����� - " << hours << "\n";
	cout << "����� - " << minutes << "\n";
	cout << "������ - " << seconds << "\n";


	return 0;

}