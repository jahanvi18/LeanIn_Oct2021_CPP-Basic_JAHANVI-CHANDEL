#include<iostream>
using namespace std;
int main()
{
	int h,i,j,a,b;
	cout<<"enter a number:";
	cin>>h;
	i=h;
	j=h;
	cout<<"h="<<h<<"/n";
	
	i=++h; //pre increment
	cout<<"i="<<i<<"/t";
	cout<<"h="<<h<<"/n";
	
	j=h++; //post increment
	cout<<"j="<<j<<"/t";
	cout<<"h="<<h<<"/n";
	
	a=--h; //pre drecrement
	cout<<"a="<<a<<"/t";
	cout<<"h="<<h<<"/n";
	
	b=h--; //post decrement
	cout<<"b="<<b<<"/t";
	cout<<"h="<<h<<"/n";
	 
	 return 0;
}