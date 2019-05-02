#include <iostream>
#include </Users/Amirsz/source/repos/�������������/�������������3/Worker.h>
#include </Users/Amirsz/source/repos/�������������/�������������3/WorkerHour.h>
#include </Users/Amirsz/source/repos/�������������/�������������3/WorkerState.h>
#include </Users/Amirsz/source/repos/�������������/�������������3/WorkerPercent.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	WorkerHour *a = nullptr;
	WorkerState *b = nullptr;
	WorkerPercent *c = nullptr;
	int callback;
	while (true)
	{
		system("cls");
		cout << "���������� ������ �������� : " << endl
			<< "1. ��������� � ��������� �������" << endl
			<< "2. ��������� �����" << endl
			<< "3. ��������� � ���������� �������" << endl
			<< "0. �����" << endl;
		cin >> callback;
		switch (callback)
		{
		case 1:
			if (!a)
				a = new WorkerHour;
			cout << a->cash() << endl;
			break;
		case 2:
			if (!b)
				b = new WorkerState;
			cout << b->cash() << endl;
			break;
		case 3:
			if (!c)
				c = new WorkerPercent;
			cout << c->cash() << endl;
			break;
		case 0:
			delete a;
			delete b;
			delete c;
			return 0;
		default:
			break;
		}
		system("pause");
	}
	return 0;
}