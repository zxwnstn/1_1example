	## �޸� ���� �Ҵ� new�� delete

	### ���� �Ҵ�

		#include<iostream>
		using namespace std;

		int main()
		{
			int arr[10000000];		//4mb �ۿ� �ȵ����� �˼� ���� ������ ���.
									//�������� ���� �޸𸮴� stack�� ����.
									//�������� ���� �޸𸮴� heap�� ����.
			int var;
			var = 7;

			//���� �Ҵ� �ޱ�
			new int;				// int������ ��ŭ�� �޸𸮸� �Ҵ�޾� �� �޸� �ּҸ� ��ȯ�Ѵ�.
			int *ptr = new int
			*ptr = 7;

			�Ҵ������ �ʱ�ȭ �ϱ�
			int *ptr = new int(7); or {7};
			cout << ptr << endl;
			cout << *ptr << ednl;

			�Ҵ���� �޸� os�� �����ֱ�

			delete ptr;				// ���α׷� �������� ���� �Ⱦ���� �ϴ� ����� delete

			cout << "Atfter deletd" << endl;
			cout << ptr << endl;	// �ּҴ� �״�� ��������
			cout << *ptr << endl;	// ���� �ٸ� �����Ⱚ���� ä���� ����
			//�� �̷��� �ɱ�?
			//ptr�������� �ּ������� �����ֱ� �����̴�.
			//ptr ��ü�� �̹� �����̱� �����̴�.
			
			//�̰��� �����ϴ¹�
			ptr = nullptr;			// null���� �Ҵ��� �ش�.
			if( ptr != nullptr)
			{
				cout << ptr << endl;
				cout << *ptr << endl;
			}
			//�ܿ� ����Ʈ ptr�� �ִ�.

			int *ptr = new(std::nothrow) int{7};	//������ �߻���Ű�� �ʰ� �о� ����

			//�Ǽ�
			int *ptr2 = ptr;

			delete ptr;
			ptr = nullptr;		// ptr2�� ptr�� ������ ���� ������ ���� Ǯ����� �Ѵ�.
			ptr2 = nullptr;

			//�޸� ����(memory leak)
			while(true)
			{
				int *ptr = new int;
				cout << ptr << endl;		// �̷��� �Ǽ��� �Ͼ ���ۿ� ���� �ſ� �����ϴ�.
											// �۾������ڷ� �޸� ��Ȳ�� ����.
											// �̷��Ը� �Ұ�� �޸� ����� ������ �ö󰣴�.
				delete ptr;
			}

			// new�ϰ� delete�� ���� ������. os�� �����ϱ� �����̴�.
			// ����ȭ�� �����Ҷ��� ���� ������ �ִ� ����̴�.
		}
