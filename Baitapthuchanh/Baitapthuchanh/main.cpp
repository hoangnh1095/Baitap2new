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

int HieuRand2so()
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
int TongRand2so()
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

void TinhChuViDienTichHinhChuNhat(int a, int b) 
{
	cout << "Chu vi la : " << (a + b) * 2 << endl;
	cout << "Dien tich la: " << a * b << endl;
}

void TinhChuViDienTichVuong(int a)
{
	cout << "Chu vi la : " << a*4 << endl;
	cout << "Dien tich la: " << a * a << endl;
}

void TinhChuViDienTichHinhTron(int a)
{
	cout << "Chu vi la : " << a *2 *3.14 << endl;
	cout << "Dien tich la: " << a *a *3.14<< endl;
}

int main() {
	int a, b;
	cout << "Nhập a: ";
	cin >> a;
	cout << "Nhập b: ";
	cin >> b;

	int chon;
	cout << "1.Tính a + b " << endl;
	cout << "2.Tính a - b " << endl;
	cout << "3.Tính a * b " << endl;
	cout << "4.Tính a / b " << endl;
	cout << "5.Tính tổng hai số random " << endl;
	cout << "6.Tính hiệu hai số random:" << endl;
	cout << "7.Tính chu vi và diện tích hình chữ nhật" << endl;
	cout << "8.Tính chu vi và diện tích hình vuông" << endl;
	cout << "9.Tính chu vi và diện tích hình tròn" << endl;
	cout << " Nhập lựa chon của bạn :" << endl;
	cin >> chon;

	switch (chon)
	{
	case 1:
		cout<<PhepCong(a , b);
		break;
	case 2:
		cout<<PhepTru(a , b);
		break;
	case 3:
		cout<<PhepNhan(a , b);
		break;
	case 4 :
		cout<<PhepChia(a , b);
		break;
	case 5:
		TongRand2so();
		break;
	case 6:
		HieuRand2so();
		break;
	case 7:
		TinhChuViDienTichHinhChuNhat(a, b);
		break;
	case 8:
		TinhChuViDienTichVuong(a);
		break;
	case 9:
		TinhChuViDienTichVuong(a);
		break;
	default:
		break;
	}

	system("pause");
	return 0;
}