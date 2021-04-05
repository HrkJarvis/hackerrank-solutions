#include<iostream>
using namespace std;
int missing()
{
	int n;
	cin>>n;
	int sum;
	int arrsum=0;
	int i;
	sum=(n+1)*(n+2)/2;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		arrsum+=arr[i];
	}
	int missingElement=sum-arrsum;
	
	cout<<"THE MISSING ELEMENT IS:"<<missingElement;
	return 0;
}
int main()
{
	missing();
}
