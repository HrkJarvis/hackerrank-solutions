#include<iostream>
#include<string.h>
using namespace std;
void search(char* t,char* p)
{
	int n=strlen(t);
	int m=strlen(p);
	int i,j;
	for( i=0; i<=n-m; i++)
	{
		for(j=0;j<m;j++)
		
			if(t[i+j]!=p[j])
			break;
			if(j==m)
			{
				cout<<"pattern find at index "<<i<<endl;
			}
		
	}
	
}
int main() 
{ 
    char txt[] = "AABAACAADAABAAABAA"; 
    char pat[] = "AABA"; 
    search(txt,pat); 
    return 0; 
} 
