#include </Users/Amirsz/source/repos/�������������/�������������3/WorkerHour.h>

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
		cout << "���� ����" << endl;
		system("pause");
		system("cls");
		cout << "������� ���" << endl;
		cin >> this->name;
		cout << "������� �������" << endl;
		cin >> this->fname;
		cout << "������� �������" << endl;
		cin >> this->phone;
		cout << "������� �����" << endl;
		cin >> this->adress;
		cout << "������� ���������� �����" << endl;
		cin >> hours;
		cout << "������� ���� �� ��� ������" << endl;
		cin >> traf;
	}
	else
	{
		in >> name >> fname >> phone >> adress >> hours >> traf;
	}
	in.close();
}
