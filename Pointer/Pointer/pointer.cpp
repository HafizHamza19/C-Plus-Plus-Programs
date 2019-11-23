#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int x;
	cout<<"Enter Value To Find Adress :";
	cin>>x;

	int *y=&x;

	 cout<<"\n\nThe Adress Of x="<<&x<<"\n\nThe Value Of  y="<<*y<<"\n\nThe Value OF  x="<<x<<"\n\nThe Adress Of y="<<&y;



	getch();
}