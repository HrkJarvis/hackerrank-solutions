#include<iostream>
using namespace std;
void insertionsort()
{
	int n;
	cout<<"ENTER THE SIZE OF ARRAY:";
	cin>>n;
	int arr[n];
	int key,i,j;int count=0;
	cout<<"ENTER THE ELEMENTS";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{     count++;
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	cout<<count;
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
}
int main()
{
	insertionsort();
}
