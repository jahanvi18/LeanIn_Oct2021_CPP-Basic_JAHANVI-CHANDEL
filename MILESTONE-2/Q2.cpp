#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<"Numbers from 1-50 divisible by 3: \n";
	for(i=1;i<=50;i++)
	{
		if (i%3==0)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}