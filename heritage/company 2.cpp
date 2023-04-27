#include<iostream>
using namespace std;

class A{
	protected : 
	 	int id;
	 	string name,role,salary,ex,c_name,add,email,contact;
	 	
	public : 
		 void a1(){
			cout<<"Enter the ID : "<<endl;
			cin>>id;
			cout<<"Enter the Name : "<<endl;
			cin>>name;
			cout<<"Enter the role : "<<endl;
			cin>>role;
		}
};
class B : public A{
	public:
		void b(){
			cout<<"Enter the salary : "<<endl;
			cin>>salary;
			cout<<"Enter the experience : "<<endl;
			cin>>ex;
		}
};
class C : public B{
	public :
		void c()
		{
			cout<<"Enter the company name : "<<endl;
			cin>>c_name;
			cout<<"Enter the address : "<<endl;
			cin>>add;
		}void getData()
		{ 
			cout<<"Name : " << name <<endl;
			cout<<"Role : " << role <<endl;
			cout<<"Salary : " << salary <<endl;
		}
}; 
class D : public C{
	public : 
		void d()
		{
			cout<<"Enter the Email : ";
			cin>>email;
			cout<<"Enter the contact : ";
			cin>>contact;
		}
		void getPut()
		{
			cout<<"ID : "<<id<<endl;
			cout<<"NAME : "<<name<<endl;
			cout<<"ROLe : "<<role<<endl;
			cout<<"SALARY : "<<salary<<endl;
			cout<<"EXPREIENCE : "<<ex<<endl;
			cout<<"COMPANY NAME : "<<c_name<<endl;
			cout<<"ADDRESS : "<<add<<endl;
			cout<<"Email : "<<email<<endl;
			cout<<"Contact : "<<contact<<endl;
		}
};
main(){
	D a;
	a.a1();
	a.b();
	a.c();
	a.getData();
	a.d();
	a.getPut();
}
