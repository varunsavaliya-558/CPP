#include<iostream>
using namespace std;

class mother{
	
	public :
	 
	 	void display()
		{
			cout << "mother ."<<endl;
		}
};
class daugther : public mother {
	public :
		void display()
		{
			cout << "dougther ."<< endl;
		}
					
};
int main()
{
	daugther d;
	d.daugther::display();
	d.daugther::display();
}
