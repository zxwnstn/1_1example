## �ڷ������� ���� �ٿ��ֱ�

<br>

###
	
	#include<iostream>
	#include<vector>
	using namespace std;

	int main()
	{
		typedef double distance_t // ���� distance_t�� ���ǵ��� 
								  // ������ �Ÿ��� �ڷ������� ���ٴ°��̴�.

		doulbe		my_distance;
		distance_t	home2work;
		distance_t	home2school;

		//type�� �ſ� �涧
		std::vector<std::pair<std::string, int> >pairlist;
		vector<pair<string, int> >pairlist 1;
		vector<pair<string, int> >pairlist 2;
		vector<pair<string, int> >pairlist 3;	// ���� �������� �ʴ�.

		typedef vector<pair<string, int> > pairlist_t; // typedef�� �ٿ��ش�.

		pairlist_t pairlist1;
		pairlist_t pairlist2;

		// using�� ����ϱ�
		using pairlist_t = vector<pair<string, int> > ;
		//����ó�� ���̳�, ���������� ������ �޸𸮸� �����ϰ� �ϴ� ������ �ƴϴ�.
		//�̰��� ���� compiler���� �̷��� �̸��� ��� �ϰڴ� ��� �˷��ִ� ���̴�.
		//typedef�� ũ�� �ٸ��� �ʴ�.

		return 0;
	}