#include<iostream>
using namespace std;

class animal {
	protected : 
		int age;
		string name;
	public :
		void set_value()
		{
			cout << "enter the name of animal : " << endl;
			cin>>name;
			cout<<"enter the age of animal : "<< endl;
			cin>>age;	
		}
};
class zebra : public animal {
	protected :
		string place;
	public :
		void set_zebra()
		{
			cout << "enter the place : " << endl;
			cin>>place;	
		}
		void get_zebra()
		{
			cout<<"name : " << name << endl;
			cout<<"age : "<< age << endl ;
			cout<< "place : "<<place << endl;
		}
};
class dolphin : public animal {
	 protected : 
	 int heigh;
	 public :
	 	void set_dolphin()
		 {
	 		cout<<"enter the heigh of animal : " << endl;
	 		cin>>heigh;
		 }
		 void get_dolphin()
		 {
		 	cout<<"name : " << name << endl;
			cout<<"age : "<< age << endl ;
			cout<< "heigh : "<<heigh << endl;
		 }
};

int main()
{
	zebra z;
	z.set_value();
	z.set_zebra();
	z.get_zebra();

	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	
	dolphin d;
	d.set_value();
	d.set_value();
	d.get_dolphin();
	
}
