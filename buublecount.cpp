#include<iostream>
#include<algorithm>
using namespace std;
int main()
{ int n;
    int i ,j;
    int count=0;
    cin>>n;
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int first,last;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        if(arr[j]>arr[j+1]){
        count++;
         swap(arr[j],arr[j+1]);
        
        }
    }
      first=arr[0];
          last=arr[n-1];
    cout<<"Array is sorted in "<<count<< " swaps."<<endl;
    cout<<"First Element: "<<first<<endl;
    cout<<"Last Element: "<<last;
    return 0;
}
