#include<iostream>
using namespace std;

class car{
	char c_name[20],color[20],model[20];
	int id,release_year,i;
	
	public : 
		void input(){
		
//		cout<<"Enter the size of emplyee";
//		cin>>n;	
			for(i=0;i<3;i++){
				cout<<"Enter the car id(num)  : ";
				cin>>id;
				cout<<"Enter the company name : ";
				cin>>c_name;
				cout<<"Enter the color : ";
				cin>>color;
				cout<<"Enter the model : ";
				cin>>model;
				cout<<"Enter the release year(num) : ";
				cin>>release_year;
			}
		}
		void output(){
			
			for(i=0;i<3;i++){
				cout<<"\nThe name of employee is : "<<id;
				cout<<"\nThe name of company is : "<<c_name;
				cout<<"\nThe role of employee is : "<<color;
				cout<<"\nThe name of employee's city is : "<<model;
				cout<<"\nThe name of employee's id is : "<<id;
				cout<<"\nThe name of employee's age is : "<<release_year;
			}
		}
};

main(){
	
	car e;
	e.input();
	e.output();
}
