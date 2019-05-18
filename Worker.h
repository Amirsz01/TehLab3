#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Worker
{
	string name;
	string fname;
	string phone;
	string adress;
public:
	Worker();
	string getData(int data);
	void setData(int data, string sData);
	virtual ~Worker();
	virtual int cash();
	bool is_empty(ifstream& pFile);
};
