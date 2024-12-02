#include <iostream>
#include <locale.h>
using namespace std;

class Calculator {
	double num1, num2;
public:
	double add() { return num1 + num2; }; //метод должен возвращать результат сложения num1 и num2
	double multiply() { return num1 * num2; }; //метод должен возвращать результат перемножения num1 и num2
	double subtract_1_2() { return num2 - num1; }; //метод должен возвращать результат вычитания num2 из num1
	double subtract_2_1() { return num1 - num2; }; // метод должен возвращать результат вычитания num1 из num2
	double divide_1_2() { return num1 / num2; }; //метод должен возвращать результат деления num1 на num2
	double divide_2_1() { return num2 / num1; }; //метод должен возвращать результат деления num2 на num1
	bool set_num1(double num1) { if (num1 != 0) { this->num1 = num1; return true; } else { return false; } }; /*метод должен установить значение поля num1 равное
	значению аргумента num1 в случае, если значение аргумента не равно 0. Возвращает true,
	если установка произошла успешно, в обратном случае false*/
	bool set_num2(double num2) { if (num2 != 0) { this->num2 = num2; return true; } else { return false; } }; /*метод должен установить значение поля num2 равное
	значению аргумента num2 в случае, если значение аргумента не равно 0. Возвращает true,
	если установка произошла успешно, в обратном случае false*/
};
int main() {
	setlocale(LC_ALL, "Rus");
	Calculator calculator;
	double num1, num2;
	while (true) {
		cout << "Введите num1: ";
		cin >> num1;
		while (calculator.set_num1(num1) == false) {
			cout << "Введите num1: ";
			cin >> num1;
		}
		calculator.set_num1(num1);
		cout << "Введите num2: ";
		cin >> num2;
		while (calculator.set_num2(num2) == false) {
			cout << "Введите num2: ";
			cin >> num2;
		}
		calculator.set_num2(num2);

		cout << "num1 + num2 = " << calculator.add() << endl;
		cout << "num1 - num2 = " << calculator.subtract_2_1() << endl;
		cout << "num2 - num1 = " << calculator.subtract_1_2() << endl;
		cout << "num1 * num2 = " << calculator.multiply() << endl;
		cout << "num1 / num2 = " << calculator.divide_1_2() << endl;
		cout << "num2 / num1 = " << calculator.divide_2_1() << endl;
	}
}