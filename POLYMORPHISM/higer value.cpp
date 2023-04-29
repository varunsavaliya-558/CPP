#include<iostream>
using namespace std;

class opr{
	private :
	
	int a;
	
	public :  
		opr (int a)	
		{
			this ->a=a;
		}
		opr ()
		{
			
		}
		opr operator < (opr o)
		{
			opr temp;
			if(a<o.a)
				temp=o.a;
			else
				temp = a;	
		}
		void getData()
		{
			cout << a<< endl; 
		}
};
main(){
	opr o1(25);
	opr o2(30);
	opr o3;
	
	o3 = o1 < o2;
	o1.getData();
	o2.getData();
	cout<<"highest value is : ";
	o3.getData();
}
