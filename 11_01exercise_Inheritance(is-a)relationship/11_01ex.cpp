#include<iostream>
#include<string>
using namespace std;
//
//class Mother
//{
//private:
//	int m_i;
//
//public:
//	/*Mother(const int & i_in)
//		: m_i(i_in)
//	{
//		cout << "Mother constructor" << endl;
//	}*/ // ��� �����ڴ� ����� ���� �� �Ű��� ����� �Ѵ�.
//
//	void setValue(const int & i_in)
//	{
//		m_i = i_in;
//	}
//
//	int getValue()
//	{
//		return m_i;
//	}
//};
//
////MohterŬ������ ��ӹ޴� ���ϵ� Ŭ���� �����
//class Child : public Mother
//{
//	//���ֺ����. �׷�����
//	//�⺻������ MotherŬ������ ������ ���� ����Ҽ� �ִ�.
//private:
//	double m_d;
//
//public:
//	void setValue(const int & i_in, const double& d_in)
//	{
//		//m_i = i_in; // �̷������� ������ �ȵȴ�.
//		//�ֳ��ϸ� �ƹ��� ����� �޾Ҵ��� mother�� m_i�� private member�̱� �����̴�.
//		//���� �����ڸ� private������ �ڽ����׵� ����� �ȵȴٴ� ���̴�.
//		//�̸� �ذ��Ϸ��� mother�� private�� protected�� ���� �Ǵ°��̴�.
//		//�׷��ٸ� private�� ������ä�� �ϴ¹���� ������?
//		//�����ִ� ����� ���� �������� mother�� public�Լ� setValue�� ���� �Ǵ°��̴�.
//		Mother::setValue(i_in);
//		m_d = d_in;
//		//������
//	}
//
//	void setValue(const double& d_in)
//	{
//		m_d = d_in;
//	}
//
//	double getValue()
//	{
//		return m_d;
//	}
//	//�̸��� ���� �Լ��� ��������� childŬ������ �ν��Ͻ��� � �Լ��� �̿��ұ�?
//};
//
////MotherŬ������ ���� ���ָ��� Ŭ������ ������ ���� �ִ�.derived class��� ��
////�θ� Ŭ������ generallized class ��� �Ѵ�.
////class Daughter : public Mother
////{
////
////};
////
////class Sun : public Mother
////{
////
////};
//
//int main()
//{
//	Mother mother;
//	mother.setValue(1024);
//	cout << mother.getValue() << endl;
//
//	Child child;	
//	child.setValue(128);
//	cout << child.getValue() << endl;	// �Ȱ��� ����ȴ�.
//	//���� �־���..
//	//�׷��� child�� setValue�� �ڽ��� �� double�� ���� �Լ��� ȣ���Ϸ��� �Ѵ�.
//	//�׷��ٸ� ���� int�� ���� setValue�� ȣ���ϰ� �ʹٸ� ��� �Ҽ�������?
//	//�ϳ��� ������� �̸��� �ٸ��� �ϴ� ���̴�.
//	
//	//��� �ۿ��� ������ �̷������� �����ִ�.
//	child.Mother::setValue(123);
//
//
//
//
//	return 0;
//}


//��ӻ����� �ٷﺸ��!
class Mother
{
private:
	int m_i;

public:
	/*Mother(const int & i_in)
		: m_i(i_in)
	{
		cout << "Mother constructor" << endl;
	}*/ // �ּ�����
	Mother(const int & i_in)
		: m_i(i_in)
	{
		cout << "Mother constructor" << endl;
	} // �̷��� �ϰ� ���带 �غ��� ��������

	Mother()
	{} // �˾Ƽ� ����Ʈ �����ڸ� ȣ���ϰ� �ڿ������� ������ �ذ�ȴ�.
	//���ݴ� ����� ����� ������? ���ӻ����� ���� ������� �ڽ�Ŭ������
	//�����ڸ� �ٲ��ִ� ����� �ִ�.


	void setValue(const int & i_in)
	{
		m_i = i_in;
	}

	int getValue()
	{
		return m_i;
	}
};

//class Child : public Mother
//{
//private:
//	double m_d;
//
//public:
//	//Child(const int & i_in, const double & d_in)
//	////	: m_i(i_in), m_d(d_in)	// m_i�� �������� protected�� �ٲٴ� public���� �ٲٴ�
//	//							// �����������̴�.
//	//							// �׷��ٸ� ���ٿ� ���� ������ �ƴѰ��̰�..
//	//	//��ü �� ���� �ʴ°��ΰ�??
//	//	//Child�ν��Ͻ��� ������ �ɶ� Mohter�� ����� ���� �޸𸮰� �Ҵ��� ���� �ʾұ� �����̴�
//	//	//�̴� ���� ���ؼ� �޸� ������ ���� ������ �ʱ�ȭ �Ϸ��°Ͱ� ���� ��ġ�̴�.
//	//	
//	//	//���ϰ� �ϴ°��� �׳� ������ ���Ͱ� ����ϴ�.
//	//{
//	//	Mother::setValue(i_in);
//	//	m_d = d_in;
//	//}
//	//	//���ݴ� ���õȰ��� ������?
//	//	//mother class������ �����ڸ� �Ⱦ��°��ΰ�?
//	//	//mother class�� �����ڷ�
//
//	//���� ����� ���õ� ����
//	Child(const int & i_in, const double& d_in)
//		: Mother(i_in), m_d(d_in)
//	{}
//
//
//	void setValue(const int & i_in, const double& d_in)
//	{
//		Mother::setValue(i_in);
//		m_d = d_in;
//	}
//
//	void setValue(const double& d_in)
//	{
//		m_d = d_in;
//	}
//
//	double getValue()
//	{
//		return m_d;
//	}
//	
//};
//
//
//int main()
//{
//	Mother mother(1024);
//	mother.setValue(1024);
//	cout << mother.getValue() << endl;
//
//	Child child(1024, 12.0);
//	/*child.setValue(128);
//	cout << child.getValue() << endl;*/
//	cout << child.Mother::getValue() << endl;
//	cout << child.getValue() << endl;
//
//	//������ �� �����ʴ´�. ������?
//	//childŬ������ ������ �ɶ��� motherclass�� (default) �����ڰ� ���� ȣ���� �Ǳ� �����̴�.
//	//���� �̷��� ������ �ذ��ϱ� ���� �ܼ��� ������� 
//	// motherŬ������ default������ �ϳ��� �߰����ָ� ������ �ذ�ȴ�.
//
//
//
//	return 0;
//}

class Card
{
private:
	int mWidth;
	int mHeight;
	string mMatarial;
public:
	Card(const int &width_in = 8, const int & height_in = 8, const string & matarial_in = "normal paper")
		: mWidth(width_in), mHeight(height_in), mMatarial(matarial_in)
	{}

	void print()
	{
		cout << mWidth << " " << mHeight << " " << mMatarial << endl;
	}
};

class Spcard : public Card
{
private:
	string mName;
	int mAttack;
	int mDefence;

public:
	Spcard(const string & name_in, const int & attack_in, const int & defence_in)
		: Card(), mName(name_in), mAttack(attack_in), mDefence(defence_in)
	{}

	void print()
	{
		Card::print();
		cout << mName << " " << mAttack << " " << mDefence << endl;
	}
};

int main()
{
	Spcard tiger("ȣ����", 5, 4);
	tiger.print();
	tiger.Card::print();
}