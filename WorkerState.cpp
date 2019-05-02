#include </Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд3/WorkerState.h>

int WorkerState::cash()
{
	return mounthCash;
}

WorkerState::WorkerState()
{
	ifstream in("WorkerState.txt");
	if (!in || is_empty(in))
	{
		cout << "Файл Пуст" << endl;
		system("pause");
		system("cls");
		cout << "Введите Имя" << endl;
		cin >> this->name;
		cout << "Введите Фамилию" << endl;
		cin >> this->fname;
		cout << "Введите Телефон" << endl;
		cin >> this->phone;
		cout << "Введите Адрес" << endl;
		cin >> this->adress;
		cout << "Введите месячную заплату" << endl;
		cin >> mounthCash;
	}
	else
	{
		in >> name >> fname >> phone >> adress >> mounthCash;
	}
}

WorkerState::~WorkerState()
{
	ofstream out("WorkerState.txt");
	out << name << " " << fname << " " << phone << " " << adress << " " << mounthCash;
}
