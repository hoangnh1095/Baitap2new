#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int PhepCong(int a, int b)
{
	return a + b;
}

int PhepTru(int a, int b)
{
	return a - b;
}

int PhepNhan(int a, int b)
{
	return a * b;
}

int PhepChia(int a, int b)
{
	return a / b;
}

int HieuRand2so(int a, int b)
{
	srand(time(NULL));
	int a = rand() % (100 - 0 + 1);
	int b = rand() % (100 - 0 + 1);
	int hieu = a - b;
	int kq;
	cout << "Hieu cua " << a << " - " << b << "la = ? ";
	cin >> kq;
	if (hieu == kq)
	{
		cout << " Ket qua nhap vao la DUNG!!";
	}
	else
	{
		cout << "Ket qua nhap vao la SAI!!";
	}
	return hieu;
}
int TongRand2so(int a, int b)
{
	srand(time(NULL));
	int a = rand() % (100 - 0 + 1);
	int b = rand() % (100 - 0 + 1);
	int tong = a + b;
	int kq;
	cout << "Tong cua " << a << " + " << b << "la = ? ";
	cin >> kq;
	if (tong == kq)
	{
		cout << " Ket qua nhap vao la DUNG!!";
	}
	else
	{
		cout << "Ket qua nhap vao la SAI!!";
	}
	return tong;
}
