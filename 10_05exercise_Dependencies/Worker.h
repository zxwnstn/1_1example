#pragma once


class Worker
{
public:
	void doSomething();
	//실제 doSomething에서는 Timer클래스가 쓰이지만
	//Worker의 입장에서는 그것을 알필요 조차 없다.
};