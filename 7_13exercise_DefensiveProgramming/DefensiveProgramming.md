## ����� ���α׷����� ����

### 
	
	#include<iostream>
	#include<string>
	using namespace std;

	int main()
	{
		//syntax error
		int x			//��������

		//semantic errors
		int x;
		cin >> x;
		if(x >= 5)
			cout << "x is greater than 5" << endl;	//5�϶� ����� �Ǵ� ���� ������ �߻��ȴ�.
		
		// violated assumption
		string hello = "Hello, my name is Jack Jack";

		int ix;
		cin >> in;
		cout << hello[ix] << endl;			//ix�� 1004�� �ִ´ٸ� ��Ÿ�� ������ ���Ե�

		//����� ���α׷��� ����
		string hello = "Hello, my name is Jack Jack";
		cout << "Input from 0 to" << hello.size() - 1 << endl;

		while(true)
		{
			int ix;
			cin >> ix;
			if(ix >= 0 && ix <= hello.size()-1)
				cout << hello[ix] << endl; break;
			else
				cout << "try again" << endl;
		}
		

		return 0;
	}