#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
using namespace std;

enum dninedeli
{
	Monday = 1,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday,

};

int main()
{
	setlocale(LC_ALL, "Rus");
	int nz;
	cout << "������ ����� ������� ";
	cin >> nz;

	switch (nz)
	{
	/*	1.	���� ����������� �����.����������:
		�) ������ �� � ���� ����� 3 � 7; �
		) ������ �� � ���� �����(4 � 8) ��� ����� 9.*/
	case 1:
	{
		
		nz1:
		
		int x,y,z;
		cout << "������ ���� ������� ����� ";
		cin >> x;
		y = x * 10;
		z = x / 10;
		if (x < 10 && x > 100)
		{
			cout << "������ ������ ���� ������� �����";
			goto nz1;
		}
		if ( (x== 7) ||   (z == 3 )|| (z == 7) || ( x == 3))
		{
			cout << "� ��������� ������ ����� 3, 7 " << endl;
		}
		if ((x == 4) || (z == 4) || (z == 8) || (x == 8) || (z == 9) || (x == 9))
		{
			cout << "������ �����  4 , 8 ,  9" << endl;
		}
		break;
	}


/*	2.	���� ����� ����� �� 1 �� 365. ����������,
		����� ���� ������ �������� �� ��� �����, ���� 1 ������ � �����������*/
	case 2:
	{
		int x ;
		cout << "��� ������� �� 1 �� 365 ";
		cin >> x;
		
		enum dninedeli d;
		d = (dninedeli)x;
		switch (d)
		{
		case Monday:
		{
			cout << "Monday" << endl;
		}
			break;
		case Tuesday:
		{
			cout << "Tuesday" << endl;
		}
			break;
		case Wednesday:
		{
			cout << "Wednesday" << endl;
		}
			break;
		case Thursday:
		{
			cout << "Thursday" << endl;
		}
			break;
		case Friday:
		{
			cout << "Friday" << endl;
		}
			break;
		case Saturday:
		{
			cout << "Saturday" << endl;
		}
			break;
		case Sunday:
		{
			cout << "Sunday" << endl;
		}
		default:
			cout << "Monday" << endl;
			cout << "Tuesday" << endl;
			cout << "Wednesday" << endl;
			cout << "Thursday" << endl;
			cout << "Friday" << endl;
			cout << "Saturday" << endl;
			cout << "Sunday" << endl;
			break;
		}

	}



	//3.	���� ����������� �����.����������:
	//a.�������� �� ����� ��� ���� ����������� ������;
	//b.�������� �� ������������ ��� ���� ����������� ������

	case 3:
	{ 
		int x, y, z;
		cout << "������ ����������� ����� ";
		cin >> x;
		if (x >=  100 && x <= 999)
		{
			z = (x / 100)*(x*100/10)*(x*10);
			cout << "������������ ����� ����� ����� " << z << endl;
		}
		else if ((x >= 100) && (x <= 999))
		{
			cout << "  ������������  ���� ����������� �����" << x << endl;
		}
		break;
	}

	/*4.	5.	�������� ���������, ������� ��� ����� ����� � ��������� �� 1 �� 20 ��������� � ���� ����� "�����" � ���������� �����. ��������, 1 �����, 2 �����, 5 ������.*/


	case 5:
	{
		int a;
	
		cout << "������ ����� ";
		cin >> a;
		switch (a)
		{
		case 1:
			cout << " ����� "<<a<< endl;
			break;
		case 2:
		case 3:
		case 4:
			cout << " ����� " <<a<< endl;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			cout << " ������ " <<a<< endl;
			break;
		

		}
			break;
		


	}


	//6.	������ ����� �� 1 �� 31. ���������� ���������(���������) 
	//	���� ���������� ��� ���������(������ ����� �������� 28 ����), 
	//	���� ��������� ���������� ���� 27 �������.
	case 6:
	{
		int k;
		cout << "������� ����� �� 1 �� 31 : ";
		cin >> k;
		int l = 28;
		int pp = 27;
		int sp = 1 + pp - 31;
		int sn = 1 + pp - 31 + 1;
		int ssp = sp + l - 31;
		int ossp = 31 - k + ssp;

		if (1 < k && k < 24)
		{
			int op = k - sp;
			int on = k - sn;
			cout << "�������� �� ���������� " << op << endl;
			cout << "�������� �� ��������� " << on << endl;
		}
		else if (k  == 24)
		{
			int on = k - sn;
			cout << "������� ���������� " << endl;
			cout << "�� ��������� " << on << endl;
		}
		else if (k >= 25)
		{
			cout << "������� ��������� " << endl;
			cout << "�� ���������� " << ossp << endl;
		}
		else if (k  > 25 && k < 31)
		{
			int ossn = ossp + 1;
			cout << "�������� �� ���������� " << ossp << endl;
			cout << "�������� �� ��������� " << ossn << endl;
		}
	}


	//1.	�������� ���������, ������� �� ���� ������ � ������������ �����������
	//	��������� �� ��������� � ��������� ������� �� ����� : ������ - ��� 7272,
	//	25�����; ������� - ��� 7252, 18�����; ������ - ��� 7172 13�����; ����� - ��� 7292, 11�����.
	case 7:
	{
		int a, b,l;
		cout << "������ ��� ������� ������� ������������� ��� :������ - ��� 7272, ������� - ��� 7252,  ������ - ��� 7172, ����� - ��� 7292   ";
		cin >> a;
		cout << "������������ �����������";
		cin >> b;
		switch (a)
		{
		case 7272:
		{
			l = b * 25;
			cout << "����������" << l << endl;
			break;
		}
		case 7252:
		{
			l = b * 18;
			cout << "����������" << l << endl;
			break;
		}
		case 7172:
		{
			l = b * 13;
			cout << "����������" << l << endl;
			break;
		}
		case 7292:
		{
			l = b * 11;
			cout << "����������" << l << endl;
			break;
		}


			break;
		}

		break;

	}






		default:
		{
			cout << "������ ������� ���� ��������� ������" << endl;
		}
		break;
}
	system("pause");
	//getch();
}



	
	

