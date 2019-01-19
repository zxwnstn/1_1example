//�ڽ�Ŭ������ �θ�Ŭ������ �����Ϸ���?? ��ü�߸�
#include<vector>
#include<iostream>
#include<functional>
using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Der : public Base
{
public:
	int m_j = 1;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

void doSomething(Base & b)
{
	b.print();
}

//void doSomething(Base b) // �̷��� �ϴ°͵� ���� ���� ���԰� ����..
//{							// b�� ��ü �߸��� �Ͼ�� ��
//	b.print();
//}

int main()
{
	Der d;
	//Base &b = d;// ������ ����

	Base b;
	b = d;	// ��ü �߸��� ���ÿ� �������� �����
	//�ǵ����� ��� �ּ��� �����ִ°��� ����.
	doSomething(d);

	vector<Base> my_vec;
	my_vec.push_back(b);
	my_vec.push_back(d);

	for (auto & e : my_vec)
		e.print();
	//�Ѵ� I'm Base�� ��..

	//ù��° ����
	//���۷����� �޾ƺ���
	//vector<Base&> my_vec; ����
	//������ ���ʹ� ���۷����� �޾� �����ʴ´�.

	//�ι�° ����
	//�����ͷ� �޾ƺ���
	vector<Base*> my_vec2;
	my_vec2.push_back(&b);
	my_vec2.push_back(&d);
	//����!!
	//������ �� ���׾ �����͸� ���� �ȴٸ�???
	
	//<functional>�� reference_wrapper�̿��ϱ�!!
	//vector<
	vector<reference_wrapper<Base>> my_vec3;
	my_vec3.push_back(b);
	my_vec3.push_back(d);
	for (auto & e : my_vec3)
		e.get().print();

}