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
	cout << "Ведиет номер задания ";
	cin >> nz;

	switch (nz)
	{
	/*	1.	Дано двухзначное число.Определить:
		а) входят ли в него цифры 3 и 7; б
		) входят ли в него цифры(4 и 8) или цифра 9.*/
	case 1:
	{
		
		nz1:
		
		int x,y,z;
		cout << "Ведите двух значное число ";
		cin >> x;
		y = x * 10;
		z = x / 10;
		if (x < 10 && x > 100)
		{
			cout << "Ведите заново двух значное число";
			goto nz1;
		}
		if ( (x== 7) ||   (z == 3 )|| (z == 7) || ( x == 3))
		{
			cout << "В прмежуток входят числа 3, 7 " << endl;
		}
		if ((x == 4) || (z == 4) || (z == 8) || (x == 8) || (z == 9) || (x == 9))
		{
			cout << "входят цифры  4 , 8 ,  9" << endl;
		}
		break;
	}


/*	2.	Дано целое число от 1 до 365. Определить,
		какой день недели выпадает на это число, если 1 января – понедельник*/
	case 2:
	{
		int x ;
		cout << "Дни недедли от 1 до 365 ";
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



	//3.	Дано трехзначное число.Определить:
	//a.является ли сумма его цифр двухзначным числом;
	//b.является ли произведение его цифр трехзначным числом

	case 3:
	{ 
		int x, y, z;
		cout << "Ведите трехзначное число ";
		cin >> x;
		if (x >=  100 && x <= 999)
		{
			z = (x / 100)*(x*100/10)*(x*10);
			cout << "Произведение суммы чисел равно " << z << endl;
		}
		else if ((x >= 100) && (x <= 999))
		{
			cout << "  произведение  цифр трехзначное число" << x << endl;
		}
		break;
	}

	/*4.	5.	Написать программу, которая при вводе числа в диапазоне от 1 до 20 добавляет к нему слово "рубль" в правильной форме. Например, 1 рубль, 2 рубля, 5 рублей.*/


	case 5:
	{
		int a;
	
		cout << "Ведите число ";
		cin >> a;
		switch (a)
		{
		case 1:
			cout << " рубль "<<a<< endl;
			break;
		case 2:
		case 3:
		case 4:
			cout << " рубля " <<a<< endl;
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
			cout << " рублей " <<a<< endl;
			break;
		

		}
			break;
		


	}


	//6.	Ввести число от 1 до 31. Определить ближайшую(следующую) 
	//	дату полнолуния или новолуния(лунных месяц содержит 28 дней), 
	//	если последнее полнолуние было 27 августа.
	case 6:
	{
		int k;
		cout << "Введите число от 1 до 31 : ";
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
			cout << "Осталось до полнолуния " << op << endl;
			cout << "Осталось до новолуния " << on << endl;
		}
		else if (k  == 24)
		{
			int on = k - sn;
			cout << "Сегодня полнолуние " << endl;
			cout << "До новолуния " << on << endl;
		}
		else if (k >= 25)
		{
			cout << "Сегодня новолуние " << endl;
			cout << "До полнолуния " << ossp << endl;
		}
		else if (k  > 25 && k < 31)
		{
			int ossn = ossp + 1;
			cout << "Осталось до полнолуния " << ossp << endl;
			cout << "Осталось до новолуния " << ossn << endl;
		}
	}


	//1.	Написать программу, которая по коду города и длительности переговоров
	//	вычисляет их стоимость и результат выводит на экран : Алматы - код 7272,
	//	25тенге; Шымкент - код 7252, 18тенге; Астана - код 7172 13тенге; Актау - код 7292, 11тенге.
	case 7:
	{
		int a, b,l;
		cout << "ведите код городов которые предоставлены вам :Алматы - код 7272, Шымкент - код 7252,  Астана - код 7172, Актау - код 7292   ";
		cin >> a;
		cout << "длительности переговоров";
		cin >> b;
		switch (a)
		{
		case 7272:
		{
			l = b * 25;
			cout << "Стоисотсть" << l << endl;
			break;
		}
		case 7252:
		{
			l = b * 18;
			cout << "Стоисотсть" << l << endl;
			break;
		}
		case 7172:
		{
			l = b * 13;
			cout << "Стоисотсть" << l << endl;
			break;
		}
		case 7292:
		{
			l = b * 11;
			cout << "Стоисотсть" << l << endl;
			break;
		}


			break;
		}

		break;

	}






		default:
		{
			cout << "Такого задания нету повторите запрос" << endl;
		}
		break;
}
	system("pause");
	//getch();
}



	
	

