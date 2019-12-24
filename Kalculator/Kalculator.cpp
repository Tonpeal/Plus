#include <iostream>
#include <fstream>
#include <istream>
#include <string>
#include <math.h>
using namespace std; 
int main()
{
	setlocale(0, "");
	int parametr;
	double x, y, z, n, p;
	std::cout << "Выберите действие: 1. Сложение 2.вычитание 3.умножение 4.деление 5. Корень n-й степени" << endl;
	std::cin >> parametr;
	switch (parametr)
	{
	case 1:
		cout << "Введите числа \n";
		cin >> x >> y;
		z = x + y;
		cout << "Сумма чисел равна: \n" << z;
		break;
	case 2:
		cout << "Введите числа \n";
		cin >> x >> y;
		z = x - y;
		cout << "Разность чисел равна: \n" << z;
		break;
	case 3:
		cout << "Введите числа \n";
		cin >> x >> y;
		z = x * y;
		cout << "Произведение чисел равно: \n" << z;
		break;
	case 4:
		cout << "Введите числа \n";
		cin >> x >> y;
		z = x / y;
		cout << "Деление чисел равно: \n" << z;
		break;
	case 5:
		cout << "Введите степень корня \n";
		cin >> n;
		cout << "Введите подкоренное выражение \n";
		cin >> p;
		z = pow(p, (1 / n));
		break;
	default:
		cout << "Вы долбоеб, попробуйсте снова \n";
		break;
	}
	system("pause");
		return 0;
}