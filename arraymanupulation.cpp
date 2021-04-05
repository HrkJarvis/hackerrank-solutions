#include<iostream>
using namespace std;
int main(){
long long n,t;
cin>>n>>t;
long long arr[n]={0};
while(t--)
{
	
    long long i,a,b,k;
    cin>>a>>b>>k;
    for(i=a-1;i<=b-1;i++)
    { 
    	arr[i]+=k;
	}
}
int max=0;
for(int i=0;i<n;i++)
{
	if(arr[i]>max)
	max=arr[i];
}
cout<<max;
}
