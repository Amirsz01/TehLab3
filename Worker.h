#include </Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд3/Worker.h>

Worker::Worker()
{

}

string Worker::getData(int data)
{
	switch (data)
	{
	case 1:
		return name;
		break;
	case 2:
		return fname;
		break;
	case 3:
		return phone;
		break;
	case 4:
		return adress;
		break;
	}
}

void Worker::setData(int data, string sData)
{
	switch (data)
	{
	case 1:
		name = sData;
		break;
	case 2:
		fname = sData;
		break;
	case 3:
		phone = sData;
		break;
	case 4:
		adress = sData;
		break;
	default:
		break;
	}
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
