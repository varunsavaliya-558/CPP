#include<iostream>
using namespace std;

class cric{
	private :
		int a;
	public :
		void getData()
		{
			cout<<"Enter the over : " << endl;
			cin>>a;
		}
};
class t20 : public cric{
	public : 
		void getData()
		{
			cout<<"20 over." << endl;	
		}
};
class test : public t20{
	public : 
		void getData()
		{
			cout << "90 over per day." << endl;	
		}
};
main ()
{ 
	t20 t;
	test t1;
	t.getData();
	t1.getData();
	t.cric::getData();
}
