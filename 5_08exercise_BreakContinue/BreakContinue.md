## Break�� Continue

### Break

	int main()
	{
		int count = 0;
		while(1)
		{
			cout << count << endl;
			if (count == 10) break;	//10�̸� �� ���Ϲ��� ��������
			count ++	
		}
	}
### �Լ������� break�� return

	void breakOrReturn()
	{
		while (true)
		{
			char ch;
			cin >> ch;
			if (ch == "b")
				break;			// break�� �߰�ȣ ������ �������´�.
			else if (ch == "r")
				return;			// �ƿ� �Լ� ������ ������.
		}

		cout << "Hello" << endl;
	}
	
	int main()
	{
		breakOrReturn();
		return 0;
	}

### Continue ���
	int main()
	{
		//¦���� ���
		for(int i = 0; i < 10; i++)
		{
			if(i%2 == 0;) continue;	// ���������� ���ư�
			cout << i << endl;
		}
	}