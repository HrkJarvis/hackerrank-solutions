#include<iostream>
using namespace std;
int binarysearch(int arr[],int l,int r,int x)
{
	for(int i=l;i<=r;i++)
	{
		int mid=l+(r-1)/2;
		if(arr[mid]==x)
		{
			return mid;
		}
	  if(arr[mid]>x)
		{
		r=mid-1;	
		}
		else l=mid+1;
	}
	return -1;
}
int main()
{
	int n,x,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>x;
	int result;
	result=binarysearch(arr,0,n-1,x);
	if(result==-1) cout<<"element is not found";
	else cout<<"element found in the index:"<<result;
	return 0;
}
