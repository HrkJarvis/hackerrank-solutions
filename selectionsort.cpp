#include<iostream>
#include<algorithm>
using namespace std;
void selectionsort()
{int n;
cout<<"enter the value of n:";
cin>>n;
	int arr[n],i,j,min;
	cout<<"enter the array elements";
	int count=0;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			count++;
			min=j;
			swap(arr[min],arr[i]);
		}
	}
	cout<<count;
	cout<<"the sorted array is :";
	for(i=0;i<n;i++)
	{ 
		cout<<arr[i]<<" ";
	}
}
int main()
{
	selectionsort();
}
