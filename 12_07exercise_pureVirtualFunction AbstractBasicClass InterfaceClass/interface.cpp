#include<iostream>
using namespace std;

//인터페이스를 배울때는 I를 붙이는 것이 관례
//인터페이스 클래스는 클래스 내부의 함수가 전부 퓨어 버츄얼 펑션일때를 칭하는 것,
class IErrorLog
{
public:
	virtual bool reportError(const char * errorMessage) = 0;
	virtual ~IErrorLog() {}
};

class FileErrorLog : public IErrorLog
{
public:
	bool reportError(const char * errorMessege) override
	{
		cout << "Writing error to a file" << endl;
		return true;
	}
};

class ConsoleErrorLog : public IErrorLog
{
public:
	bool reportError(const char * errorMessege) override
	{
		cout << "Printing error to a console" << endl;
		return true;
	}
};


void doSomething(IErrorLog & log)
{
	log.reportError("Runtime error!!");
}


int main()
{
	FileErrorLog file_log;
	ConsoleErrorLog console_log;

	doSomething(file_log);
	doSomething(console_log);
	
	return 0;
}