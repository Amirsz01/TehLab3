#include </Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд3/WorkerHour.h>

int WorkerHour::cash()
{
	return hours * traf;
}

WorkerHour::~WorkerHour()
{
	ofstream out("WorkerHour.txt");
	out << name << " " << fname << " " << phone << " " << adress << " " << hours << " " << traf;
}

WorkerHour::WorkerHour()
{
	ifstream in("WorkerHour.txt");
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
		cout << "Введите количество часов" << endl;
		cin >> hours;
		cout << "Введите цену за час работы" << endl;
		cin >> traf;
	}
	else
	{
		in >> name >> fname >> phone >> adress >> hours >> traf;
	}
	in.close();
}
