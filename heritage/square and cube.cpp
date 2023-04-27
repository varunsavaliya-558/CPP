#include<iostream>
using namespace std;

class number{
	protected : 
	 	int a;
	 	
	public : 
		 number(){
			cout<<"Enter the value of A : "<<endl;
			cin>>a;
		}
};
class square : public number{
	public:
		void 	getData(){
			cout<<"A = "<<a*a<<endl;
		}
};
class cube : public number{
	public :
		void getCube()
		{
			cout<<"A = "<<a*a*a<<endl;
		}
}; 

main(){
	cube c;
	c.getCube();
	square s;
	s.getData();
}
