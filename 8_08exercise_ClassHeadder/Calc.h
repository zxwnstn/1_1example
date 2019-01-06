#pragma once
#include<iostream>

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value);// 생성자도 옮기자

	Calc& add(int value); 
	Calc& sub(int value);
	Calc& mult(int value);

	void print();
};
//헤더 파일에서 using namespace를 쓰게되면 인클루드 되는것들이 전부
//영향을 받기 때문에 별로 좋지 않다.
//그렇다면 using namespace를 여러개 써야된다면 어떻게 해결해야 할까??
//Calc& Calc::add(int value) { m_value += value; return *this; }; // 보통 이렇게는 안쓴다. 매우 불편