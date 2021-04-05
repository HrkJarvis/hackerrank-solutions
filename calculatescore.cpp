#include<iostream>
using namespace std;
class student
{
	private: int sub1, sub2,sub3,sub4,sub5;
	public: void input();
	int  calculate();
};
void student :: input()
{
	cin>>sub1>>sub2>>sub3>>sub4>>sub5;
}
int  student :: calculate()
{
	int scores=sub1+sub2+sub3+sub4+sub5;
	    return scores;
}
int main()
{   int n,i;
	cin>>n;
	student s[n];
	for(i=0;i<n;i++)
	{
		s[i].input();
	}
	for(i=0;i<n;i++)
	{
		s[i].calculate();
	}
	  int kristen_score = s[0].calculate();

    int count = 0; 
    for(int i = 1; i < n; i++){
        int scores = s[i].calculate();
        if(scores > kristen_score){
            count++;
        }
    }
     cout<<count;
    return 0;
}
