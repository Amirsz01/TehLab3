#include </Users/Amirsz/source/repos/�������������/�������������3/WorkerPercent.h>

WorkerPercent::WorkerPercent() 
{
	ifstream in("WorkerPecent.txt");
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
		cout << "������� ������� �� �����" << endl;
		cin >> mounthSells;
		cout << "������� ������� � ������" << endl;
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