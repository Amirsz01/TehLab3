#pragma once
#include </Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд3/Worker.h>
class WorkerState : private Worker
{
	int mounthCash;
public:
	WorkerState();
	~WorkerState();
	int cash();
};