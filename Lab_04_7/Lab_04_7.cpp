// Lab_04_7.cpp
// ������� ��������
// ����������� ������ No 4.7
// ���������� ���� ���� ������� �� ��������� ����������� ����� �� ����������� �����������
// ������ 12

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double xp, xk, x, dx, eps, a = 0, R = 0, S = 0, pi = 4 * atan(1.);
	int n = 0;
	cout << "xp = "; cin >> xp; //� ���������
	cout << "xk = "; cin >> xk; //� ������
	cout << "dx = "; cin >> dx; //���� �
	cout << "eps = "; cin >> eps; //�������
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "arctg(x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	x = xp;

	while (x <= xk) {
		n = 0;
		a = -1/x;
		S = a;

		do {
			n++;
			R = -(2 * n - 1.) / ((2 * n + 1) * x * x);
			a *= R;
			S += a;
		} while (abs(a) >= eps);
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << atan(x) << " |"
			<< setw(10) << setprecision(5) << S + pi / 2 << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	cin >> xp;
	return 0;
}
