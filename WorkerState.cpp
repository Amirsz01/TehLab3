#include </Users/Amirsz/source/repos/�������������/�������������3/WorkerState.h>

int WorkerState::cash()
{
	return mounthCash;
}

WorkerState::WorkerState()
{
	ifstream in("WorkerState.txt");
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
		cout << "������� �������� �������" << endl;
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