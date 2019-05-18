#include <iostream>
#include </Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд3/Worker.h>
#include </Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд3/WorkerHour.h>
#include </Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд3/WorkerState.h>
#include </Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд3/WorkerPercent.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	Worker* obj = nullptr;
	int callback;
	while (true)
	{
		system("cls");
		cout << "Произвести расчет зарплаты : " << endl
			<< "1. Работника с почасовой оплатой" << endl
			<< "2. Работника штата" << endl
			<< "3. Работника с процентной ставкой" << endl
			<< "0. Выход" << endl;
		cin >> callback;
		switch (callback)
		{
		case 1:
			if (!obj)
				delete obj;
			obj = new WorkerHour;
			cout << obj->cash() << endl;
			break;
		case 2:
			if (!obj)
				delete obj;
			obj = new WorkerState;
			cout << obj->cash() << endl;
			break;
		case 3:
			if (!obj)
				delete obj;
			obj = new WorkerPercent;
			cout << obj->cash() << endl;
			break;
		case 0:
			delete obj;
			return 0;
		default:
			break;
		}
		system("pause");
	}
	return 0;
}
