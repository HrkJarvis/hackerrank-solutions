#include<iostream>
using namespace std;
void linearsearch()
{
	int n;
	cin>>n;
	int i,key;
	
	int arr[n];
	cout<<"enter the array elemnts";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the element that u want to find";
	cin>>key;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
		cout<<"the element is found "<<arr[i];
	}
	else 
	{
		cout<<"not found";
		break;
	}
	}
	
}
int main()
{
	linearsearch();
	return 0;
}
