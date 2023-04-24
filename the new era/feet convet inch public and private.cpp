#include<iostream>
using namespace std;

class dis {
	private :
	int feet ,inch;
	public :
	void input()
	{
		cout << "Feet : ";
		cin >> feet;
		cout << "inch : ";
		cin >> inch;
	}
	void output()
	{
		
		cout << "Feet : " << feet << endl << "Inch : " << inch;
	}
};
int main()
{
	dis d1;
	d1.input();
	d1.output();
	
}
