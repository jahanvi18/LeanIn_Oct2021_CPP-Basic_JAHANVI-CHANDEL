#include <iostream>
using namespace std;
int main()
{
 
  int i,j,n;
 cout<<"enter number of lines to print pattern for:";
 cin>>n;
 
  for(i=1;i<=n;i++)
     {
         for(j=1;j<=i;j++)
         {
             cout<<((char)(j+64))<<" ";
         }
 
         cout<<endl;
     }
 
  return 0;
}