## �Ű������� �⺻��

###
	#include<iostream>

	void print(int x = 0)		//�̸� ����Ʈ �Ķ����, ����Ʈ �ƱԸ�Ʈ������ �Ҹ���.
	{
		cout << x << endl;
	}

	int main()
	{
		print(10);
		print();			//������ �ȵɱ�?
	}

	//�������� �Ķ���Ϳ��� �����ִ�.
	void print(int x, int y, int z)
	//��
	void print(int x, int y= 10, int z){};		//�Ұ���
	void print(int x, int y, int z = 10){};	//����

	void(int x = 10, int y = 10, int z = 10)
	{
		cout << x << y << z << endl;
	}

	int main()
	{
		print();				//10 10 10
		print(100);				//100 10 10
		print(100, 200);		//100 200 10
		print(100, 200, 300);	//100 200 300
	}

	//����
	void(int x = 10, int y = 10, int z = 10);		//���漱��, �Ǵ� ����� �߰��� �Ұ��

	~~~~~~~~~~
	
	void print(int x, int y, int z)		//���Ǻο����� �������
	void print(int x, int y, int z)		//�Ǵ� ���Ǻο��� �⺻���� �ְ� ����� ���ִ°� ���� �����ϴ�.
	{
		cout << x << y << z << endl;
	}


	//Ư����Ȳ �Լ� �����ε��� ��ģ�ٸ�
	#include<iostream>
	#include<string>
	using namesapce std;

	void print(string str){};
	void print(char ch = ' '){};

	int main()
	{
		print();	char�ŰԺ����� ���� �Լ� ����
	}

	void print(int x){};
	void print(int x,  int y = 20){};

	int main()
	{
		print(10);		// �ָ��ؼ� �����ε��� �ں�Խ� ������ �߻�
	}

	//�Լ��� ����Ʈ���� �ſ� �����ϰ� �����ִ�.