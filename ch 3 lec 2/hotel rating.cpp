#include<iostream>
using namespace std;

class hotel{
		int id,h_r,e_y,r_q,s_q;
		string name,type,city;
		static string location;
	
	public :
		void input(){
			 
			 cout<<"Enter the id of hotel  : ";
			 cin>>id;			 
			 cout<<"Enter the name of hotel  : ";
			 cin>>name;			 
			 cout<<"Enter the type of hotel  : ";
			 cin>>type;			 
			 cout<<"Enter the rating of hotel between 1 to 5 star : ";
			 cin>>h_r;			 
			 cout<<"Enter the location of hotel  : ";
			 cin>>city;			 
			 cout<<"Enter the estabish year of hotel  : ";
			 cin>>e_y;			 
			 cout<<"Enter the staff quantity of hotel  : ";
			 cin>>s_q;			 
			 cout<<"Enter the room quantity of hotel  : ";
			 cin>>r_q;
		} 
		void input1(){
			cout<<"the hotel location is : " << city;
		}
		void output(){
			
			 cout<<"Enter the id of hotel  : " << id<<endl;			 
			 cout<<"Enter the name of hotel  : " << name<<endl;			 
			 cout<<"Enter the type of hotel  : " << type<<endl;			 
			 cout<<"Enter the rating of hotel between 1 to 5 star : " << h_r<<endl;			 
			 cout<<"Enter the location of hotel  : " << city<<endl;			 
			 cout<<"Enter the estabish year of hotel  : " << e_y<<endl;			 
			 cout<<"Enter the staff quantity of hotel  : " << s_q<<endl;			 
			 cout<<"Enter the room quantity of hotel  : " << r_q<<endl;
		}	
		
	
};
string hotel :: location = "Surat";

int main(){
	int n,i;
	cout<<"Enter the number of hotel : ";
	cin>>n;
	hotel h[n];
	
	for(i=0;i<n;i++)
	{
		h[i].input();
		h[i].input1();
		h[i].output();

	}
	return 0;
}
