#include <iostream>
using namespace std;

int main() 
{
   int n,i,j;
   cout<<"enter no. of lines to print pattern for:";
   cin>>n;

   for (int i = 1;i<=n; ++i) 
   {
      for (int j = 1;j<=n; ++j) 
	  {
         cout <<j;
      }
      cout << endl;
   }

   return 0;
}