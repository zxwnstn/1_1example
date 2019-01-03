## 벡터를 스택처럼 사용하기

### resize의 의미
벡터는 size가 있고, capacity가 있다.
실제로는 capacity만큼의 용량을 갖고있다.

	#include<iostream>
	#include<vector>
	using namespace std;

	int main()
	{
		vector<int> v{1, 2, 3, 4}
		
			
		for(auto &e : v)
			cout << e << " ";		//1 2 3 4
		cout << endl;				
		cout << v.size() << v.capacity;			//4 , 4

		v.resize(10)				//size를 10으로 바꾼다면?

		for(auto &e : v)
			cout << e << " ";		//1 2 3 4 0 0 0 0 0 0 0
		cout << endl;
		cout << v.size() << v.capacity;			// 10 10

		v.resize(2)
		for(auto &e : v)
			cout << e << " ";					//1 2 

		cout << v.size() << v.capacity;			//2 3	??
		cout << v[0] << v[1] << v[2];			//런타임 에러
		cout << v.ar(2) << endl;				//런타임 에러

		주소값을 아예 가져온다면
		int *ptr = v.data();
		cout << ptr[2] << endl;					//드디어 3을 뽑아냄
		// 벡터 리사이즈의 의미는
		// 벡터의 속도향상을 위한 측면으로 봐야한다.
		// 원래 수순이라면 벡터의 사이즈를 줄이고 불필요한 부분을 메모리에 반납해야 하는데
		// 벡터는 그러한 과정을 생략해 눈속임만 하고 있는 형태인 것이다.
	}
### reserve의 의미
	int main()
	{
		vector<int> v{1,2,3};
		v.reserve(1024);		// 메모리의 용량을 미리 확보해 보겟다정도의 뜻으로 해석
								// 이렇게 사용하는 것이 속도면에서 훨씬 우월하다.
		for(auto &e : v)
		{
			cout << e << " ";			// 1 2 3 만 출력
		}
		cout << endl;
		cout << v.size() >> " " << v.capacity(); << endl;	// 3 출력
	}

### 벡터를 스택처럼 이용하기

	void print(const vector<int> &stack)
	{
		for(auto &e : v)
			cout << e << " ";
		cout << endl;
	}
	int main()
	{
		vector<int> stack;

		stack.push_back(3);		
		printStack(stack)		3
		stack.push_back(3);		
		printStack(stack)		3 3
		stack.push_back(3);		
		printStack(stack)		3 3 3
		stack.pop();
		printStack(stack);		3 3
		stack.pop();
		printStack(stack);		3
		stack.pop();
		printStack(stack);
	}