#include<iostream>
#include<algorithm>
using namespace std;
void sort()
{
	int n;
	cin >> n;
	int i,arr[n],indx[5000];
	int j;
	for(i=0;i<n;i++){
		cin >> arr[i];
	    indx[arr[i]]=i;
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			swap(arr[j],arr[j+1]);
			
		}
		
	}
	for(i=0;i<n;i++)
	{cout << indx[arr[i]] << " ";
	}
}
int main()
{
	sort();
	return 0;
} 
