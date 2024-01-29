#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x;
	cout << "Программа подсчитывает площади фигур \n 1 - квадрат \n 2 - треугольника \n 3 - выход из программы " << endl;
	cout << "Укажите номер фигуры или выход из программы" << endl;;
	cin >> x;

	switch (x)
	{
	case 1:
	{
		cout << "Введите длину стороны квадрата - ";

		float a;
		cin >> a;

		if (a > 0)
		{
			cout << "s = " << a * a << endl;
		}
		else
		{
			cout << "Квадрат с такой стороной не существует" << endl;
		}

		break;
	}

	case 2:
	{
		cout << "Введите длины сторон треугольника" << endl;

		float a, b, c, p, s;
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		cout << "c = ";
		cin >> c;

		if (a + b > c && a + c > b && b + c > a)
		{
			p = (a + b + c) / 2;
			s = sqrt(p * (p - a) * (p - b) * (p - c));

			cout << "Площадь треугольника " << s << endl;
		}
		else
		{
			cout << "Плоащадь треугольника не существует" << endl;
		}
		break;
	}

	case 3:
	{
		break;
	}

	default:
	{
		cout << "Неверное значение" << endl;
	}

	}
}