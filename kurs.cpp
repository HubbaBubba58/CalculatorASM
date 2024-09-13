#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#define PI 3.14159265
#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <cmath>
#include <fstream> // ��� ������ � �������
#include <string>
#include <Windows.h>
#include "kur.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	vvod(); //��������

	double a = 0, b = 0, c = 0;
	char d;
	int p = 1, a_copy = 0, b_copy = 0, c_copy = 0;

	//ofstream file("history.txt"); // ����� ��� ���������� (�������� �����������)
	//file.close(); // �������� ������ �� ����������


	while (p != 3) {

		printf("1 - �����������\n2 - �������\n3 - �����\n");
		scanf("%d", &p);
		printf("\n");

		if (p == 1) {

			printf("1 - ��������\n2 - ���������\n3 - ���������\n4 - �������\n5 - ���������� � �������\n6 - ���������� �����\n7 - ���������� ������\n8 - ���������� ��������\n9 - ���������� ��������\n0 - ���������� ����������\n");
			scanf(" %c", &d);

			//while (getchar() != '\n');
			double sin_x;
			double cos_x;
			double tg_x;
			double ctg_x;

			ofstream file("history.txt", ios::app); // ����� ��� ������ (���������� � ����� �����)
			switch (d)
			{
			case '1':
				printf("������� ������ ����������: ");
				scanf("%lf", &a);
				printf("������� ������ ����������: ");
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
				cout << a << " + " << b << " = " << c << endl << endl; // ����� �� �����

				if (file.is_open()) {
					file << a << " + " << b << " = " << c << endl; // ������ � ����
				}
				break;


			case '2':
				printf("������� ������ ����������: ");
				scanf("%lf", &a);
				printf("������� ������ ����������: ");
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
				cout << a << " - " << b << " = " << c << endl << endl; // ����� �� �����

				if (file.is_open()) {
					file << a << " - " << b << " = " << c << endl; // ������ � ����
				}
				break;


			case '3':
				printf("������� ������ ����������: ");
				scanf("%lf", &a);
				printf("������� ������ ����������: ");
				scanf("%lf", &b);

				c = a * b;

				cout << a << " * " << b << " = " << c << endl << endl; // ����� �� �����

				if (file.is_open()) {
					file << a << " * " << b << " = " << c << endl; // ������ � ����
				}
				break;


			case '4':
				printf("������� ������ ����������: ");
				scanf("%lf", &a);
				printf("������� ������ ����������: ");
				scanf("%lf", &b);

				c = a / b;

				cout << a << " : " << b << " = " << c << endl << endl; // ����� �� �����

				if (file.is_open()) {
					file << a << " : " << b << " = " << c << endl; // ������ � ����
				}
				break;


			case '5':
				printf("������ ������: a^b\n");
				printf("������� ���������� a: ");
				scanf("%lf", &a);
				printf("������� ���������� b: ");
				scanf("%lf", &b);

				c = pow(a, b);

				cout << a << "^" << b << " = " << c << endl << endl; // ����� �� �����

				if (file.is_open()) {
					file << a << "^" << b << " = " << c << endl; // ������ � ����
				}
				break;


			case '6':
				printf("������ ������: a^(1/b)\n");
				printf("������� ���������� a: ");
				scanf("%lf", &a);
				printf("������� ���������� b: ");
				scanf("%lf", &b);

				c = pow(a, 1 / b);

				cout << a << "^" << "(1/" << b << ")" << " = " << c << endl << endl; // ����� �� �����

				if (file.is_open()) {
					file << a << "^" << "(1/" << b << ")" << " = " << c << endl; // ������ � ����
				}
				break;


			case '7':
				printf("������ ������: sin(b)\n");
				printf("������� ���������� b: ");
				scanf("%lf", &b);
				sin_x = sin(b);
				c = sin_x;

				cout << "sin(" << b << ")" << " = " << c << endl << endl; // ����� �� �����

				if (file.is_open()) {
					file << "sin(" << b << ")" << " = " << c << endl; // ������ � ����
				}
				break;


			case '8':
				printf("������ ������: cos(b)\n");
				printf("������� ���������� b: ");
				scanf("%lf", &b);
				cos_x = cos(b);

				c = cos_x;

				cout << "cos(" << b << ")" << " = " << c << endl << endl; // ����� �� �����

				if (file.is_open()) {
					file << "cos(" << b << ")" << " = " << c << endl; // ������ � ����
				}
				break;


			case '9':
				printf("������ ������: tg(b)\n");
				printf("������� ���������� b: ");
				scanf("%lf", &b);
				tg_x = tan(b);

				c = tg_x;

				cout << "tg(" << b << ")" << " = " << c << endl << endl; // ����� �� �����

				if (file.is_open()) {
					file << "tg(" << b << ")" << " = " << c << endl; // ������ � ����
				}
				break;


			case '0':
				printf("������ ������: ctg(b)\n");
				printf("������� ���������� b: ");
				scanf("%lf", &b);
				ctg_x = 1 / tan(b);

				c = ctg_x;

				cout << "ctg(" << b << ")" << " = " << c << endl << endl; // ����� �� �����

				if (file.is_open()) {
					file << "ctg(" << b << ")" << " = " << c << endl; // ������ � ����
				}
				break;


			default:
				printf("������\n");
				continue;
			}
			printf("��������� = %lf\n\n", c);
			file.close(); // �������� ������ �� ������
		}

		else
			if (p == 2) {
				string line;
				ifstream file("history.txt"); // �������� ���� ��� ������ �� ����
				if (file.is_open()) {
					while (getline(file, line))
					{
						cout << line << endl;
					}
					cout << endl;
				}
				file.close(); // �������� ������ �� ������
			}

			else
				if (p == 3) break;

	}
}
