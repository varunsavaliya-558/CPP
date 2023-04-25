#include<iostream>
using namespace std;

class p{
	public : 
		float c;
	public : 
		void set()
		{
		cout<<"Enter the temperature in celsius : ";
		cin>>c; 	
	 	} 	
};
class q : public p{
	public:
		void fahrenheit(){
			cout<< "fahrenheit : "<< (c*9/5)+32 << endl;
		}
};
class r : public q{
	public :
		void kelvin()
		{
			cout << "kelvin : " << (c+459.67)*5/9 << endl;
 		}
}; 

int main()
{
	r r1;
	r1.set();
	r1.fahrenheit();
	r1.kelvin();
}
