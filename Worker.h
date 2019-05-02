#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Worker
{
public:
	string name;
	string fname;
	string phone;
	string adress;
	Worker();
	virtual ~Worker();
	virtual int cash();
	bool is_empty(ifstream& pFile);
};
