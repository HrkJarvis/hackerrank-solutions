#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,i,j;
	int sum1=0;
	int sum2=0;
	int t;
	cin>>t;
	cin >> n;
	cin >> m;
int arr[n];
for(int p=0;p<t;p++){

for(i=0;i<n;i++)
{
	cin>>arr[i];
}
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-i-1;j++)
	{
		if(arr[j]>arr[j+1])
		swap(arr[j],arr[j+1]);
	}
}
for(i=m;i<n;i++)
{
	sum1=sum1+arr[i];
}
for(i=0;i<n-m;i++)
{
	sum2=sum2+arr[i];
}
int diff;
if(sum1>sum2)
{
	diff=sum1-sum2;
}
else
{
	diff=sum2-sum1;
}
cout<<diff;
}
}
