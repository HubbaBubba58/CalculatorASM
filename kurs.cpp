#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#define PI 3.14159265
#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <cmath>
#include <fstream> // для работы с файлами
#include <string>
#include <Windows.h>
#include "kur.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	vvod(); //заставка

	double a = 0, b = 0, c = 0;
	char d;
	int p = 1, a_copy = 0, b_copy = 0, c_copy = 0;

	//ofstream file("history.txt"); // поток для перезаписи (удаление содержимого)
	//file.close(); // закрытие потока на перезапись


	while (p != 3) {

		printf("1 - калькулятор\n2 - история\n3 - выход\n");
		scanf("%d", &p);
		printf("\n");

		if (p == 1) {

			printf("1 - сложение\n2 - вычитание\n3 - умножение\n4 - деление\n5 - возведение в степень\n6 - извлечение корня\n7 - вычисление синуса\n8 - вычисление косинуса\n9 - вычисление тангенса\n0 - вычисление котангенса\n");
			scanf(" %c", &d);

			//while (getchar() != '\n');
			double sin_x;
			double cos_x;
			double tg_x;
			double ctg_x;

			ofstream file("history.txt", ios::app); // поток для записи (дописывает в конец файла)
			switch (d)
			{
			case '1':
				printf("Введите первую переменную: ");
				scanf("%lf", &a);
				printf("Введите вторую переменную: ");
				scanf("%lf", &b);
				a_copy = a;
				b_copy = b;
				c_copy = c;
				//c = a + b;
				_asm
				{
					mov eax, a_copy
					mov ebx, b_copy
					add eax, ebx
					mov c_copy, eax
				}
				c = c_copy;
				cout << a << " + " << b << " = " << c << endl << endl; // Вывод на экран

				if (file.is_open()) {
					file << a << " + " << b << " = " << c << endl; // Запись в файл
				}
				break;


			case '2':
				printf("Введите первую переменную: ");
				scanf("%lf", &a);
				printf("Введите вторую переменную: ");
				scanf("%lf", &b);
				a_copy = a;
				b_copy = b;
				c_copy = c;
				//c = a - b;
				_asm
				{
					mov eax, a_copy
					mov ebx, b_copy
					sub eax, ebx
					mov c_copy, eax
				}
				c = c_copy;
				cout << a << " - " << b << " = " << c << endl << endl; // Вывод на экран

				if (file.is_open()) {
					file << a << " - " << b << " = " << c << endl; // Запись в файл
				}
				break;


			case '3':
				printf("Введите первую переменную: ");
				scanf("%lf", &a);
				printf("Введите вторую переменную: ");
				scanf("%lf", &b);

				c = a * b;

				cout << a << " * " << b << " = " << c << endl << endl; // Вывод на экран

				if (file.is_open()) {
					file << a << " * " << b << " = " << c << endl; // Запись в файл
				}
				break;


			case '4':
				printf("Введите первую переменную: ");
				scanf("%lf", &a);
				printf("Введите вторую переменную: ");
				scanf("%lf", &b);

				c = a / b;

				cout << a << " : " << b << " = " << c << endl << endl; // Вывод на экран

				if (file.is_open()) {
					file << a << " : " << b << " = " << c << endl; // Запись в файл
				}
				break;


			case '5':
				printf("Формат записи: a^b\n");
				printf("Введите переменную a: ");
				scanf("%lf", &a);
				printf("Введите переменную b: ");
				scanf("%lf", &b);

				c = pow(a, b);

				cout << a << "^" << b << " = " << c << endl << endl; // Вывод на экран

				if (file.is_open()) {
					file << a << "^" << b << " = " << c << endl; // Запись в файл
				}
				break;


			case '6':
				printf("Формат записи: a^(1/b)\n");
				printf("Введите переменную a: ");
				scanf("%lf", &a);
				printf("Введите переменную b: ");
				scanf("%lf", &b);

				c = pow(a, 1 / b);

				cout << a << "^" << "(1/" << b << ")" << " = " << c << endl << endl; // Вывод на экран

				if (file.is_open()) {
					file << a << "^" << "(1/" << b << ")" << " = " << c << endl; // Запись в файл
				}
				break;


			case '7':
				printf("Формат записи: sin(b)\n");
				printf("Введите переменную b: ");
				scanf("%lf", &b);
				sin_x = sin(b);
				c = sin_x;

				cout << "sin(" << b << ")" << " = " << c << endl << endl; // Вывод на экран

				if (file.is_open()) {
					file << "sin(" << b << ")" << " = " << c << endl; // Запись в файл
				}
				break;


			case '8':
				printf("Формат записи: cos(b)\n");
				printf("Введите переменную b: ");
				scanf("%lf", &b);
				cos_x = cos(b);

				c = cos_x;

				cout << "cos(" << b << ")" << " = " << c << endl << endl; // Вывод на экран

				if (file.is_open()) {
					file << "cos(" << b << ")" << " = " << c << endl; // Запись в файл
				}
				break;


			case '9':
				printf("Формат записи: tg(b)\n");
				printf("Введите переменную b: ");
				scanf("%lf", &b);
				tg_x = tan(b);

				c = tg_x;

				cout << "tg(" << b << ")" << " = " << c << endl << endl; // Вывод на экран

				if (file.is_open()) {
					file << "tg(" << b << ")" << " = " << c << endl; // Запись в файл
				}
				break;


			case '0':
				printf("Формат записи: ctg(b)\n");
				printf("Введите переменную b: ");
				scanf("%lf", &b);
				ctg_x = 1 / tan(b);

				c = ctg_x;

				cout << "ctg(" << b << ")" << " = " << c << endl << endl; // Вывод на экран

				if (file.is_open()) {
					file << "ctg(" << b << ")" << " = " << c << endl; // Запись в файл
				}
				break;


			default:
				printf("Ошибка\n");
				continue;
			}
			printf("Результат = %lf\n\n", c);
			file.close(); // закрытие потока на запись
		}

		else
			if (p == 2) {
				string line;
				ifstream file("history.txt"); // окрываем файл для чтения из него
				if (file.is_open()) {
					while (getline(file, line))
					{
						cout << line << endl;
					}
					cout << endl;
				}
				file.close(); // закрытие потока на чтение
			}

			else
				if (p == 3) break;

	}
}
