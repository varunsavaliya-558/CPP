#include<iostream>
using namespace std;

class dis {
	public :
	int feet ,inch;
	public :
	void input()
	{
		cout << "Feet : ";
		cin >> feet;
		cout << "inch : ";
		cin >> inch;
	}
	void output(dis d1,dis d2)
	{
		int f,i;
		f=d1.feet+d2.feet;
		i=d1.inch+d2.inch;
		while (i>=12)
		{
			i-=12;
			f++;
		}
		cout << "Feet : " << f << endl << "Inch : " << i;
	}
};
int main()
{
	dis d1,d2,d3;
	d1.input();
	d2.input();
	d3.output(d1,d2);
}
