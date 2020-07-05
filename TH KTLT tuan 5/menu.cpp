#include"Header.h"


void menu(int& k)
{

	cout << "Nhap bai (0 de thoat): ";
	cin >> k;
	do
	{

		int a[100];
		double n;
		int x;

		int so;

		switch (k)
		{

		case 1:
		{
			cout << "Nhap n: ";
			cin >> n;
			cout << "Ket qua day so ";
			cout << "bai 1: " << bai1(n) << endl;
			break;
		}
		n = (int)n;
		case 2:
		{
			cout << "Nhap n: ";
			cin >> n;
			cout << "Ket qua day so ";
			cout << "bai 2: " << bai2(n) << endl;
			break;
		}
		case 3:
		{
			cout << "Nhap n: ";
			cin >> n;
			cout << "Nhap x: ";
			cin >> x;
			cout << "Ket qua day so ";
			cout << "bai 3: " << bai3(x, n) << endl;
			break;
		}
		case 4:
		{
			cout << "Nhap n: ";
			cin >> n;
			cout << "Nhap x: ";
			cin >> x;
			cout << "Ket qua day so ";
			cout << "bai 4: " << bai4(x, n) << endl;
			break;
		}
		case 5:
		{
			cout << "Nhap n: ";
			cin >> n;
			cout << "Nhap x: ";
			cin >> x;
			cout << "Ket qua day so ";
			cout << "bai 5: " << bai5((double)x, (double)n) << endl;
			break;
		}
		case 6:
		{
			cout << "Nhap n: ";
			cin >> n;
			cout << "Ket qua day so ";
			cout << "bai 6: " << bai6(n) << endl;
			break;
		}
		case 7:
		{
			cout << "Nhap n: ";
			cin >> n;
			cout << "So luong chu so cua so nguyen duong " << n << ": " << bai7(n) << endl;
			break;
		}
		case 8:
		{
			cout << "Nhap n: ";
			cin >> n;
			cout << "Tong cac chu so cua so nguyen duong " << n << ": " << bai8(n) << endl;
			break;
		}
		case 9:
		{
			cout << "Nhap n: ";
			cin >> n;
			cout << "So luong chu so le cua so nguyen duong " << n << ": " << bai9(n) << endl;
			break;
		}
		case 10:
		{
			cout << "Nhap n: ";
			cin >> n;
			if (!bai10(n))
			{
				cout << n << " chua toan chu so chan" << endl;
			}
			else
			{
				cout << n << " khong chi chua chu so chan " << endl;
			}
			break;
		}
		case 11:
		{
			nhapMang(a, so);
			cout << "Tong cac phan tu chan trong mang: " << bai11(a, 0, so - 1) << endl;
			break;
		}
		case 12:
		{
			nhapMang(a, so);
			cout << "Tich cac so nguyen to trong mang: " << bai12(a, 0, so - 1) << endl;
			break;
		}
		case 13:
		{
			nhapMang(a, so);
			cout << "Tich cac so am trong mang: " << bai13(a, 0, so - 1) << endl;
			break;
		}
		case 14:
		{
			nhapMang(a, so);
			if (bai14(a, 0, so - 1))
			{
				cout << "Mang toan gia tri am" << endl;
			}
			else
			{
				cout << "Mang khong chi co gia tri am" << endl;
			}
			break;
		}
		case 15:
		{
			nhapMang(a, so);
			cout << "Gia tri lon nhat trong mang: " << bai15(a, 0, so - 1) << endl;
			break;
		}
		case 16:
		{
			nhapMang(a, so);
			cout << "Nhap x: ";
			cin >> x;
			cout << "So phan tu trong mang bang " << x << ": " << bai16(a, 0, so - 1, x) << endl;
			break;
		}
		case 17:
		{
			nhapMang(a, so);
			cout << "So luong gia tri duong trong mang: " << bai17(a, 0, so - 1) << endl;
			break;
		}
		case 18:
		{
			nhapMang(a, so);
			cout << "So luong gia tri phan biet trong mang: " << bai18(a, 0, so - 1, so) << endl;
			break;
		}


		}
		cout << endl;
		cout << "Nhap bai (0 de thoat): ";
		cin >> k;
	} while (k < 19 && k>0);

}