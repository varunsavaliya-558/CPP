#include<iostream>
using namespace std;

class message{
	private : 
		string msg;
	public :
		message()
		{
			cout<<"Enter meg : "<<endl;
			cin>>msg;
		}
		void print()
		{
			cout << msg <<endl;
		}
		void print(string n)
		{
			cout << msg << " " << n << endl;
		}
};

main () {
	message m;
	m.print();
	m.print("\nby......................................");
}
