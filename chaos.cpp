#include<iostream>
#include<algorithm>
using namespace std;
int main(){

int t;
cin>>t;
while(t--)
{
	int n,i;
	cin>>n;
	int arr[n];
	int count=0;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=n-1;i>=0;i++)
	{
		if(arr[i]!=(i+1))
		{
			if((i-1)>=0 && arr[i-1]==(i-1))
			{
				count++;
				swap(arr[i],arr[i-1]);
			}
			else if((i-2)>=0 &&arr[i-2]==(i-2))
			{ count+=2;
			 arr[i-2]=arr[i-1];
			 arr[i-1]=arr[i];
			 arr[i]=i+1;
			}
			else
            {
                cout<<"Too chaotic\n";
                
            }
		}
	}
	cout<<count;
	
}
}
