#include </Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд3/WorkerHour.h>

int WorkerHour::cash()
{
	return hours * traf;
}

WorkerHour::~WorkerHour()
{
	ofstream out("WorkerHour.txt");
	out << getData(1) << " " << getData(2) << " " << getData(3) << " " << getData(4) << " " << hours << " " << traf;
	out.close();
}

WorkerHour::WorkerHour()
{
	ifstream in("WorkerHour.txt");
	string callback;
	int flag;
	cout << "Ввести вручную или загрузить из файла? 1/0" << endl;
	cin >> flag;
	if (!flag)
	{
		if (!in || is_empty(in)) 
		{
			cout << "Файл Пуст" << endl;
			system("pause");
			flag = 1;
		}
	}
	if (flag)
	{
		system("cls");
		cout << "Введите Имя" << endl;
		cin >> callback;
		setData(1, callback);
		cout << "Введите Фамилию" << endl;
		cin >> callback;
		setData(2, callback);
		cout << "Введите Телефон" << endl;
		cin >> callback;
		setData(3, callback);
		cout << "Введите Адрес" << endl;
		cin >> callback;
		setData(4, callback);
		cout << "Введите количество часов" << endl;
		cin >> hours;
		cout << "Введите цену за час работы" << endl;
		cin >> traf;
	}
	else 
	{
		in >> callback;
		setData(1, callback);
		in >> callback;
		setData(2, callback);
		in >> callback;
		setData(3, callback);
		in >> callback;
		setData(4, callback);
		in >> hours >> traf;
	}
	in.close();
}
