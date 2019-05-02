#include </Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд3/Worker.h>

Worker::Worker()
{

}

Worker::~Worker()
{

}

int Worker::cash()
{
	return 0;
}

bool Worker::is_empty(ifstream& pFile)
{
	return pFile.peek() == -1;
}