#include<iostream>
using namespace std;

class time{
	public :
	int h,m;
	public :
	void input()
	{
		cout << "Hour : ";
		cin >> h;
		cout << "min : ";
		cin >> m;
	}
	void output(time t1,time t2)
	{
		int HH,MM;
		HH=t1.h+t2.h;
		MM=t1.m+t2.m;
		while(MM>=60)
		{
			MM-=60;
			HH++;
		}
		cout << "Hour : " << HH << endl << "Min : " << MM;
	}
};
int main()
{
	time t1,t2,t3;
	t1.input();
	t2.input();
	t3.output(t1,t2);
}
