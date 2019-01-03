## C언어 스타일의 배열 문자열

###
	#include <iostream>
	using namespace std;

	int main()
	{
		char mystring[] = "string"; // 6이 아니라 7? null때문

		for(int i=0; i < 7; i++)
		{
			cout << mystring[i] << endl;
			cout <<(int)mystring[i] << endl; // 115~103 과 0이 출력

			cout << sizeof(mystring) / sizeof(mystring[0]); //7

			//입력받기

			char mystring[255];
			cin >> mystring;		//hellow

			mystring[4] = '\0'; // \0은 null을 의미

			cout << mystring << endl;	//hell로 출력??
										//배열은 0을 만나면 끝난것으로 인식된다.

			cin.getline(mystring, 255); //빈칸까지 받기
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
### 전통적인 c스타일 문자열사용

	#include<iostream>
	#include<cstring>
	using namespace std;

	int main()
	{
		char source[] = "Copy this!";
		char dest[50];				// 만약 5로 선언한다면
		
		strcpy(dest, source);		//이렇게 사용하는것은 위험하다!
		strcpy_s(dest, 50, source);

		cout << source << endl;
		cout << dest << endl;

		strcat		//하나의 문자열 뒤에 문자열 합치기
		strcmp		//두문자열이 동일한지 비교

		strcat(dest, source);
		cout << source << endl;
		cout << dest << endl;

	    cout << strcmp(source, dest) << endl; //같으면 0, 다르면 -1리턴

		if문을 쓴다면
		if (strsmp(source, dest)==0)의 형태로 사용해야 한다.
		
	}