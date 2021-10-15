#include<iostream>
using namespace std;
int main()
{
	int a=0, b=0, quo=0, rem=0;
	cout<<"enter 2 numbers:";
	cin>>a>>b;
	quo=a/b;
	rem=a%b;
	cout<<"quotient- "<<quo;
	cout<<"remainder- "<<rem;
	return 0;
}