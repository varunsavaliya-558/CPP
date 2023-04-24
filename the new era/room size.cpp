#include<iostream>
using namespace std;

class detail {
	public :
	int area_size,num_room;
	char color[20];
	char loc[100];
	
	void input()
	{
		cout << "Enter meter squre of house:";
		cin >> area_size;
		cout << "Enter number of room :";
		cin >> num_room;
		cout << "Enter color of house :";
		cin >> color;
		cout << "Enter location of house :";
		cin >> loc;
	}
	void output()
	{
		cout << area_size << endl << num_room << endl << color << endl << loc; 
	}
};
int main()
{
	detail d;
	d.input();
	d.output();
}
