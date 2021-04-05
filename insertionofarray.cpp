//insertion of array
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,pos,ele;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>pos>>ele;
	for(i=0;i<n;i++)
	{
		arr[pos]=ele;
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
	
}
