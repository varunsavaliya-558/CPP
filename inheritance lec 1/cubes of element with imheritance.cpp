#include<iostream>
using namespace std;

class x{
	public :
		int a,b,c;
};

class y : public x{
	public :
		void setdata()
		{
			cout << "Enter A : ";
			cin >> a;
			cout << "Enter B : ";
			cin >> b;
			cout << "Enter C : ";
			cin >> c;
		}
		void getdata()
		{
			cout << "A : " << a*a*a << endl
				 << "B : " << b*b*b << endl
				 << "C : " << c*c*c << endl;
		}
};

int main()
{
	y y1;
	
	y1.setdata();
	y1.getdata();
}
