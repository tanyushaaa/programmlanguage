#include <iostream>
#include <cmath>

using namespace std;

int which_one(int count, int num)
{
	return num%count+1;//+1 because numbers can be devided without a remainder and than the remainder will be 0, but usually we do not have a zero variant.
}

int main()
{
	int num, count;
	cout<<"Enter the number in the list:\t";
	cin>>num;
	cout<<"Enter the number of variants:\t";
	cin>>count;
	auto var = which_one(count, num);
	cout<<"Variant for this number is:\t"<< var <<"\n";
	return 0;
}