#include<iostream>
using namespace std;

class shape{
	protected : 
	int width,heigh;
	public:
		shape(){
			
		cout<<"please enter the width : ";
		cin>>width;
		
		cout<<"please enter the heigh : ";
		cin>>heigh;
	}
};
class triangle : public shape{
	public : 
		void trianglearea()
		{
			cout<<"triangle area : "<< (width * heigh) / 2 <<endl;
		}
};
class rectangle : public shape{
	public:
		void rectanglearea()
		{
			cout<<"rectangle area : "<< width * heigh << endl;
		}
};

main(){
	rectangle r;
	r.rectanglearea();
	triangle t;
	t.trianglearea();
	
}

