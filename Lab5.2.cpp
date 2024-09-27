//1 - й спосіб : void - функції
// Лабораторна робота № 5.2
//eps = 0.000001
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void S(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);
int main()
{
	double xp, xk, x, dx, eps, s = 0;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-----------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(10) << "log(x) " << " |"
		<< setw(7) << "S " << "    |"
		<< setw(5) << "n " << " |"
		<< endl;
	cout << "-----------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		S(x, eps, n, s);
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << log(x) << " |"
			<< setw(10) << setprecision(5) << s << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-----------------------------------------" << endl;
	return 0;
}
void S(const double x, const double eps, int& n, double& s)
{
	n = 0; // вираз залежить від умови завдання варіанту
	double a = (x - 1) / x; // вираз залежить від умови завдання варіанту
	s = a;
	do {
		n++;
		A(x, n, a);
		s += a;
	} while (abs(a) >= eps);
}

void A(const double x, const int n, double& a)
{
	double R = (n * (x - 1)) / ((n + 1) * x); // вираз залежить від умови завдання варіанту
	a *= R;
}


//2 - й спосіб : double - функції
// Лабораторна робота № 5.2
//eps = 0.000001

//double S2(const double x, const double eps, int& n, double s);
//double A2(const double x, const int n, double a);
//int main()
//{
//	double xp, xk, x, dx, eps, s = 0;
//	int n = 0;
//	cout << "xp = "; cin >> xp;
//	cout << "xk = "; cin >> xk;
//	cout << "dx = "; cin >> dx;
//	cout << "eps = "; cin >> eps;
//	cout << fixed;
//	cout << "-----------------------------------------" << endl;
//	cout << "|" << setw(5) << "x" << "   |"
//		<< setw(10) << "log(x) " << " |"
//		<< setw(7) << "S " << "    |"
//		<< setw(5) << "n " << " |"
//		<< endl;
//	cout << "-----------------------------------------" << endl;
//	x = xp;
//	while (x <= xk)
//	{
//		s = S2(x, eps, n, s);
//		cout << "|" << setw(7) << setprecision(2) << x << " |"
//			<< setw(10) << setprecision(5) << log(x) << " |"
//			<< setw(10) << setprecision(5) << s << " |"
//			<< setw(5) << n << " |"
//			<< endl;
//		x += dx;
//	}
//	cout << "-----------------------------------------" << endl;
//	return 0;
//}
//double S2(const double x, const double eps, int& n, double s)
//{
//	n = 0; // вираз залежить від умови завдання варіанту
//	double a = (x - 1) / x; // вираз залежить від умови завдання варіанту
//	s = a;
//	do {
//		n++;
//		a = A2(x, n, a);
//		s += a;
//	} while (abs(a) >= eps);
//	return s;
//}
//double A2(const double x, const int n, double a)
//{
//	double R = (n * (x - 1)) / ((n + 1) * x); // вираз залежить від умови завдання варіанту
//	a *= R;
//	return a;
//}