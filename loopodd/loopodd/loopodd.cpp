#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	cout<<endl<<endl<<"           ------Display Numbers 1 To 100--------"<<endl<<endl;
	int b;
	for (b=0;b<=100;b++)
	{
		cout<<" "<<b;
	}

	int a=-2;
	cout<<endl<<endl<<"           ------Display Only Even Numbers--------"<<endl<<endl;
	while(a<100)
	{
		a=a+2;
		cout<<" "<<a;
	}
		int c=-1;
	cout<<endl<<endl<<"           ------Display Only Odd Numbers--------"<<endl<<endl;
	while(c<100)
	{
		c=c+2;
		cout<<" "<<c;
	}
		getch();
}
