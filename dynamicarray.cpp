#include<iostream>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	int* arr[n];
	for(int i=0;i<n;i++)
	{
		int m;
		cin>>m;
		arr[i]=new int[m];
		for(int j=0;j<m;j++)
		cin>>arr[i][j];
	}
	for(int k=0;k<q;k++)
	{
		int i,j;
		cin>>i>>j;
		cout<<arr[i][j]<<endl;
	}
	
	
	
	
}
