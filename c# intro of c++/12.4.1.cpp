#include<iostream>
using namespace std;

main()
{
	int i,n[1000],c=0;
	
	for(i=2020;i<=3030;i++)
	{
		if(i%4==0)
		{
			n[c]=i;
			c++;
		}
	}
	
	for(i=0;i<c;i++)
	{
		cout<<"leap year : ";
		cout<<n[i] << "\n" ;
	}
}
