#include </Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд3/WorkerPercent.h>

WorkerPercent::WorkerPercent() 
{
	ifstream in("WorkerPecent.txt");
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
		cout << "Введите продажи за месяц" << endl;
		cin >> mounthSells;
		cout << "Введите процент с продаж" << endl;
		cin >> percent;
	}
	else
	{
		in >> name >> fname >> phone >> adress >> mounthSells >> percent;
	}
}

WorkerPercent::~WorkerPercent() 
{
	ofstream out("WorkerPercent.txt");
	out << name << " " << fname << " " << phone << " " << adress << " " << mounthSells << " " << percent;
}

int WorkerPercent::cash() 
{
	return mounthSells/100 * percent;
}
