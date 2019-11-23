#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int add(int,int);
int sub(int,int);
int mul (int,int);
void bio (void);
void main ()
{
	int opt;
	printf ("What Do You Want \n    Press Code \n(1)Add (2)Substract (3)Multiply : ");
	scanf("%d",&opt);
	switch (opt)
	{
		case 1:
	int a;
	int b;
	printf("Enter First Num : ");
	scanf("%d",&a);
	printf("Enter Second Num : ");
	scanf("%d",&b);
	int c= add(a,b);
	printf("The Sum Of Number Is %d:",c);
	break;

	case 2:
	int y;
	int x;
	printf("\nEnter FIrst Num : ");
	scanf("%d",&x);
	printf("\nEnter Second Num : ");
	scanf("%d",&y);
	int z= sub (x,y);
		printf("\nThe Substact Of Number is %d:",z);
	break;

	case 3:
	int e;
	int q;
	printf("\nEnter FIrst Num : ");
	scanf("%d",&e);
	printf("\nEnter Second Num :");
	scanf("%d",&q);
	int w= mul (e,q);
		printf("\nThe Multiply Of Number is %d:",w);
	break;
	case 4:
		void bio ();
	default:
		{
			printf("Code Is Out Of Range");
		}
}
	getch();
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;

}
int  sub(int a,int b)
{
	int z;
	z=a-b;
	return z;

}
int  mul(int a,int b)
{
	int w;
	w=a*b;
	return w;

}
void bio(void)
{
char name;
	printf("Enter Your Name : ");
	scanf("%c",&name);
	char fn;
	printf("Enter Your Father Name : ");
	scanf("%c",&fn);
char ad;
	printf("Enter Your Adress : ");
	scanf("%c",&ad);
char age;
	printf("Enter Your Age : ");
	scanf("%c",&age);
char nic;
	printf("Enter Your NIC : ");
	scanf("%c",&fn);
}