## �Լ� �����ε�
���� �̸��� �Լ� ������ ����ϱ�

###
	#include<iostream>
	#include<string>
	using namespace std;

	int addInt(int x, int y)
	{
		return x + y;
	}

	double addDouble(double x, double y)
	{
		return x + y;
	}
	//�̷��� ���¸�

	int add(int x, int y)
	{
		return x + y;
	}

	double add(double x, double y)
	{
		return x + y;
	}
	//�̷��� ���·� �ٲܼ��ִ�.
	//�˾ƾ� ������ �����Ϸ��� ã�Ƽ� parameter �� �ڷ����� �����ϴ� �Լ���
	//�����Ѵٴ� ���̴�. �� ������ Ÿ���̶�� �Ҹ���.

	int add(double x, double y)
	{
		return x + y;
	}

	double add(double x, double y)
	{
		return x + y;
	}
	//���� Ÿ�Ը� �ٸ� ��쿡�� �����ε��� �ȵȴ�.

	int getRandomValue(){};
	double getRandomValue(){};
	// �Ķ���Ͱ� ������ ��� �Ҽ�������?
	// �����ʴ� �Ķ���͸� �־��ش�.
	void getRandom(int &x){};
	void getRandom(double &x){};
	// �̷������� ��ȸ�ϴ� ����� �ְٴ�.

	int main()
	{
		int x;
		getRandom(x);

		//int x = getRandom(int());
		//int x = getRandom(int_dummy);		//������� �ʴ� ��ǲ ����
	}

	typedef int my_int;

	void print(int x){};
	void print(my_int x){};	//	Ÿ�Ե����� ���δ� ������ �Ҽ� ����.

	//��Ī�� ����� �����ʴ� �������� ���1 - ��Ī�Ǵ°��� ��� ������ �ִ� ���

	void print(char *value){};
	void print(int value){};
	int main()
	{
		print(0);		//��Ȯ�� �Ҽ�����
		print('a');		//��Ƽ���� �ν�
		print("a");		//��ġ �Ǵ� ���� ����
		//�Լ� �����ε��� �Ҷ��� ������ Ÿ���� �ɵ����� ���ǰ� �ʿ��ϴ�.
	}
	void print(const char *value){};�� �ϸ� ��

	//��Ī�� ����� �����ʴ� �������� ���2 - ��Ī�Ǵ� ���� ������ �϶�
	void print(unsigned int value){};
	void print(float value){};
	int main()
	{
		print('a');
		print(0);
		print(3.141592);

		//��Ȯ�ϰ� ���־ ��ȣ���� ��������.

		print((unsigned int)'a');
		print(0u);		// 0�ڿ� u�� ���̸� unsigned �� ��
		print(3.141592f);
	}
