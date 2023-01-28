#include <iomanip>;
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");

	//Ввод пустой строки
	cout << "\n";
	//Ввод числа
	cout << "Пожалуйста, введите время в секундах:  \n";
	int seconds, minutes, hours;

	cin >> seconds;

	minutes = seconds / 60;
	seconds = seconds % 60;
	hours = minutes / 60;
	hours = minutes % 60;

	cout << "Осталось времени: часов - " << hours << "\n";
	cout << "минут - " << minutes << "\n";
	cout << "секунд - " << seconds << "\n";


	return 0;

}