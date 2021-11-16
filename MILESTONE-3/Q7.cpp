#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i;
    cout<<"enter number of elements:";
    cin>>n;
    cout<<"enter elements \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        a[i]+=a[i-1];
    }    
    cout<<"updated array: \n";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}