## C��� ��Ÿ���� �迭 ���ڿ�

###
	#include <iostream>
	using namespace std;

	int main()
	{
		char mystring[] = "string"; // 6�� �ƴ϶� 7? null����

		for(int i=0; i < 7; i++)
		{
			cout << mystring[i] << endl;
			cout <<(int)mystring[i] << endl; // 115~103 �� 0�� ���

			cout << sizeof(mystring) / sizeof(mystring[0]); //7

			//�Է¹ޱ�

			char mystring[255];
			cin >> mystring;		//hellow

			mystring[4] = '\0'; // \0�� null�� �ǹ�

			cout << mystring << endl;	//hell�� ���??
										//�迭�� 0�� ������ ���������� �νĵȴ�.

			cin.getline(mystring, 255); //��ĭ���� �ޱ�
			cout << mystring << endl;

			int index = 0;
			while(true)
			{
				if (mystring[idex]=='\0') break;

				cout << mystring[index] << " " << (int)mystring[index] << endl;
				++i;

			}
		}
		return 0;
	}
### �������� c��Ÿ�� ���ڿ����

	#include<iostream>
	#include<cstring>
	using namespace std;

	int main()
	{
		char source[] = "Copy this!";
		char dest[50];				// ���� 5�� �����Ѵٸ�
		
		strcpy(dest, source);		//�̷��� ����ϴ°��� �����ϴ�!
		strcpy_s(dest, 50, source);

		cout << source << endl;
		cout << dest << endl;

		strcat		//�ϳ��� ���ڿ� �ڿ� ���ڿ� ��ġ��
		strcmp		//�ι��ڿ��� �������� ��

		strcat(dest, source);
		cout << source << endl;
		cout << dest << endl;

	    cout << strcmp(source, dest) << endl; //������ 0, �ٸ��� -1����

		if���� ���ٸ�
		if (strsmp(source, dest)==0)�� ���·� ����ؾ� �Ѵ�.
		
	}