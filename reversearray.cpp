
#include<iostream>
using namespace std;


int main() 
    {
        int n;
         scanf("%d",&n);
    int a[n];
   
    int i;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);    
    }
    int *k;
    k=a;
    k=k+n;
    for(i=0;i<n;i++){
            k--;
        printf("%d",*k);
    
        
    }
    return 0;
}  

