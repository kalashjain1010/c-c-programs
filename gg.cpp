#include<iostream>
#include<conio.h>
using namespace std;
       class Employee
       {
              int Id;
              char Name[25];
              int work_hours;

              public:
              void ShowData();
              void PutData();

       };

       void Employee :: ShowData()           //Statement 1 : Defining GetData()
       {
              cout<<"\n\tEnter Employee Id : ";
              cin>>Id;

              cout<<"\n\tEnter Employee Name : ";
              cin>>Name;

              cout<<"\n\tEnter Employee work hours : ";
              cin>>work_hours;
       }

       void Employee :: PutData()          
       {
              cout<<"\n\nEmployee Id : "<<Id;
              cout<<"\nEmployee Name : "<<Name;
              cout<<"\n Work Hours: "<<work_hours;
       }

       int main()
       {

              Employee E;          

              E.ShowData();         
              E.PutData();          

       