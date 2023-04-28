#include<iostream>
using namespace std;

class calc{
	public:
		
		void sum(int a, int b)
		{
			cout<<"division : " << a/b << endl;
		}
		void sum(int a,int b,int c)
		{
			cout<<"subtraction : " << a-b-c <<endl;
		}
		void sum(int a,int b, int c,int d)
		{
			cout<<"multiplication : " << a*b*c*d << endl;
		}
		void sum(int a,int b,int c,int d,int e)
		{
			cout<<"addition : " << a+b+c+d+e << endl;
		}
};
main ()
{ 
	calc c;
	c.sum(10,2);
	c.sum(100,20,10);
	c.sum(1,2,3,4);
	c.sum(10,20,30,40,50);
}
