## ������ ���� �μ� ����
���� �ڼ� ����

###
	#include<cmath>
	#include<iostream>
	#include<vector>
	using namespace std;

	void addOne(int &y)
	{
		y = y + 1;
	}

	void GetSinCos(const double &degrees, double &sin_out, double &cos_out)	//�Է����� �����°��� �տ��ΰ�
													//������� �ݹ��̷��۷��� �Ұ��� �ڿ��δ� ���� �Ϲ����̴�.
	{
		static const double pi = 3.141592;				//����ƽ ������ �ϸ� �缱���� ���� ����
		const double radians = degrees * pi / 180.0;

		sin_out = std::sin(radians);
		cos_out = std::cos(radians);

	}

	//���۷����� ������?
	void foo(int &x)						//const int &x �� �ϸ� ���� �ִ�. �Ű������� �̷��� ���� ���� �Ϲ����̴�.
	{
		cout << x << endl;
	}

	void foo (int *&ptr)					// �̷��� �ϸ� �����ִ�.
	{										// ��� �ؼ��ϴ°��� ������?
		cout << ptr << " " << &ptr >> endl; // typedef int* pint��� ���� �غ���
											// �׷��ٸ� pint &ptr 
											// �� ������ �������� ���� ������ �������ٴٴ� ���̴�.
	}

	void Print_element(int (&arr)[4])		// �����迭�� ����ȣ���� �Ҷ��� �ݵ�� ���Ҽ��� ���־�� �Ѵ�.
	//void Print_element(vector<int>& arr)
	{
	
	}


	int main()
	{
		int x = 5;
		cout << x << " " << &x << endl;		// 5

		addOne(x);							// x��� ���� ��ü�� �Ѱ��.
											// &y == &x��� ��

		cout << x << " " << &x << endl;		// 6


		double sin(0.0);
		double cos(0.0);

		GetSinCos(30.0, sin, cos);

		cout << sin << " " << cos << endl;


		foo(6);								// �ѱ�� ���� �ּҰ� ��� �����Ҽ��� ����


		//�����Ϳ� ���� ���۷��� ������
		int x = 5;
		int *ptr_x = &x;
		foo(ptr);							//������ ������ ���۷����� ��������??
		cout << ptr << " " << &ptr >> endl; 


		//�迭�� �Ķ���ͷ� �����ϱ�
		int arr[]{1, 2, 3, 4, };
		vector<int> v{1, 2, 3, 4, 5}
		PrintElements(arr);
		PrintElements(v);
		return 0;
	}