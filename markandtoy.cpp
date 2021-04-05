#include<iostream>
#include<algorithm>
using namespace std;
void result()
{
	int n,k;
	int i,j;
	cin>>n>>k;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{if(arr[j]>arr[j+1])
		
		  swap(arr[j],arr[j+1]);
		}
	
	}
	int sum=0;
	
	int count=0;
	for(i=0;i<n;i++)
	{ if(arr[i]>k-sum){
		break;
	}
	if(sum<=k)
	 count++;
		sum+=arr[i];
	}
	cout<<count;
	

}
int main()
{
	result();
}

