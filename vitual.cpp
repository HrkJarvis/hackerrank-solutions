#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person{
    public:
    string name;
    int age;
     virtual void getdata()
     {
     	cin >> name >> age;
	 }
  virtual void putdata() 
  {
  	cout<<name<<" "<<age;
  }

};
class Professor : public Person {
    private: 
       int publications,id;
       static int seq;
       public:
       	 Professor() : id(++seq) {}
       void getdata()
       {
           cin>>name>>age>>publications;
       }
        void putdata()
       {
           cout<<name<<" "<<age<<" "<<publications<<" "<<id<<endl;;
           
       }
};
int Professor::seq = 0;

class Student : public Person
{
private:
        int marks[6],id;
         static int seq;
public:
	Student() : id(++seq) {}
        void getdata()
      { int i;
         cin>>name>>age;
          for(i=0;i<6;i++)
        {
          cin>>marks[i];
         }
}
void putdata()
{ int i ,sum=0;
   
    for(i=0;i<6;i++)
    {
	   sum=sum+marks[i];
         }
          cout<<name<<" "<<age<<" "<<sum<<" "<<id<<endl;
}
};
int Student::seq= 0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

