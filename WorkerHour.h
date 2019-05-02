#pragma once
#include </Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд3/Worker.h>
class WorkerHour : private Worker
{
	int hours;
	int traf;
public:
	WorkerHour();
	~WorkerHour();
	int cash();
};
