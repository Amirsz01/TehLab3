#pragma once
#include </Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд3/Worker.h>
class WorkerHour : public Worker
{
	int hours;
	int traf;
public:
	WorkerHour();
	~WorkerHour();
	int cash();
};
