#pragma once
#include </Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд3/Worker.h>
class WorkerPercent : public Worker
{
	int mounthSells;
	int percent;
public:
	WorkerPercent();
	~WorkerPercent();
	int cash();
};
