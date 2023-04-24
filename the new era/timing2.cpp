#include<iostream>
using namespace std;

class time {
	public :
		int t,m,s,h;
	public :
		void input()
		{
			cout << "Enter secound : ";
			cin >> t;
		}
		void output()
		{
			h=t/3600;
			t=t%3600;
			m=t/60;
			t=t%60;
			s=t;
			cout << "HH:MM:SS  " << h  << ":" << m << ":" << s; 
		}
};
int main()
{
	time t1;
	t1.input();
	t1.output();
}
