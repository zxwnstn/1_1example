## ���� �迭

###

	#include<iostream>

	int main()
	{
		//�����迭
		int length = 5;
		//int array[length];		//�⺻���� ���� �Ҵ�迭
									//cin���� ���̸� �޴°��� �Ұ��� �ϴ�.

		cin >> length;

		//�����迭
		int *array = new int[length];

		array[0] = 1;
		array[1] = 2;

		for(int i= 0; i<length; i++)
		{
			cout << (uintptr_t)&array[i] << endl;
			cout << array[i] << endl;
		}
		
		delete [] array;

		int *array = new int[length]();		
		int *array = new int[length]{};						// 0���� �ʱ�ȭ �ϱ�
		int *array = new int[length]{11, 22, 33, 44, 66};	// 66������ �����ϰ� �������� 0���� �ʱ�ȭ
		// ���� lenth�� 5���� ���� �Է� �޴´ٸ�?
		// ������ ����.

		return 0;
	}

	int main()
	{
		int fixedArray[] = {1, 2, 3, 4, 5};

		int *array = new int[5]{1, 2, 3, 4, 5};		// ����	
		int *array = new int[3]{1, 2, 3, 4, 5};		// ������ ����.

		//resizing
		���������δ� ��������
		ũ�� �ϴ� ���, �ٸ� ��ū �޸𸮸� �޾� �����ϰ� �ڿ� ���ε��� ���Ҹ� �߰�. 
		�۰� �ϴ� ���, �ɼ��� ������ �ȵȴٸ� ��������� �ؾߵ�



		delete[] array;
	}
