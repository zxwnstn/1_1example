#pragma once
#include<iostream>

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value);// �����ڵ� �ű���

	Calc& add(int value); 
	Calc& sub(int value);
	Calc& mult(int value);

	void print();
};
//��� ���Ͽ��� using namespace�� ���ԵǸ� ��Ŭ��� �Ǵ°͵��� ����
//������ �ޱ� ������ ���� ���� �ʴ�.
//�׷��ٸ� using namespace�� ������ ��ߵȴٸ� ��� �ذ��ؾ� �ұ�??
//Calc& Calc::add(int value) { m_value += value; return *this; }; // ���� �̷��Դ� �Ⱦ���. �ſ� ����