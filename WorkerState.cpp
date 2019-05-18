#include </Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд3/WorkerState.h>

int WorkerState::cash()
{
	return mounthCash;
}

WorkerState::WorkerState()
{
	ifstream in("WorkerState.txt");
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
		cout << "Введите месячную зарплату" << endl;
		cin >> mounthCash;
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
		in >> mounthCash;
	}
	in.close();
}

WorkerState::~WorkerState()
{
	ofstream out("WorkerState.txt");
	out << getData(1) << " " << getData(2) << " " << getData(3) << " " << getData(4) << " " << mounthCash;
	out.close();
}
