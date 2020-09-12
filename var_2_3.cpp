#include <iostream>
#include <cmath>

using namespace std;

int which_one(int count, char* name)
{
	return (int)name[0]%count;
}

int main()
{
	int count, num;
	char name[32], surname[32];
	int var;

	cout<<"Enter your name and surname:\t";
	cin>>name>>surname;
	cout<<"Enter the number of variants:\t";
	cin>>count;
	cout<<"if you want to know the variant with using name, press 1\n\t\t\t\twith using surname press 2"<<endl;

	cin>>num;
	if (num == 1)
		var = which_one(count, name);
	else if (num == 2)
		var = which_one(count, surname);
	else
		cout<<"You've entered incorrect num"<<endl;

	cout<<"Variant for this number is:\t"<<var<<"\n";
	return 0;
}