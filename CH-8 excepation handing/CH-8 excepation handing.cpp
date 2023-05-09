#include<iostream>
#include<string.h>
using namespace std;

main(){
	int ch;
	
	cout<<"1.Division"<<endl;
	cout<<"2.Voting"<<endl;
	cout<<"3.Check password"<<endl;
	cout<<"Enter your choice : "<<ch;
	cin >> ch;
	
	switch(ch)
	{
		case 1 : int a,b;
				cout << "Enter A : ";
				cin >> a;
				cout << "Enter B : ";
				cin >> b;
				
				try{
					if(b==0){
						throw b;
					}
					else {
						cout << "Answer : "  << a/b << endl;
					}
				}
				catch (int c)
				{
					cout << "Cannot Not Divided By Zero"<< b << endl;
				}
				break;
		case 2: int d;
				cout << "Enter your Age : ";
				cin >> d;
				
				try
				{
					if(a>18)
					{
						throw d;
					}
					else 
					{
						cout << "You Can Vote. " << endl;
					}
				}
				catch(int e)
				{
					cout << "Invalid Age..." << endl;
				}
				break;
		case 3:
				char password[20];
				cout << "Enter Password : ";
				cin >> password;
				int l;
				l= strlen(password);
				int upr =0;
				try
				{
					for(int i=0 ; i<=l ; i++)
					{
						if(password[i] >= 65 && password[i] <= 90)
						{
							upr ++;
						}
					}
					
					if (upr>0)
					{
						throw password;
					}
					else
					{
						cout << "valid password." << endl;
					}
					
				}
				catch(char s[])
				{
					cout << "Invalid password.." << endl;
				}
				break;
	}
	
}
