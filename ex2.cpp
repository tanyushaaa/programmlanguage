#include <iostream>

using namespace std;

int main()
{
	cout<<"PART 1"<<endl;
	int N,M;
	cout<<"Enter N and M:"<<endl;
	cin>>N>>M;

	while(N>0)
	{
		int C = M;
		while(C>0)
		{
			cout<<'*';
			C--;
		}
		cout<<endl;
		N--;
	}

	cout<<"PART 2 \n(variant 6)"<<endl;
	M=N=6;
	int C=0;
	while(N>0)
	{
		C++;
		for(int i = (M-C); i > 0; i--)
			cout<<' ';
		for(int j = 0; j < C; j++)
		{
			cout<<"* ";
			if (j == C-1)
				cout<<endl;
		}
		N--;
	}

	return 0;
}