#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
void ChuyenThapPhanSangNhiPhan (int a[],int n,int x)
{
	for (int i = 0;i<n;i++)
	{
		int kq = x/2;
		a[i] = x%2;
		x = x/2;
	}
}
void xuat (int a[],int n)
{
	for(int i = n-1;i>=0;i--)
	{
		cout << a[i];
	}
}
void nhap(int a[],int &n,int &x,int &y)
{
	cout << "Nhap so thap phan thu nhat: ";
	cin >> x;
	cout << "Nhap so thap phan thu hai: ";
	cin>> y;
}
void Bu1 (int a[],int n)
{
	for (int i=0;i<n;i++)
		a[i] =! a[i];
}
void Bu2 (int a[],int n)
{
	for (int i = n-1;i>=0;i--)
	{
		if (a[i] ==1)
			a[i] = 0;
		else 
		{
			a[i] = 1;
			break;
		}
	}
}
int main ()
{
	int x,y,a[100],b[100];
	int n = 8;
	nhap (a,n,x,y);
	ChuyenThapPhanSangNhiPhan (a,n,x);
	cout << "Dang nhi phan cua X: \t";
	xuat(a,n);
	cout << endl;
	ChuyenThapPhanSangNhiPhan (a,n,y);
	cout << "Dang nhi phan cua Y: \t";
	xuat(a,n);
	cout << endl;
	getch();
}
