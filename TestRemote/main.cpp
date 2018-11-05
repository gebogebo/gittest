#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

class Worker
{
public:
	enum WorkCode : unsigned short
	{
		Success,
		NoAuth,
		Error
	};

	Worker() = default;
	virtual ~Worker() = default;


protected:
	std::string mDb;
};

class MCrypt : public Worker
{
public:
	MCrypt();
	~MCrypt();

protected:

};

MCrypt::MCrypt()
{

}

MCrypt::~MCrypt()
{

}

class abc
{

};

abc* a = NULL;
Worker * g_parse_interface = NULL;

int del_parse_interface();
Worker *CreateWorker();
void DeleteWorker(Worker *&w);

void deleteB(abc* w);

int main()
{
    printf("hello from TestRemote!\n");


	g_parse_interface = CreateWorker();
	if (NULL == g_parse_interface)
	{
		std::cout << "get_parse_interface () error!" << std::endl;
	}

	del_parse_interface();
	del_parse_interface();

	//a = new abc();
	//

	//deleteB(a);
	//deleteB(a);

	//if (a != NULL)
	//{
	//	printf("a = %d", a);
	//	delete a;
	//}
    return 0;
}

void deleteB(abc* w)
{
	if (w != NULL)
	{
		printf("w = %d", w);
		delete w;
	}
	w = NULL;
}

int del_parse_interface()
{
	if (NULL != g_parse_interface)
	{
		DeleteWorker(g_parse_interface);
	}

	return 0;
}

void DeleteWorker(Worker *&w)
{
	if (w != nullptr)
	{
		delete w;
		w = nullptr;
	}
}

Worker *CreateWorker()
{
	return new MCrypt();
}