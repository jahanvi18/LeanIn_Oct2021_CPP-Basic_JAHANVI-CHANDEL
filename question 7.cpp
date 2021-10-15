#include<iostream>
using namespace std;
int main()
{
	int a=0, b=0, temp=0;
	cout<<"enter 2 numbers:";
	cin>>a>>b;
	cout<<"numbers before swapping- "<<a<<' '<<b;
	temp=a;
	a=b;
	b=temp;
	cout<<"number after swapping- "<<a<<' '<<b;
	return 0;
}