## Break와 Continue

### Break

	int main()
	{
		int count = 0;
		while(1)
		{
			cout << count << endl;
			if (count == 10) break;	//10이면 이 와일문을 빠져나감
			count ++	
		}
	}
### 함수에서의 break와 return

	void breakOrReturn()
	{
		while (true)
		{
			char ch;
			cin >> ch;
			if (ch == "b")
				break;			// break는 중괄호 영역을 빠져나온다.
			else if (ch == "r")
				return;			// 아예 함수 밖으로 나간다.
		}

		cout << "Hello" << endl;
	}
	
	int main()
	{
		breakOrReturn();
		return 0;
	}

### Continue 사용
	int main()
	{
		//짝수만 출력
		for(int i = 0; i < 10; i++)
		{
			if(i%2 == 0;) continue;	// 증감문으로 돌아감
			cout << i << endl;
		}
	}