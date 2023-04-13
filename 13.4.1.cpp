#include<iostream>
using namespace std;

class emp{
	char name[20],role[20],city[20],c_n[20];
	int id,age,salary,ex,i;
	int n;
	
	public : 
		void input(){
		
//		cout<<"Enter the size of emplyee";
//		cin>>n;	
			for(i=0;i<4;i++){
				cout<<"Enter the name : ";
				cin>>name;
				cout<<"Enter the role : ";
				cin>>role;
				cout<<"Enter the city : ";
				cin>>city;
				cout<<"Enter the company name : ";
				cin>>c_n;
				cout<<"Enter the id : ";
				cin>>id;
				cout<<"Enter the age : ";
				cin>>age;
				cout<<"Enter the salary : ";
				cin>>salary;
				cout<<"Enter the Experience : ";
				cin>>ex;
			}
		}
		void output(){
			
			for(i=0;i<4;i++){
				cout<<"\nThe name of employee is : "<<name;
				cout<<"\nThe name of company is : "<<c_n;
				cout<<"\nThe role of employee is : "<<role;
				cout<<"\nThe name of employee's city is : "<<city;
				cout<<"\nThe name of employee's id is : "<<id;
				cout<<"\nThe name of employee's age is : "<<age;
				cout<<"\nThe name of employee's salary is : "<<salary;
				cout<<"\nThe name of employee's experience is : "<<ex;
			}
		}
};

main(){
	
	emp e;
	e.input();
	e.output();
}
