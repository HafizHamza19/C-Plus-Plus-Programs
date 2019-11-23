#include <iostream>
#include <conio.h>
using namespace std;
void tri (void);
void main()
{
tri ();
getch();
}
void tri (void)
{
	int a;
	int b;
	int c;
	printf ("Enter First Triangle : ");
	scanf ("%d",&a);
	printf ("Enter Second Triangle : ");
	scanf ("%d",&b);
	printf ("Enter Third Triangle : ");
	scanf ("%d",&c);
	int x;
	x=a+b+c;
	printf ("%d",x);
	if(x==180)
	{
	printf("\nThe Triangle is Valid");
	}
	else
		{
	printf("\nThe Triangle is Not Valid");
	}
}