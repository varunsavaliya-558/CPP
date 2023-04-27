#include<iostream>
using namespace std;

class A{
	protected : 
	 	int id;
	 	string name;
	 	
	public : 
		void a(){
			cout<<"Enter the ID of employees : "<<endl;
			cin>>id;
			
			cout<<"Enter the Name of employees : "<<endl;
			cin>>name;
		}
};
class B{
	protected : 
		string position;
	public:
		void b(){
			cout<<"Enter the position of employees : "<<endl;
			cin>>position;
		}
};
class C : public A,public B{
	public :
		void input()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"ID : "<<id<<endl;
			cout<<"position : "<<position<<endl;
		}
}; 

main(){
	C c1;
	c1.a();
	c1.b();
	c1.input();
}
