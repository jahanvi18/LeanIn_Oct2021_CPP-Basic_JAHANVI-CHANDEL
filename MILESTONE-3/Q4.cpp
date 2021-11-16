#include<iostream>
using namespace std;

int main()
{
	int a,n,m,i,j;
	int arr1[10][10], arr2[10][10];
	cout<<"Dimensions of matrix:\n";
	cin>>m;
	cin>>n;
	
	cout<<"Elements of 1st matrix:\n";
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			cin>>arr1[i][j];
		}
		cout<<"1st matrix:\n";
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<arr1[i][j]<<" ";
		}cout<<endl;
	}
	
	//transpose of matrix
	cout<<"transpose: "<<endl;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			arr2[j][i]=arr1[i][j];
		}
		
	for(i=0;i<m;i++){
	
	    for(j=0;j<n;j++){
	        cout<<arr2[i][j]<<" ";
	    }
	        cout<<endl;
	    }
}