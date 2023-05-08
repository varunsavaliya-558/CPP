#include<iostream>
using namespace std;

class A{
	public :
		virtual void calc(int a) = 0; 	
};
class B : virtual public A 
{
	public :
		int a,b;
		public:
			void calc(int a)
			{
				switch(a)
				{
					case 1 :
						cout << "Enter the range of circle : " ;
						cin >> a;
						cout << "Area of Circle is : " << 3.14*a*a << endl;
						break;
					case 2 : 
						cout << "Enter the base of triangle : ";
						cin >> a;
						cout << "Enter the height of triangle : ";
						cin >> b;
						cout << "Area of triangle is : " << 0.5*a*b << endl;
						break;
					case 3 : 
						cout << "Enter the length of rectangle : ";
						cin  >> a;	
						cout << "Enter the width of rectangle : ";
						cin >> b;
						cout << "Area of rectangle is : " << a*b << endl;
						break;
				default : cout << "Invalid..." << endl;	  
				}
			}
};
main()
{
	int ch;
	cout << "Enter 1 for area of circle. " << endl 
		 << "Enter 2 for area of triangle." << endl
		 << "Enter 3 for area of rectangle." << endl
		 << "Enter your choice : " ;
	cin >> ch;
	B b1;
	b1.calc(ch);
}
