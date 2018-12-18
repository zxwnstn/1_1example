## �迭2

###
	int main()
	{
		const int num_students = 20;

		int students_scores[num_students];
		
		cout << &students_scores << endl;
		for(int i= 0; i < 3; i++)
			cout << (int)&students_scores[i] << endl;
		
		//3799424	�迭�� �ּ�
		//3799424	�迭[0]�� �ּ�	
		//3799428
		//3799432
		//3799436

		cout << sizeof(students_scores) << endl;
	}

<br>

### �Լ� �Ķ���ͷ� �ޱ�

	void doSomthing(int students_scores[20])
	{
		cout << (int)&students_scores << endl;
		cout << students_scores[0] << endl;
		cout << students_scores[1] << endl;
		cout << students_scores[2] << endl;
	}

	int main()
	{
		const int num_students = 20;

		int students_scores[num_students] = {1, 2, 3, 4, 5,};
		
		cout << (int)&students_scores << endl;
		for(int i= 0; i < 3; i++)
			cout << students_scores[i] << endl;

		doSomething(students_scores);

		// 11401992	���ο��� �迭�� �ּҰ�
		// 11401790 �Լ����� �迭�� �ּҰ�, ?? ���� �ּҰ��� �ٸ���???
	}
+ �������� ������ ���ϱ�??
�Լ��� �Ű������� �迭�� �������� �Լ������� ������ ������ ���� �Ҵ��ϰ� �Ǵ°��̴�.
�� ������ �迭�� �״�� ���°��� �ƴ� �Լ����ο� �����Ͽ� ����ϴ� ���̴�.
<br>
�׷��ٸ� ��� �ؾ� ������ �Լ� �״�� ����Ҽ� ������?
<br>

### �Լ������� �迭�� ���簡 �̷���� ��� �迭�� ũ��

	void doSomthing(int students_scores[20])
	{
		cout << (int)&students_scores << endl;
		cout << "in function" << sizeof(students_scores) << endl;
	}

	int main()
	{
		const int num_students = 20;

		int students_scores[num_students] = {1, 2, 3, 4, 5,};
		
		cout << "in main" << sizeof(students_scores) << endl;

		doSomething(students_scores);
		
		// in main 80
		// in main 4

+ ��ü �������� �Ͼ �ɱ�?
�Լ��� �迭�� �Ѿ�ö� �����ͷ� �Ѿ�Դ�
<br>
���־� ��Ʃ��� ��� ��ȯ �гο��� x86�� x64�� �ٲٰ� �ٽ� �����غ���<br>
�����

	in main 80
	in main 8

+ ��ü �������� �Ͼ �ɱ�?
32��Ʈ �ý����� �����ͺ��� ũ��� 32bit �� 4byte��
64��Ʈ �ý����� �����ͺ��� ũ��� 64bit �� 8byte�� �����̴�.

