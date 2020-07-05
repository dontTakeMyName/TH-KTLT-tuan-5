#include"Header.h"

double bai1(double n)
{
	if (n - 1.0 < 0.0001)
		return 1.0;
	return 1.0 / n + bai1(n - 1);
}

int bai2(int n)
{
	if (n == 1)
		return 1;
	return n * bai2(n - 1);
}

int bai3(int x, int n)
{
	if (n == 1)
		return x;
	return pow(x, n) + bai3(x, n - 1);
}

int bai4(int x, int n)
{
	if (n * 2 + 1 == 1)
		return x;
	return pow(x, 2 * n + 1) + bai4(x, n - 1);
}

double bai5(double x, double n)
{
	if (n - 1.0 < 0.00001)
		return x;
	return pow(x, n) / bai2(n) + bai5(x, n - 1);
}

int bai6(int n)
{
	if (n == 0)
		return 1;
	int s = 0;
	for (int i = 1;i <= n;i++)
	{
		s += i * i * bai6(n - i);
	}
	return s;
}

int bai7(int n)
{
	if (n / 10 == 0)
		return 1;
	return 1 + bai7(n / 10);
}

int bai8(int n)
{
	if (n / 10 == 0)
		return n;
	return n % 10 + bai8(n / 10);
}

int bai9(int n)
{
	if (n < 10)
		return n % 2 != 0 ? 1 : 0;
	else
	{
		return n % 2 != 0 ? 1 + bai9(n / 10) : 0 + bai9(n / 10);
	}
}

bool bai10(int n)
{
	if (n < 10)
		return n % 2 != 0 ? 1 : 0;
	else
	{
		return n % 2 != 0 ? 1 + bai9(n / 10) : 0 + bai9(n / 10);
	}
}

int bai11(int a[], int l, int r)
{
	if (l == r)
		return a[r] % 2 == 0 ? a[r] : 0;
	int mid = (l + r) / 2;
	int dem1 = bai11(a, l, mid);
	int dem2 = bai11(a, mid + 1, r);
	return dem1 + dem2;
}

bool nTo(int n)
{
	if (n < 2)
		return false;
	if (n == 2 || n == 3)
		return true;
	for (int i = 2;i <= sqrt(n);i++)
		if (n % i == 0)
			return false;
	return true;
}

int bai12(int a[], int l, int r)
{
	if (l == r)
		return nTo(a[r]) ? a[r] : 1;
	int mid = (l + r) / 2;
	int dem1 = bai12(a, l, mid);
	int dem2 = bai12(a, mid + 1, r);
	return dem1*dem2;
}


int bai13(int a[], int l, int r)
{
	if (l == r)
		return a[r] < 0 ? a[r] : 1;
	int mid = (l + r) / 2;
	int dem1 = bai13(a, l, mid);
	int dem2 = bai13(a, mid + 1, r);
	return dem1*dem2;
}

bool bai14(int a[], int l, int r)
{
	if (l == r)
		return a[r] > 0 ? false : true;
	int mid = (l + r) / 2;
	bool dem1 = bai14(a, l, mid);
	bool dem2 = bai14(a, mid + 1, r);
	return dem1 && dem2;
}

int bai15(int a[], int l, int r)
{
	if (l == r)
		return a[r];
	int mid = (l + r) / 2;
	int max1 = bai15(a, l, mid);
	int max2 = bai15(a, mid + 1, r);
	return max1 > max2 ? max1 : max2;
}

int bai16(int a[], int l, int r, int x)
{
	if (l == r)
		return a[r] == x ? 1 : 0;
	int mid = (l + r) / 2;
	int dem1 = bai16(a, l, mid , x);
	int dem2 = bai16(a, mid + 1, r, x);
	return dem1 + dem2;
}

int bai17(int a[], int l, int r)
{
	if (l == r)
		return a[r] > 0 ? 1 : 0;
	int mid = (l + r) / 2;
	int dem1 = bai17(a, l, mid);
	int dem2 = bai17(a, mid + 1, r);
	return dem1 + dem2;
}

int bai18(int a[], int l, int r, int n)
{
	if (l == r)
	{
		for (int i = r + 1;i < n;i++)
		{
			if (a[i] == a[r])
				return 0;
		}
		return 1;
	}
	int mid = (l + r) / 2;
	int dem1 = bai18(a, l, mid, n);
	int dem2 = bai18(a, mid + 1, r, n);
	return dem1 + dem2;
}

void nhapMang(int a[], int& n)
{
	cout << "Nhap so luong phan tu ";
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cout << "Phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}