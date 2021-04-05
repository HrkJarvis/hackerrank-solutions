#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
class student
{
public:
      
	  int s[10];
  void input();
  void calculateTotalScore();
};
void student::input() 
{
    int i,n; 
    for(i=0;i<=n;i++)
    {
     cout<<s[i];
    }
};
void student::calculateTotalScore()
{
    int i,sum=0,n;
    for(i=0;i<=n;i++)
    {
        sum+=s[i];
    }
};

int main() {
    int n; // number of students
    cin >> n;
    student *s = new student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}

